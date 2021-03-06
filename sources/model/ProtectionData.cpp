/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="ProtectionData.cpp">
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


#include "ProtectionData.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

ProtectionData::ProtectionData()
{
    m_ProtectionType = utility::conversions::to_string_t("");
    m_ProtectionTypeIsSet = false;
}

ProtectionData::~ProtectionData()
{
}

void ProtectionData::validate()
{
    // TODO: implement validation
}

web::json::value ProtectionData::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_ProtectionTypeIsSet)
    {
        val[utility::conversions::to_string_t("ProtectionType")] = ModelBase::toJson(m_ProtectionType);
    }

    return val;
}

void ProtectionData::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("ProtectionType")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("ProtectionType")];
        if(!fieldValue.is_null())
        {
            setProtectionType(ModelBase::stringFromJson(fieldValue));
        }
    }
}

void ProtectionData::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_ProtectionTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ProtectionType"), m_ProtectionType));
        
    }
}

void ProtectionData::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("ProtectionType")))
    {
        setProtectionType(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ProtectionType"))));
    }
}

utility::string_t ProtectionData::getProtectionType() const
{
    return m_ProtectionType;
}


void ProtectionData::setProtectionType(utility::string_t value)
{
    m_ProtectionType = value;
    m_ProtectionTypeIsSet = true;
}
bool ProtectionData::protectionTypeIsSet() const
{
    return m_ProtectionTypeIsSet;
}

void ProtectionData::unsetProtectionType()
{
    m_ProtectionTypeIsSet = false;
}

}
}
}
}

