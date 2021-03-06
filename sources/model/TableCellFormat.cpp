/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="TableCellFormat.cpp">
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


#include "TableCellFormat.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

TableCellFormat::TableCellFormat()
{
    m_BottomPadding = 0.0;
    m_BottomPaddingIsSet = false;
    m_FitText = false;
    m_FitTextIsSet = false;
    m_HorizontalMerge = utility::conversions::to_string_t("");
    m_HorizontalMergeIsSet = false;
    m_LeftPadding = 0.0;
    m_LeftPaddingIsSet = false;
    m_Orientation = utility::conversions::to_string_t("");
    m_OrientationIsSet = false;
    m_PreferredWidthIsSet = false;
    m_RightPadding = 0.0;
    m_RightPaddingIsSet = false;
    m_TopPadding = 0.0;
    m_TopPaddingIsSet = false;
    m_VerticalAlignment = utility::conversions::to_string_t("");
    m_VerticalAlignmentIsSet = false;
    m_VerticalMerge = utility::conversions::to_string_t("");
    m_VerticalMergeIsSet = false;
    m_Width = 0.0;
    m_WidthIsSet = false;
    m_WrapText = false;
    m_WrapTextIsSet = false;
}

TableCellFormat::~TableCellFormat()
{
}

void TableCellFormat::validate()
{
    // TODO: implement validation
}

web::json::value TableCellFormat::toJson() const
{
    web::json::value val = this->LinkElement::toJson();

    if(m_BottomPaddingIsSet)
    {
        val[utility::conversions::to_string_t("BottomPadding")] = ModelBase::toJson(m_BottomPadding);
    }
    if(m_FitTextIsSet)
    {
        val[utility::conversions::to_string_t("FitText")] = ModelBase::toJson(m_FitText);
    }
    if(m_HorizontalMergeIsSet)
    {
        val[utility::conversions::to_string_t("HorizontalMerge")] = ModelBase::toJson(m_HorizontalMerge);
    }
    if(m_LeftPaddingIsSet)
    {
        val[utility::conversions::to_string_t("LeftPadding")] = ModelBase::toJson(m_LeftPadding);
    }
    if(m_OrientationIsSet)
    {
        val[utility::conversions::to_string_t("Orientation")] = ModelBase::toJson(m_Orientation);
    }
    if(m_PreferredWidthIsSet)
    {
        val[utility::conversions::to_string_t("PreferredWidth")] = ModelBase::toJson(m_PreferredWidth);
    }
    if(m_RightPaddingIsSet)
    {
        val[utility::conversions::to_string_t("RightPadding")] = ModelBase::toJson(m_RightPadding);
    }
    if(m_TopPaddingIsSet)
    {
        val[utility::conversions::to_string_t("TopPadding")] = ModelBase::toJson(m_TopPadding);
    }
    if(m_VerticalAlignmentIsSet)
    {
        val[utility::conversions::to_string_t("VerticalAlignment")] = ModelBase::toJson(m_VerticalAlignment);
    }
    if(m_VerticalMergeIsSet)
    {
        val[utility::conversions::to_string_t("VerticalMerge")] = ModelBase::toJson(m_VerticalMerge);
    }
    if(m_WidthIsSet)
    {
        val[utility::conversions::to_string_t("Width")] = ModelBase::toJson(m_Width);
    }
    if(m_WrapTextIsSet)
    {
        val[utility::conversions::to_string_t("WrapText")] = ModelBase::toJson(m_WrapText);
    }

    return val;
}

