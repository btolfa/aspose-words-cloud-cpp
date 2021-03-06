/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="PageNumber.cpp">
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


#include "PageNumber.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

PageNumber::PageNumber()
{
    m_Format = utility::conversions::to_string_t("");
    m_FormatIsSet = false;
    m_Alignment = utility::conversions::to_string_t("");
    m_AlignmentIsSet = false;
    m_IsTop = false;
    m_SetPageNumberOnFirstPage = false;
}

PageNumber::~PageNumber()
{
}

void PageNumber::validate()
{
    // TODO: implement validation
}

web::json::value PageNumber::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_FormatIsSet)
    {
        val[utility::conversions::to_string_t("Format")] = ModelBase::toJson(m_Format);
    }
    if(m_AlignmentIsSet)
    {
        val[utility::conversions::to_string_t("Alignment")] = ModelBase::toJson(m_Alignment);
    }
    val[utility::conversions::to_string_t("IsTop")] = ModelBase::toJson(m_IsTop);
    val[utility::conversions::to_string_t("SetPageNumberOnFirstPage")] = ModelBase::toJson(m_SetPageNumberOnFirstPage);

    return val;
}

void PageNumber::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("Format")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("Format")];
        if(!fieldValue.is_null())
        {
            setFormat(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Alignment")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("Alignment")];
        if(!fieldValue.is_null())
        {
            setAlignment(ModelBase::stringFromJson(fieldValue));
        }
    }
    setIsTop(ModelBase::boolFromJson(val[utility::conversions::to_string_t("IsTop")]));
    setSetPageNumberOnFirstPage(ModelBase::boolFromJson(val[utility::conversions::to_string_t("SetPageNumberOnFirstPage")]));
}

void PageNumber::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_FormatIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("Format"), m_Format));
        
    }
    if(m_AlignmentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("Alignment"), m_Alignment));
        
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("IsTop"), m_IsTop));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("SetPageNumberOnFirstPage"), m_SetPageNumberOnFirstPage));
}

void PageNumber::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("Format")))
    {
        setFormat(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("Format"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("Alignment")))
    {
        setAlignment(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("Alignment"))));
    }
    setIsTop(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("IsTop"))));
    setSetPageNumberOnFirstPage(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("SetPageNumberOnFirstPage"))));
}

utility::string_t PageNumber::getFormat() const
{
    return m_Format;
}


void PageNumber::setFormat(utility::string_t value)
{
    m_Format = value;
    m_FormatIsSet = true;
}
bool PageNumber::formatIsSet() const
{
    return m_FormatIsSet;
}

void PageNumber::unsetFormat()
{
    m_FormatIsSet = false;
}

utility::string_t PageNumber::getAlignment() const
{
    return m_Alignment;
}


void PageNumber::setAlignment(utility::string_t value)
{
    m_Alignment = value;
    m_AlignmentIsSet = true;
}
bool PageNumber::alignmentIsSet() const
{
    return m_AlignmentIsSet;
}

void PageNumber::unsetAlignment()
{
    m_AlignmentIsSet = false;
}

bool PageNumber::isIsTop() const
{
    return m_IsTop;
}


void PageNumber::setIsTop(bool value)
{
    m_IsTop = value;
    
}
bool PageNumber::isSetPageNumberOnFirstPage() const
{
    return m_SetPageNumberOnFirstPage;
}


void PageNumber::setSetPageNumberOnFirstPage(bool value)
{
    m_SetPageNumberOnFirstPage = value;
    
}
}
}
}
}

