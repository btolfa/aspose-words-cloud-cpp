/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="OutlineOptionsData.cpp">
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


#include "OutlineOptionsData.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

OutlineOptionsData::OutlineOptionsData()
{
    m_BookmarksOutlineLevelsIsSet = false;
    m_DefaultBookmarksOutlineLevel = 0;
    m_DefaultBookmarksOutlineLevelIsSet = false;
    m_CreateMissingOutlineLevels = false;
    m_CreateMissingOutlineLevelsIsSet = false;
    m_CreateOutlinesForHeadingsInTables = false;
    m_CreateOutlinesForHeadingsInTablesIsSet = false;
    m_ExpandedOutlineLevels = 0;
    m_ExpandedOutlineLevelsIsSet = false;
    m_HeadingsOutlineLevels = 0;
    m_HeadingsOutlineLevelsIsSet = false;
}

OutlineOptionsData::~OutlineOptionsData()
{
}

void OutlineOptionsData::validate()
{
    // TODO: implement validation
}

web::json::value OutlineOptionsData::toJson() const
{
    web::json::value val = web::json::value::object();

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_BookmarksOutlineLevels )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[utility::conversions::to_string_t("BookmarksOutlineLevels")] = web::json::value::array(jsonArray);
        }
    }
    if(m_DefaultBookmarksOutlineLevelIsSet)
    {
        val[utility::conversions::to_string_t("DefaultBookmarksOutlineLevel")] = ModelBase::toJson(m_DefaultBookmarksOutlineLevel);
    }
    if(m_CreateMissingOutlineLevelsIsSet)
    {
        val[utility::conversions::to_string_t("CreateMissingOutlineLevels")] = ModelBase::toJson(m_CreateMissingOutlineLevels);
    }
    if(m_CreateOutlinesForHeadingsInTablesIsSet)
    {
        val[utility::conversions::to_string_t("CreateOutlinesForHeadingsInTables")] = ModelBase::toJson(m_CreateOutlinesForHeadingsInTables);
    }
    if(m_ExpandedOutlineLevelsIsSet)
    {
        val[utility::conversions::to_string_t("ExpandedOutlineLevels")] = ModelBase::toJson(m_ExpandedOutlineLevels);
    }
    if(m_HeadingsOutlineLevelsIsSet)
    {
        val[utility::conversions::to_string_t("HeadingsOutlineLevels")] = ModelBase::toJson(m_HeadingsOutlineLevels);
    }

    return val;
}

void OutlineOptionsData::fromJson(web::json::value& val)
{
    {
        m_BookmarksOutlineLevels.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(utility::conversions::to_string_t("BookmarksOutlineLevels")))
        {
        for( auto& item : val[utility::conversions::to_string_t("BookmarksOutlineLevels")].as_array() )
        {
            if(item.is_null())
            {
                m_BookmarksOutlineLevels.push_back( std::shared_ptr<BookmarksOutlineLevelData>(nullptr) );
            }
            else
            {
                std::shared_ptr<BookmarksOutlineLevelData> newItem(new BookmarksOutlineLevelData());
                newItem->fromJson(item);
                m_BookmarksOutlineLevels.push_back( newItem );
            }
        }
        }
    }
    if(val.has_field(utility::conversions::to_string_t("DefaultBookmarksOutlineLevel")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("DefaultBookmarksOutlineLevel")];
        if(!fieldValue.is_null())
        {
            setDefaultBookmarksOutlineLevel(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("CreateMissingOutlineLevels")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("CreateMissingOutlineLevels")];
        if(!fieldValue.is_null())
        {
            setCreateMissingOutlineLevels(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("CreateOutlinesForHeadingsInTables")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("CreateOutlinesForHeadingsInTables")];
        if(!fieldValue.is_null())
        {
            setCreateOutlinesForHeadingsInTables(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ExpandedOutlineLevels")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("ExpandedOutlineLevels")];
        if(!fieldValue.is_null())
        {
            setExpandedOutlineLevels(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("HeadingsOutlineLevels")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("HeadingsOutlineLevels")];
        if(!fieldValue.is_null())
        {
            setHeadingsOutlineLevels(ModelBase::int32_tFromJson(fieldValue));
        }
    }
}

void OutlineOptionsData::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_BookmarksOutlineLevels )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("BookmarksOutlineLevels"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
        }
    }
    if(m_DefaultBookmarksOutlineLevelIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("DefaultBookmarksOutlineLevel"), m_DefaultBookmarksOutlineLevel));
    }
    if(m_CreateMissingOutlineLevelsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("CreateMissingOutlineLevels"), m_CreateMissingOutlineLevels));
    }
    if(m_CreateOutlinesForHeadingsInTablesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("CreateOutlinesForHeadingsInTables"), m_CreateOutlinesForHeadingsInTables));
    }
    if(m_ExpandedOutlineLevelsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ExpandedOutlineLevels"), m_ExpandedOutlineLevels));
    }
    if(m_HeadingsOutlineLevelsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("HeadingsOutlineLevels"), m_HeadingsOutlineLevels));
    }
}