void TableCellFormat::fromJson(web::json::value& val)
{
    this->LinkElement::fromJson(val);

    if(val.has_field(utility::conversions::to_string_t("BottomPadding")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("BottomPadding")];
        if(!fieldValue.is_null())
        {
            setBottomPadding(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("FitText")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("FitText")];
        if(!fieldValue.is_null())
        {
            setFitText(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("HorizontalMerge")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("HorizontalMerge")];
        if(!fieldValue.is_null())
        {
            setHorizontalMerge(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("LeftPadding")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("LeftPadding")];
        if(!fieldValue.is_null())
        {
            setLeftPadding(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Orientation")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("Orientation")];
        if(!fieldValue.is_null())
        {
            setOrientation(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("PreferredWidth")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("PreferredWidth")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<PreferredWidth> newItem(new PreferredWidth());
            newItem->fromJson(fieldValue);
            setPreferredWidth( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("RightPadding")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("RightPadding")];
        if(!fieldValue.is_null())
        {
            setRightPadding(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("TopPadding")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("TopPadding")];
        if(!fieldValue.is_null())
        {
            setTopPadding(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("VerticalAlignment")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("VerticalAlignment")];
        if(!fieldValue.is_null())
        {
            setVerticalAlignment(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("VerticalMerge")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("VerticalMerge")];
        if(!fieldValue.is_null())
        {
            setVerticalMerge(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Width")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("Width")];
        if(!fieldValue.is_null())
        {
            setWidth(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("WrapText")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("WrapText")];
        if(!fieldValue.is_null())
        {
            setWrapText(ModelBase::boolFromJson(fieldValue));
        }
    }
}

void TableCellFormat::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_BottomPaddingIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("BottomPadding"), m_BottomPadding));
    }
    if(m_FitTextIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("FitText"), m_FitText));
    }
    if(m_HorizontalMergeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("HorizontalMerge"), m_HorizontalMerge));
        
    }
    if(m_LeftPaddingIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("LeftPadding"), m_LeftPadding));
    }
    if(m_OrientationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("Orientation"), m_Orientation));
        
    }
    if(m_PreferredWidthIsSet)
    {
        if (m_PreferredWidth.get())
        {
            m_PreferredWidth->toMultipart(multipart, utility::conversions::to_string_t("PreferredWidth."));
        }
        
    }
    if(m_RightPaddingIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("RightPadding"), m_RightPadding));
    }
    if(m_TopPaddingIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("TopPadding"), m_TopPadding));
    }
    if(m_VerticalAlignmentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("VerticalAlignment"), m_VerticalAlignment));
        
    }
    if(m_VerticalMergeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("VerticalMerge"), m_VerticalMerge));
        
    }
    if(m_WidthIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("Width"), m_Width));
    }
    if(m_WrapTextIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("WrapText"), m_WrapText));
    }
}

