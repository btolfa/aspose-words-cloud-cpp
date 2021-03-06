/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="Comment.cpp">
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


#include "Comment.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

Comment::Comment()
{
    m_Author = utility::conversions::to_string_t("");
    m_AuthorIsSet = false;
    m_ContentIsSet = false;
    m_DateTime = utility::datetime();
    m_DateTimeIsSet = false;
    m_Initial = utility::conversions::to_string_t("");
    m_InitialIsSet = false;
    m_RangeEndIsSet = false;
    m_RangeStartIsSet = false;
    m_Text = utility::conversions::to_string_t("");
    m_TextIsSet = false;
}

Comment::~Comment()
{
}

void Comment::validate()
{
    // TODO: implement validation
}

web::json::value Comment::toJson() const
{
    web::json::value val = this->CommentLink::toJson();

    if(m_AuthorIsSet)
    {
        val[utility::conversions::to_string_t("Author")] = ModelBase::toJson(m_Author);
    }
    if(m_ContentIsSet)
    {
        val[utility::conversions::to_string_t("Content")] = ModelBase::toJson(m_Content);
    }
    if(m_DateTimeIsSet)
    {
        val[utility::conversions::to_string_t("DateTime")] = ModelBase::toJson(m_DateTime);
    }
    if(m_InitialIsSet)
    {
        val[utility::conversions::to_string_t("Initial")] = ModelBase::toJson(m_Initial);
    }
    if(m_RangeEndIsSet)
    {
        val[utility::conversions::to_string_t("RangeEnd")] = ModelBase::toJson(m_RangeEnd);
    }
    if(m_RangeStartIsSet)
    {
        val[utility::conversions::to_string_t("RangeStart")] = ModelBase::toJson(m_RangeStart);
    }
    if(m_TextIsSet)
    {
        val[utility::conversions::to_string_t("Text")] = ModelBase::toJson(m_Text);
    }

    return val;
}

void Comment::fromJson(web::json::value& val)
{
    this->CommentLink::fromJson(val);

    if(val.has_field(utility::conversions::to_string_t("Author")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("Author")];
        if(!fieldValue.is_null())
        {
            setAuthor(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Content")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("Content")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<StoryChildNodes> newItem(new StoryChildNodes());
            newItem->fromJson(fieldValue);
            setContent( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("DateTime")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("DateTime")];
        if(!fieldValue.is_null())
        {
            setDateTime(ModelBase::dateFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Initial")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("Initial")];
        if(!fieldValue.is_null())
        {
            setInitial(ModelBase::stringFromJson(fieldValue));
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
    if(val.has_field(utility::conversions::to_string_t("Text")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("Text")];
        if(!fieldValue.is_null())
        {
            setText(ModelBase::stringFromJson(fieldValue));
        }
    }
}

void Comment::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_AuthorIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("Author"), m_Author));
        
    }
    if(m_ContentIsSet)
    {
        if (m_Content.get())
        {
            m_Content->toMultipart(multipart, utility::conversions::to_string_t("Content."));
        }
        
    }
    if(m_DateTimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("DateTime"), m_DateTime));
        
    }
    if(m_InitialIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("Initial"), m_Initial));
        
    }
    if(m_RangeEndIsSet)
    {
        if (m_RangeEnd.get())
        {
            m_RangeEnd->toMultipart(multipart, utility::conversions::to_string_t("RangeEnd."));
        }
        
    }
    if(m_RangeStartIsSet)
    {
        if (m_RangeStart.get())
        {
            m_RangeStart->toMultipart(multipart, utility::conversions::to_string_t("RangeStart."));
        }
        
    }
    if(m_TextIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("Text"), m_Text));
        
    }
}

void Comment::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("Author")))
    {
        setAuthor(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("Author"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("Content")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("Content")))
        {
            std::shared_ptr<StoryChildNodes> newItem(new StoryChildNodes());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("Content."));
            setContent( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("DateTime")))
    {
        setDateTime(ModelBase::dateFromHttpContent(multipart->getContent(utility::conversions::to_string_t("DateTime"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("Initial")))
    {
        setInitial(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("Initial"))));
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
    if(multipart->hasContent(utility::conversions::to_string_t("RangeStart")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("RangeStart")))
        {
            std::shared_ptr<DocumentPosition> newItem(new DocumentPosition());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("RangeStart."));
            setRangeStart( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("Text")))
    {
        setText(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("Text"))));
    }
}

utility::string_t Comment::getAuthor() const
{
    return m_Author;
}


void Comment::setAuthor(utility::string_t value)
{
    m_Author = value;
    m_AuthorIsSet = true;
}
bool Comment::authorIsSet() const
{
    return m_AuthorIsSet;
}

void Comment::unsetAuthor()
{
    m_AuthorIsSet = false;
}

std::shared_ptr<StoryChildNodes> Comment::getContent() const
{
    return m_Content;
}


void Comment::setContent(std::shared_ptr<StoryChildNodes> value)
{
    m_Content = value;
    m_ContentIsSet = true;
}
bool Comment::contentIsSet() const
{
    return m_ContentIsSet;
}

void Comment::unsetContent()
{
    m_ContentIsSet = false;
}

utility::datetime Comment::getDateTime() const
{
    return m_DateTime;
}


void Comment::setDateTime(utility::datetime value)
{
    m_DateTime = value;
    m_DateTimeIsSet = true;
}
bool Comment::dateTimeIsSet() const
{
    return m_DateTimeIsSet;
}

void Comment::unsetDateTime()
{
    m_DateTimeIsSet = false;
}

utility::string_t Comment::getInitial() const
{
    return m_Initial;
}


void Comment::setInitial(utility::string_t value)
{
    m_Initial = value;
    m_InitialIsSet = true;
}
bool Comment::initialIsSet() const
{
    return m_InitialIsSet;
}

void Comment::unsetInitial()
{
    m_InitialIsSet = false;
}

std::shared_ptr<DocumentPosition> Comment::getRangeEnd() const
{
    return m_RangeEnd;
}


void Comment::setRangeEnd(std::shared_ptr<DocumentPosition> value)
{
    m_RangeEnd = value;
    m_RangeEndIsSet = true;
}
bool Comment::rangeEndIsSet() const
{
    return m_RangeEndIsSet;
}

void Comment::unsetRangeEnd()
{
    m_RangeEndIsSet = false;
}

std::shared_ptr<DocumentPosition> Comment::getRangeStart() const
{
    return m_RangeStart;
}


void Comment::setRangeStart(std::shared_ptr<DocumentPosition> value)
{
    m_RangeStart = value;
    m_RangeStartIsSet = true;
}
bool Comment::rangeStartIsSet() const
{
    return m_RangeStartIsSet;
}

void Comment::unsetRangeStart()
{
    m_RangeStartIsSet = false;
}

utility::string_t Comment::getText() const
{
    return m_Text;
}


void Comment::setText(utility::string_t value)
{
    m_Text = value;
    m_TextIsSet = true;
}
bool Comment::textIsSet() const
{
    return m_TextIsSet;
}

void Comment::unsetText()
{
    m_TextIsSet = false;
}

}
}
}
}

