/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="ProtectionDataResponse.cpp">
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


#include "ProtectionDataResponse.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

ProtectionDataResponse::ProtectionDataResponse()
{
    m_DocumentLinkIsSet = false;
    m_ProtectionDataIsSet = false;
}

ProtectionDataResponse::~ProtectionDataResponse()
{
}

void ProtectionDataResponse::validate()
{
    // TODO: implement validation
}

web::json::value ProtectionDataResponse::toJson() const
{
    web::json::value val = this->AsposeResponse::toJson();

    if(m_DocumentLinkIsSet)
    {
        val[utility::conversions::to_string_t("DocumentLink")] = ModelBase::toJson(m_DocumentLink);
    }
    if(m_ProtectionDataIsSet)
    {
        val[utility::conversions::to_string_t("ProtectionData")] = ModelBase::toJson(m_ProtectionData);
    }

    return val;
}

void ProtectionDataResponse::fromJson(web::json::value& val)
{
    this->AsposeResponse::fromJson(val);

    if(val.has_field(utility::conversions::to_string_t("DocumentLink")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("DocumentLink")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<FileLink> newItem(new FileLink());
            newItem->fromJson(fieldValue);
            setDocumentLink( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ProtectionData")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("ProtectionData")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<ProtectionData> newItem(new ProtectionData());
            newItem->fromJson(fieldValue);
            setProtectionData( newItem );
        }
    }
}

void ProtectionDataResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("Code"), m_Code));
    if(m_StatusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("Status"), m_Status));
        
    }
    if(m_DocumentLinkIsSet)
    {
        if (m_DocumentLink.get())
        {
            m_DocumentLink->toMultipart(multipart, utility::conversions::to_string_t("DocumentLink."));
        }
        
    }
    if(m_ProtectionDataIsSet)
    {
        if (m_ProtectionData.get())
        {
            m_ProtectionData->toMultipart(multipart, utility::conversions::to_string_t("ProtectionData."));
        }
        
    }
}

void ProtectionDataResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setCode(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("Code"))));
    if(multipart->hasContent(utility::conversions::to_string_t("Status")))
    {
        setStatus(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("Status"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("DocumentLink")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("DocumentLink")))
        {
            std::shared_ptr<FileLink> newItem(new FileLink());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("DocumentLink."));
            setDocumentLink( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ProtectionData")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("ProtectionData")))
        {
            std::shared_ptr<ProtectionData> newItem(new ProtectionData());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("ProtectionData."));
            setProtectionData( newItem );
        }
    }
}

std::shared_ptr<FileLink> ProtectionDataResponse::getDocumentLink() const
{
    return m_DocumentLink;
}


void ProtectionDataResponse::setDocumentLink(std::shared_ptr<FileLink> value)
{
    m_DocumentLink = value;
    m_DocumentLinkIsSet = true;
}
bool ProtectionDataResponse::documentLinkIsSet() const
{
    return m_DocumentLinkIsSet;
}

void ProtectionDataResponse::unsetDocumentLink()
{
    m_DocumentLinkIsSet = false;
}

std::shared_ptr<ProtectionData> ProtectionDataResponse::getProtectionData() const
{
    return m_ProtectionData;
}


void ProtectionDataResponse::setProtectionData(std::shared_ptr<ProtectionData> value)
{
    m_ProtectionData = value;
    m_ProtectionDataIsSet = true;
}
bool ProtectionDataResponse::protectionDataIsSet() const
{
    return m_ProtectionDataIsSet;
}

void ProtectionDataResponse::unsetProtectionData()
{
    m_ProtectionDataIsSet = false;
}

}
}
}
}

