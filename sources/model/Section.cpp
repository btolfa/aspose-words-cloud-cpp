/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="Section.cpp">
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


#include "Section.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

Section::Section()
{
    m_ChildNodesIsSet = false;
    m_HeaderFootersIsSet = false;
    m_PageSetupIsSet = false;
    m_ParagraphsIsSet = false;
    m_TablesIsSet = false;
}

Section::~Section()
{
}

void Section::validate()
{
    // TODO: implement validation
}

web::json::value Section::toJson() const
{
    web::json::value val = this->LinkElement::toJson();

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
    if(m_HeaderFootersIsSet)
    {
        val[utility::conversions::to_string_t("HeaderFooters")] = ModelBase::toJson(m_HeaderFooters);
    }
    if(m_PageSetupIsSet)
    {
        val[utility::conversions::to_string_t("PageSetup")] = ModelBase::toJson(m_PageSetup);
    }
    if(m_ParagraphsIsSet)
    {
        val[utility::conversions::to_string_t("Paragraphs")] = ModelBase::toJson(m_Paragraphs);
    }
    if(m_TablesIsSet)
    {
        val[utility::conversions::to_string_t("Tables")] = ModelBase::toJson(m_Tables);
    }

    return val;
}

void Section::fromJson(web::json::value& val)
{
    this->LinkElement::fromJson(val);

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
    if(val.has_field(utility::conversions::to_string_t("HeaderFooters")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("HeaderFooters")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<LinkElement> newItem(new LinkElement());
            newItem->fromJson(fieldValue);
            setHeaderFooters( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("PageSetup")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("PageSetup")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<LinkElement> newItem(new LinkElement());
            newItem->fromJson(fieldValue);
            setPageSetup( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Paragraphs")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("Paragraphs")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<LinkElement> newItem(new LinkElement());
            newItem->fromJson(fieldValue);
            setParagraphs( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Tables")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("Tables")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<LinkElement> newItem(new LinkElement());
            newItem->fromJson(fieldValue);
            setTables( newItem );
        }
    }
}

void Section::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_LinkIsSet)
    {
        if (m_Link.get())
        {
            m_Link->toMultipart(multipart, utility::conversions::to_string_t("link."));
        }
        
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
    if(m_HeaderFootersIsSet)
    {
        if (m_HeaderFooters.get())
        {
            m_HeaderFooters->toMultipart(multipart, utility::conversions::to_string_t("HeaderFooters."));
        }
        
    }
    if(m_PageSetupIsSet)
    {
        if (m_PageSetup.get())
        {
            m_PageSetup->toMultipart(multipart, utility::conversions::to_string_t("PageSetup."));
        }
        
    }
    if(m_ParagraphsIsSet)
    {
        if (m_Paragraphs.get())
        {
            m_Paragraphs->toMultipart(multipart, utility::conversions::to_string_t("Paragraphs."));
        }
        
    }
    if(m_TablesIsSet)
    {
        if (m_Tables.get())
        {
            m_Tables->toMultipart(multipart, utility::conversions::to_string_t("Tables."));
        }
        
    }
}

void Section::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("link")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("link")))
        {
            std::shared_ptr<WordsApiLink> newItem(new WordsApiLink());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("link."));
            setLink( newItem );
        }
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
    if(multipart->hasContent(utility::conversions::to_string_t("HeaderFooters")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("HeaderFooters")))
        {
            std::shared_ptr<LinkElement> newItem(new LinkElement());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("HeaderFooters."));
            setHeaderFooters( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("PageSetup")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("PageSetup")))
        {
            std::shared_ptr<LinkElement> newItem(new LinkElement());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("PageSetup."));
            setPageSetup( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("Paragraphs")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("Paragraphs")))
        {
            std::shared_ptr<LinkElement> newItem(new LinkElement());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("Paragraphs."));
            setParagraphs( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("Tables")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("Tables")))
        {
            std::shared_ptr<LinkElement> newItem(new LinkElement());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("Tables."));
            setTables( newItem );
        }
    }
}

std::vector<std::shared_ptr<NodeLink>>& Section::getChildNodes()
{
    return m_ChildNodes;
}

void Section::setChildNodes(std::vector<std::shared_ptr<NodeLink>> value)
{
    m_ChildNodes = value;
    m_ChildNodesIsSet = true;
}
bool Section::childNodesIsSet() const
{
    return m_ChildNodesIsSet;
}

void Section::unsetChildNodes()
{
    m_ChildNodesIsSet = false;
}

std::shared_ptr<LinkElement> Section::getHeaderFooters() const
{
    return m_HeaderFooters;
}


void Section::setHeaderFooters(std::shared_ptr<LinkElement> value)
{
    m_HeaderFooters = value;
    m_HeaderFootersIsSet = true;
}
bool Section::headerFootersIsSet() const
{
    return m_HeaderFootersIsSet;
}

void Section::unsetHeaderFooters()
{
    m_HeaderFootersIsSet = false;
}

std::shared_ptr<LinkElement> Section::getPageSetup() const
{
    return m_PageSetup;
}


void Section::setPageSetup(std::shared_ptr<LinkElement> value)
{
    m_PageSetup = value;
    m_PageSetupIsSet = true;
}
bool Section::pageSetupIsSet() const
{
    return m_PageSetupIsSet;
}

void Section::unsetPageSetup()
{
    m_PageSetupIsSet = false;
}

std::shared_ptr<LinkElement> Section::getParagraphs() const
{
    return m_Paragraphs;
}


void Section::setParagraphs(std::shared_ptr<LinkElement> value)
{
    m_Paragraphs = value;
    m_ParagraphsIsSet = true;
}
bool Section::paragraphsIsSet() const
{
    return m_ParagraphsIsSet;
}

void Section::unsetParagraphs()
{
    m_ParagraphsIsSet = false;
}

std::shared_ptr<LinkElement> Section::getTables() const
{
    return m_Tables;
}


void Section::setTables(std::shared_ptr<LinkElement> value)
{
    m_Tables = value;
    m_TablesIsSet = true;
}
bool Section::tablesIsSet() const
{
    return m_TablesIsSet;
}

void Section::unsetTables()
{
    m_TablesIsSet = false;
}

}
}
}
}