void OutlineOptionsData::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    {
        m_BookmarksOutlineLevels.clear();
        if(multipart->hasContent(utility::conversions::to_string_t("BookmarksOutlineLevels")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("BookmarksOutlineLevels"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_BookmarksOutlineLevels.push_back( std::shared_ptr<BookmarksOutlineLevelData>(nullptr) );
            }
            else
            {
                std::shared_ptr<BookmarksOutlineLevelData> newItem(new BookmarksOutlineLevelData());
                newItem->fromJson(item);
                m_BookmarksOutlineLevels.push_back( newItem );
            }
        }
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("DefaultBookmarksOutlineLevel")))
    {
        setDefaultBookmarksOutlineLevel(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("DefaultBookmarksOutlineLevel"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("CreateMissingOutlineLevels")))
    {
        setCreateMissingOutlineLevels(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("CreateMissingOutlineLevels"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("CreateOutlinesForHeadingsInTables")))
    {
        setCreateOutlinesForHeadingsInTables(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("CreateOutlinesForHeadingsInTables"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ExpandedOutlineLevels")))
    {
        setExpandedOutlineLevels(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ExpandedOutlineLevels"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("HeadingsOutlineLevels")))
    {
        setHeadingsOutlineLevels(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("HeadingsOutlineLevels"))));
    }
}

std::vector<std::shared_ptr<BookmarksOutlineLevelData>>& OutlineOptionsData::getBookmarksOutlineLevels()
{
    return m_BookmarksOutlineLevels;
}

void OutlineOptionsData::setBookmarksOutlineLevels(std::vector<std::shared_ptr<BookmarksOutlineLevelData>> value)
{
    m_BookmarksOutlineLevels = value;
    m_BookmarksOutlineLevelsIsSet = true;
}
bool OutlineOptionsData::bookmarksOutlineLevelsIsSet() const
{
    return m_BookmarksOutlineLevelsIsSet;
}

void OutlineOptionsData::unsetBookmarksOutlineLevels()
{
    m_BookmarksOutlineLevelsIsSet = false;
}

int32_t OutlineOptionsData::getDefaultBookmarksOutlineLevel() const
{
    return m_DefaultBookmarksOutlineLevel;
}


void OutlineOptionsData::setDefaultBookmarksOutlineLevel(int32_t value)
{
    m_DefaultBookmarksOutlineLevel = value;
    m_DefaultBookmarksOutlineLevelIsSet = true;
}
bool OutlineOptionsData::defaultBookmarksOutlineLevelIsSet() const
{
    return m_DefaultBookmarksOutlineLevelIsSet;
}

void OutlineOptionsData::unsetDefaultBookmarksOutlineLevel()
{
    m_DefaultBookmarksOutlineLevelIsSet = false;
}

bool OutlineOptionsData::isCreateMissingOutlineLevels() const
{
    return m_CreateMissingOutlineLevels;
}


void OutlineOptionsData::setCreateMissingOutlineLevels(bool value)
{
    m_CreateMissingOutlineLevels = value;
    m_CreateMissingOutlineLevelsIsSet = true;
}
bool OutlineOptionsData::createMissingOutlineLevelsIsSet() const
{
    return m_CreateMissingOutlineLevelsIsSet;
}

void OutlineOptionsData::unsetCreateMissingOutlineLevels()
{
    m_CreateMissingOutlineLevelsIsSet = false;
}

bool OutlineOptionsData::isCreateOutlinesForHeadingsInTables() const
{
    return m_CreateOutlinesForHeadingsInTables;
}


void OutlineOptionsData::setCreateOutlinesForHeadingsInTables(bool value)
{
    m_CreateOutlinesForHeadingsInTables = value;
    m_CreateOutlinesForHeadingsInTablesIsSet = true;
}
bool OutlineOptionsData::createOutlinesForHeadingsInTablesIsSet() const
{
    return m_CreateOutlinesForHeadingsInTablesIsSet;
}

void OutlineOptionsData::unsetCreateOutlinesForHeadingsInTables()
{
    m_CreateOutlinesForHeadingsInTablesIsSet = false;
}

int32_t OutlineOptionsData::getExpandedOutlineLevels() const
{
    return m_ExpandedOutlineLevels;
}


void OutlineOptionsData::setExpandedOutlineLevels(int32_t value)
{
    m_ExpandedOutlineLevels = value;
    m_ExpandedOutlineLevelsIsSet = true;
}
bool OutlineOptionsData::expandedOutlineLevelsIsSet() const
{
    return m_ExpandedOutlineLevelsIsSet;
}

void OutlineOptionsData::unsetExpandedOutlineLevels()
{
    m_ExpandedOutlineLevelsIsSet = false;
}

int32_t OutlineOptionsData::getHeadingsOutlineLevels() const
{
    return m_HeadingsOutlineLevels;
}


void OutlineOptionsData::setHeadingsOutlineLevels(int32_t value)
{
    m_HeadingsOutlineLevels = value;
    m_HeadingsOutlineLevelsIsSet = true;
}
bool OutlineOptionsData::headingsOutlineLevelsIsSet() const
{
    return m_HeadingsOutlineLevelsIsSet;
}

void OutlineOptionsData::unsetHeadingsOutlineLevels()
{
    m_HeadingsOutlineLevelsIsSet = false;
}

}
}
}
}