void TableCellFormat::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("BottomPadding")))
    {
        setBottomPadding(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("BottomPadding"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("FitText")))
    {
        setFitText(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("FitText"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("HorizontalMerge")))
    {
        setHorizontalMerge(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("HorizontalMerge"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("LeftPadding")))
    {
        setLeftPadding(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("LeftPadding"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("Orientation")))
    {
        setOrientation(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("Orientation"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("PreferredWidth")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("PreferredWidth")))
        {
            std::shared_ptr<PreferredWidth> newItem(new PreferredWidth());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("PreferredWidth."));
            setPreferredWidth( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("RightPadding")))
    {
        setRightPadding(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("RightPadding"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("TopPadding")))
    {
        setTopPadding(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("TopPadding"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("VerticalAlignment")))
    {
        setVerticalAlignment(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("VerticalAlignment"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("VerticalMerge")))
    {
        setVerticalMerge(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("VerticalMerge"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("Width")))
    {
        setWidth(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("Width"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("WrapText")))
    {
        setWrapText(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("WrapText"))));
    }
}

double TableCellFormat::getBottomPadding() const
{
    return m_BottomPadding;
}


void TableCellFormat::setBottomPadding(double value)
{
    m_BottomPadding = value;
    m_BottomPaddingIsSet = true;
}
bool TableCellFormat::bottomPaddingIsSet() const
{
    return m_BottomPaddingIsSet;
}

void TableCellFormat::unsetBottomPadding()
{
    m_BottomPaddingIsSet = false;
}

bool TableCellFormat::isFitText() const
{
    return m_FitText;
}


void TableCellFormat::setFitText(bool value)
{
    m_FitText = value;
    m_FitTextIsSet = true;
}
bool TableCellFormat::fitTextIsSet() const
{
    return m_FitTextIsSet;
}

void TableCellFormat::unsetFitText()
{
    m_FitTextIsSet = false;
}

utility::string_t TableCellFormat::getHorizontalMerge() const
{
    return m_HorizontalMerge;
}


void TableCellFormat::setHorizontalMerge(utility::string_t value)
{
    m_HorizontalMerge = value;
    m_HorizontalMergeIsSet = true;
}
bool TableCellFormat::horizontalMergeIsSet() const
{
    return m_HorizontalMergeIsSet;
}

void TableCellFormat::unsetHorizontalMerge()
{
    m_HorizontalMergeIsSet = false;
}

double TableCellFormat::getLeftPadding() const
{
    return m_LeftPadding;
}


void TableCellFormat::setLeftPadding(double value)
{
    m_LeftPadding = value;
    m_LeftPaddingIsSet = true;
}
bool TableCellFormat::leftPaddingIsSet() const
{
    return m_LeftPaddingIsSet;
}

void TableCellFormat::unsetLeftPadding()
{
    m_LeftPaddingIsSet = false;
}

utility::string_t TableCellFormat::getOrientation() const
{
    return m_Orientation;
}


void TableCellFormat::setOrientation(utility::string_t value)
{
    m_Orientation = value;
    m_OrientationIsSet = true;
}
bool TableCellFormat::orientationIsSet() const
{
    return m_OrientationIsSet;
}

void TableCellFormat::unsetOrientation()
{
    m_OrientationIsSet = false;
}

std::shared_ptr<PreferredWidth> TableCellFormat::getPreferredWidth() const
{
    return m_PreferredWidth;
}


void TableCellFormat::setPreferredWidth(std::shared_ptr<PreferredWidth> value)
{
    m_PreferredWidth = value;
    m_PreferredWidthIsSet = true;
}
bool TableCellFormat::preferredWidthIsSet() const
{
    return m_PreferredWidthIsSet;
}

void TableCellFormat::unsetPreferredWidth()
{
    m_PreferredWidthIsSet = false;
}

double TableCellFormat::getRightPadding() const
{
    return m_RightPadding;
}


void TableCellFormat::setRightPadding(double value)
{
    m_RightPadding = value;
    m_RightPaddingIsSet = true;
}
bool TableCellFormat::rightPaddingIsSet() const
{
    return m_RightPaddingIsSet;
}

void TableCellFormat::unsetRightPadding()
{
    m_RightPaddingIsSet = false;
}

double TableCellFormat::getTopPadding() const
{
    return m_TopPadding;
}


void TableCellFormat::setTopPadding(double value)
{
    m_TopPadding = value;
    m_TopPaddingIsSet = true;
}
bool TableCellFormat::topPaddingIsSet() const
{
    return m_TopPaddingIsSet;
}

void TableCellFormat::unsetTopPadding()
{
    m_TopPaddingIsSet = false;
}

utility::string_t TableCellFormat::getVerticalAlignment() const
{
    return m_VerticalAlignment;
}


void TableCellFormat::setVerticalAlignment(utility::string_t value)
{
    m_VerticalAlignment = value;
    m_VerticalAlignmentIsSet = true;
}
bool TableCellFormat::verticalAlignmentIsSet() const
{
    return m_VerticalAlignmentIsSet;
}

void TableCellFormat::unsetVerticalAlignment()
{
    m_VerticalAlignmentIsSet = false;
}

utility::string_t TableCellFormat::getVerticalMerge() const
{
    return m_VerticalMerge;
}


void TableCellFormat::setVerticalMerge(utility::string_t value)
{
    m_VerticalMerge = value;
    m_VerticalMergeIsSet = true;
}
bool TableCellFormat::verticalMergeIsSet() const
{
    return m_VerticalMergeIsSet;
}

void TableCellFormat::unsetVerticalMerge()
{
    m_VerticalMergeIsSet = false;
}

double TableCellFormat::getWidth() const
{
    return m_Width;
}


void TableCellFormat::setWidth(double value)
{
    m_Width = value;
    m_WidthIsSet = true;
}
bool TableCellFormat::widthIsSet() const
{
    return m_WidthIsSet;
}

void TableCellFormat::unsetWidth()
{
    m_WidthIsSet = false;
}

bool TableCellFormat::isWrapText() const
{
    return m_WrapText;
}


void TableCellFormat::setWrapText(bool value)
{
    m_WrapText = value;
    m_WrapTextIsSet = true;
}
bool TableCellFormat::wrapTextIsSet() const
{
    return m_WrapTextIsSet;
}

void TableCellFormat::unsetWrapText()
{
    m_WrapTextIsSet = false;
}

}
}
}
}

