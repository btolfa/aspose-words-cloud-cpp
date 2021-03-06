/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="SearchResult.cpp">
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


#include "SearchResult.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

SearchResult::SearchResult()
{
    m_RangeStartIsSet = false;
    m_RangeEndIsSet = false;
}

SearchResult::~SearchResult()
{
}

void SearchResult::validate()
{
    // TODO: implement validation
}

web::json::value SearchResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_RangeStartIsSet)
    {
        val[utility::conversions::to_string_t("RangeStart")] = ModelBase::toJson(m_RangeStart);
    }
    if(m_RangeEndIsSet)
    {
        val[utility::conversions::to_string_t("RangeEnd")] = ModelBase::toJson(m_RangeEnd);
    }

    return val;
}

void SearchResult::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("RangeStart")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("RangeStart")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<DocumentPosition> newItem(new DocumentPosition());
            newItem->fromJson(fieldValue);
            setRangeStart( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("RangeEnd")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("RangeEnd")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<DocumentPosition> newItem(new DocumentPosition());
            newItem->fromJson(fieldValue);
            setRangeEnd( newItem );
        }
    }
}

void SearchResult::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_RangeStartIsSet)
    {
        if (m_RangeStart.get())
        {
            m_RangeStart->toMultipart(multipart, utility::conversions::to_string_t("RangeStart."));
        }
        
    }
    if(m_RangeEndIsSet)
    {
        if (m_RangeEnd.get())
        {
            m_RangeEnd->toMultipart(multipart, utility::conversions::to_string_t("RangeEnd."));
        }
        
    }
}

void SearchResult::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("RangeStart")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("RangeStart")))
        {
            std::shared_ptr<DocumentPosition> newItem(new DocumentPosition());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("RangeStart."));
            setRangeStart( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("RangeEnd")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("RangeEnd")))
        {
            std::shared_ptr<DocumentPosition> newItem(new DocumentPosition());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("RangeEnd."));
            setRangeEnd( newItem );
        }
    }
}

std::shared_ptr<DocumentPosition> SearchResult::getRangeStart() const
{
    return m_RangeStart;
}


void SearchResult::setRangeStart(std::shared_ptr<DocumentPosition> value)
{
    m_RangeStart = value;
    m_RangeStartIsSet = true;
}
bool SearchResult::rangeStartIsSet() const
{
    return m_RangeStartIsSet;
}

void SearchResult::unsetRangeStart()
{
    m_RangeStartIsSet = false;
}

std::shared_ptr<DocumentPosition> SearchResult::getRangeEnd() const
{
    return m_RangeEnd;
}


void SearchResult::setRangeEnd(std::shared_ptr<DocumentPosition> value)
{
    m_RangeEnd = value;
    m_RangeEndIsSet = true;
}
bool SearchResult::rangeEndIsSet() const
{
    return m_RangeEndIsSet;
}

void SearchResult::unsetRangeEnd()
{
    m_RangeEndIsSet = false;
}

}
}
}
}

