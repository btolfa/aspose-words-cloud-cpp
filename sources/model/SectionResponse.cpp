/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="SectionResponse.cpp">
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


#include "SectionResponse.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

SectionResponse::SectionResponse()
{
    m_SectionIsSet = false;
}

SectionResponse::~SectionResponse()
{
}

void SectionResponse::validate()
{
    // TODO: implement validation
}

web::json::value SectionResponse::toJson() const
{
    web::json::value val = this->AsposeResponse::toJson();

    if(m_SectionIsSet)
    {
        val[utility::conversions::to_string_t("Section")] = ModelBase::toJson(m_Section);
    }

    return val;
}

void SectionResponse::fromJson(web::json::value& val)
{
    this->AsposeResponse::fromJson(val);

    if(val.has_field(utility::conversions::to_string_t("Section")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("Section")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Section> newItem(new Section());
            newItem->fromJson(fieldValue);
            setSection( newItem );
        }
    }
}

void SectionResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_SectionIsSet)
    {
        if (m_Section.get())
        {
            m_Section->toMultipart(multipart, utility::conversions::to_string_t("Section."));
        }
        
    }
}

void SectionResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("Section")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("Section")))
        {
            std::shared_ptr<Section> newItem(new Section());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("Section."));
            setSection( newItem );
        }
    }
}

std::shared_ptr<Section> SectionResponse::getSection() const
{
    return m_Section;
}


void SectionResponse::setSection(std::shared_ptr<Section> value)
{
    m_Section = value;
    m_SectionIsSet = true;
}
bool SectionResponse::sectionIsSet() const
{
    return m_SectionIsSet;
}

void SectionResponse::unsetSection()
{
    m_SectionIsSet = false;
}

}
}
}
}

