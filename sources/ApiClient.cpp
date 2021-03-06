/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="ApiClient.cpp">
*   Copyright (c) 2018 Aspose.Words for Cloud
* </copyright>
* <summary>
*   Permission is hereby granted, free of charge, to any person obtaining a copy
*  of this software and associated documentation files (the "Software"), to deal
*  in the Software without restriction, including without limitation the rights
*  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
*  copies of the Software, and to permit persons to whom the Software is
*  furnished to do so, subject to the following conditions:
* 
*  The above copyright notice and this permission notice shall be included in all
*  copies or substantial portions of the Software.
* 
*  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
*  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
*  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
*  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
*  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
*  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
*  SOFTWARE.
* </summary> 
-------------------------------------------------------------------------------------------------------------------- **/
#include "ApiClient.h"
#include "MultipartFormData.h"
#include "ModelBase.h"

namespace io {
namespace swagger {
namespace client {
namespace api {

using namespace io::swagger::client::model;

ApiClient::ApiClient(std::shared_ptr<ApiConfiguration> configuration )
    : m_Configuration(configuration)
{
}
ApiClient::~ApiClient()
{
}

pplx::task<void> ApiClient::requestToken()
{
    if (m_Configuration == nullptr)
            throw "Configuration must be set before calling an api methods";

    std::map<utility::string_t, utility::string_t> queryParams, formParams, headerParams;
    std::map<utility::string_t, std::shared_ptr<io::swagger::client::model::HttpContent>> fileParams;
    std::shared_ptr<IHttpBody> httpBody;

    formParams.insert(std::make_pair(utility::conversions::to_string_t("grant_type"), 
		utility::conversions::to_string_t("client_credentials")));
	formParams.insert(std::make_pair(utility::conversions::to_string_t("client_id"),
		m_Configuration->getAppSid()));
	formParams.insert(std::make_pair(utility::conversions::to_string_t("client_secret"),
		m_Configuration->getAppKey()));

    return callApi(getTokenUrl(), L"POST", queryParams,httpBody, headerParams, formParams, fileParams, 
		utility::conversions::to_string_t("application/x-www-form-urlencoded")).then([=](web::http::http_response response) {
		
		if (response.status_code() >= 400)
			throw ApiException(response.status_code()
				, utility::conversions::to_string_t("error requesting token: ") + response.reason_phrase()
				, std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));

		return response.extract_json();
    }).then([this](web::json::value val) {
        this->setAccessToken(val[L"access_token"].as_string());
    });
}

utility::string_t ApiClient::getTokenUrl() const {
	return m_Configuration->getBaseUrl() + utility::conversions::to_string_t("/oauth2/token");            
}

void ApiClient::setAccessToken(utility::string_t token){
    m_AccessToken = token;
}

std::shared_ptr<ApiConfiguration> ApiClient::getConfiguration() const
{
    return m_Configuration;
}
void ApiClient::setConfiguration(std::shared_ptr<ApiConfiguration> configuration)
{
    m_Configuration = configuration;
}


utility::string_t ApiClient::parameterToString(utility::string_t value)
{
    return value;
}
utility::string_t ApiClient::parameterToString(int64_t value)
{
	std::stringstream valueAsStringStream;
	valueAsStringStream << value;
    return utility::conversions::to_string_t(valueAsStringStream.str());
}
utility::string_t ApiClient::parameterToString(int32_t value)
{
	std::stringstream valueAsStringStream;
	valueAsStringStream << value;
    return utility::conversions::to_string_t(valueAsStringStream.str());
}

utility::string_t ApiClient::parameterToString(float value)
{
    return utility::conversions::to_string_t(std::to_string(value));
}

utility::string_t ApiClient::parameterToString(double value)
{
    return utility::conversions::to_string_t(std::to_string(value));
}

utility::string_t ApiClient::parameterToString(const utility::datetime &value)
{
    return utility::conversions::to_string_t(value.to_string(utility::datetime::ISO_8601));
}

pplx::task<web::http::http_response> ApiClient::callApi(
    const utility::string_t& path,
    const utility::string_t& method,
    const std::map<utility::string_t, utility::string_t>& queryParams,
    const std::shared_ptr<IHttpBody> postBody,
    const std::map<utility::string_t, utility::string_t>& headerParams,
    const std::map<utility::string_t, utility::string_t>& formParams,
    const std::map<utility::string_t, std::shared_ptr<HttpContent>>& fileParams,
    const utility::string_t& contentType
)
{
    if (postBody != nullptr && formParams.size() != 0)
    {
        throw ApiException(400, utility::conversions::to_string_t("Cannot have body and form params"));
    }

    if (postBody != nullptr && fileParams.size() != 0)
    {
        throw ApiException(400, utility::conversions::to_string_t("Cannot have body and file params"));
    }

    if (fileParams.size() > 0 && contentType != utility::conversions::to_string_t("multipart/form-data"))
    {
        throw ApiException(400, utility::conversions::to_string_t("Operations with file parameters must be called with multipart/form-data"));
    }

    web::http::client::http_client client(m_Configuration->getBaseUrl(), m_Configuration->getHttpConfig());

    web::http::http_request request;
    for ( auto& kvp : headerParams )
    {
        request.headers().add(kvp.first, kvp.second);
    }

    if (fileParams.size() > 0)
    {
        MultipartFormData uploadData;
        for (auto& kvp : formParams)
        {
            uploadData.add(ModelBase::toHttpContent(kvp.first, kvp.second));
        }
        for (auto& kvp : fileParams)
        {
            uploadData.add(ModelBase::toHttpContent(kvp.first, kvp.second));
        }
        std::stringstream data;
        uploadData.writeTo(data);
        auto bodyString = data.str();
        auto length = bodyString.size();
        request.set_body(concurrency::streams::bytestream::open_istream(std::move(bodyString)), length, utility::conversions::to_string_t("multipart/form-data; boundary=") + uploadData.getBoundary());
    }
    else
    {
        if (postBody != nullptr)
        {
            std::stringstream data;
            postBody->writeTo(data);
            auto bodyString = data.str();
            auto length = bodyString.size();
            request.set_body(concurrency::streams::bytestream::open_istream(std::move(bodyString)), length, contentType);
        }
        else
        {
            if (contentType == utility::conversions::to_string_t("application/json"))
            {
                web::json::value body_data = web::json::value::object();
                for (auto& kvp : formParams)
                {
                    body_data[kvp.first] = ModelBase::toJson(kvp.second);
                }
                if (!formParams.empty())
                {
                    request.set_body(body_data);
		}
            }
            else
            {
                web::http::uri_builder formData;
                for (auto& kvp : formParams)
                {
                    formData.append_query(kvp.first, kvp.second);
                }
                if (!formParams.empty())
                {
                    request.set_body(formData.query(), utility::conversions::to_string_t("application/x-www-form-urlencoded"));
                }
            }
        }
    }

    web::http::uri_builder builder(path);
    for (auto& kvp : queryParams)
    {
        builder.append_query(kvp.first, kvp.second);
    }
    request.set_request_uri(builder.to_uri());
    request.set_method(method);
    if ( !request.headers().has( web::http::header_names::user_agent ) )
    {
        request.headers().add( web::http::header_names::user_agent, m_Configuration->getUserAgent() );
    }

    return client.request(request);
}

}
}
}
}
