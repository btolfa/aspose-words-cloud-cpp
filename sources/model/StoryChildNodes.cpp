/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="StoryChildNodes.cpp">
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


#include "StoryChildNodes.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

StoryChildNodes::StoryChildNodes()
{
    m_ChildNodesIsSet = false;
}

StoryChildNodes::~StoryChildNodes()
{
}

void StoryChildNodes::validate()
{
    // TODO: implement validation
}

web::json::value StoryChildNodes::toJson() const
{
    web::json::value val = web::json::value::object();

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_ChildNodes )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[utility::conversions::to_string_t("ChildNodes")] = web::json::value::array(jsonArray);
        }
    }

    return val;
}

void StoryChildNodes::fromJson(web::json::value& val)
{
    {
        m_ChildNodes.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(utility::conversions::to_string_t("ChildNodes")))
        {
        for( auto& item : val[utility::conversions::to_string_t("ChildNodes")].as_array() )
        {
            if(item.is_null())
            {
                m_ChildNodes.push_back( std::shared_ptr<NodeLink>(nullptr) );
            }
            else
            {
                std::shared_ptr<NodeLink> newItem(new NodeLink());
                newItem->fromJson(item);
                m_ChildNodes.push_back( newItem );
            }
        }
        }
    }
}

void StoryChildNodes::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_ChildNodes )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ChildNodes"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
        }
    }
}

void StoryChildNodes::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    {
        m_ChildNodes.clear();
        if(multipart->hasContent(utility::conversions::to_string_t("ChildNodes")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ChildNodes"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_ChildNodes.push_back( std::shared_ptr<NodeLink>(nullptr) );
            }
            else
            {
                std::shared_ptr<NodeLink> newItem(new NodeLink());
                newItem->fromJson(item);
                m_ChildNodes.push_back( newItem );
            }
        }
        }
    }
}

std::vector<std::shared_ptr<NodeLink>>& StoryChildNodes::getChildNodes()
{
    return m_ChildNodes;
}

void StoryChildNodes::setChildNodes(std::vector<std::shared_ptr<NodeLink>> value)
{
    m_ChildNodes = value;
    m_ChildNodesIsSet = true;
}
bool StoryChildNodes::childNodesIsSet() const
{
    return m_ChildNodesIsSet;
}

void StoryChildNodes::unsetChildNodes()
{
    m_ChildNodesIsSet = false;
}

}
}
}
}

