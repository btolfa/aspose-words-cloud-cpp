/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="SearchResponse.cpp">
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


#include "SearchResponse.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

SearchResponse::SearchResponse()
{
    m_SearchingPattern = utility::conversions::to_string_t("");
    m_SearchingPatternIsSet = false;
    m_SearchResultsIsSet = false;
}

SearchResponse::~SearchResponse()
{
}

void SearchResponse::validate()
{
    // TODO: implement validation
}

web::json::value SearchResponse::toJson() const
{
    web::json::value val = this->AsposeResponse::toJson();

    if(m_SearchingPatternIsSet)
    {
        val[utility::conversions::to_string_t("SearchingPattern")] = ModelBase::toJson(m_SearchingPattern);
    }
    if(m_SearchResultsIsSet)
    {
        val[utility::conversions::to_string_t("SearchResults")] = ModelBase::toJson(m_SearchResults);
    }

    return val;
}

void SearchResponse::fromJson(web::json::value& val)
{
    this->AsposeResponse::fromJson(val);

    if(val.has_field(utility::conversions::to_string_t("SearchingPattern")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("SearchingPattern")];
        if(!fieldValue.is_null())
        {
            setSearchingPattern(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("SearchResults")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("SearchResults")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<SearchResultsCollection> newItem(new SearchResultsCollection());
            newItem->fromJson(fieldValue);
            setSearchResults( newItem );
        }
    }
}

void SearchResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_SearchingPatternIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("SearchingPattern"), m_SearchingPattern));
        
    }
    if(m_SearchResultsIsSet)
    {
        if (m_SearchResults.get())
        {
            m_SearchResults->toMultipart(multipart, utility::conversions::to_string_t("SearchResults."));
        }
        
    }
}

void SearchResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("SearchingPattern")))
    {
        setSearchingPattern(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("SearchingPattern"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("SearchResults")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("SearchResults")))
        {
            std::shared_ptr<SearchResultsCollection> newItem(new SearchResultsCollection());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("SearchResults."));
            setSearchResults( newItem );
        }
    }
}

utility::string_t SearchResponse::getSearchingPattern() const
{
    return m_SearchingPattern;
}


void SearchResponse::setSearchingPattern(utility::string_t value)
{
    m_SearchingPattern = value;
    m_SearchingPatternIsSet = true;
}
bool SearchResponse::searchingPatternIsSet() const
{
    return m_SearchingPatternIsSet;
}

void SearchResponse::unsetSearchingPattern()
{
    m_SearchingPatternIsSet = false;
}

std::shared_ptr<SearchResultsCollection> SearchResponse::getSearchResults() const
{
    return m_SearchResults;
}


void SearchResponse::setSearchResults(std::shared_ptr<SearchResultsCollection> value)
{
    m_SearchResults = value;
    m_SearchResultsIsSet = true;
}
bool SearchResponse::searchResultsIsSet() const
{
    return m_SearchResultsIsSet;
}

void SearchResponse::unsetSearchResults()
{
    m_SearchResultsIsSet = false;
}

}
}
}
}

