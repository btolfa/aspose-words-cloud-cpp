/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="ParagraphFormat.cpp">
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


#include "ParagraphFormat.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

ParagraphFormat::ParagraphFormat()
{
    m_AddSpaceBetweenFarEastAndAlpha = false;
    m_AddSpaceBetweenFarEastAndAlphaIsSet = false;
    m_AddSpaceBetweenFarEastAndDigit = false;
    m_AddSpaceBetweenFarEastAndDigitIsSet = false;
    m_Alignment = utility::conversions::to_string_t("");
    m_AlignmentIsSet = false;
    m_Bidi = false;
    m_BidiIsSet = false;
    m_DropCapPosition = utility::conversions::to_string_t("");
    m_DropCapPositionIsSet = false;
    m_FirstLineIndent = 0.0;
    m_FirstLineIndentIsSet = false;
    m_KeepTogether = false;
    m_KeepTogetherIsSet = false;
    m_KeepWithNext = false;
    m_KeepWithNextIsSet = false;
    m_LeftIndent = 0.0;
    m_LeftIndentIsSet = false;
    m_LineSpacing = 0.0;
    m_LineSpacingIsSet = false;
    m_LineSpacingRule = utility::conversions::to_string_t("");
    m_LineSpacingRuleIsSet = false;
    m_LinesToDrop = 0;
    m_LinesToDropIsSet = false;
    m_NoSpaceBetweenParagraphsOfSameStyle = false;
    m_NoSpaceBetweenParagraphsOfSameStyleIsSet = false;
    m_OutlineLevel = utility::conversions::to_string_t("");
    m_OutlineLevelIsSet = false;
    m_PageBreakBefore = false;
    m_PageBreakBeforeIsSet = false;
    m_RightIndent = 0.0;
    m_RightIndentIsSet = false;
    m_SpaceAfter = 0.0;
    m_SpaceAfterIsSet = false;
    m_SpaceAfterAuto = false;
    m_SpaceAfterAutoIsSet = false;
    m_SpaceBefore = 0.0;
    m_SpaceBeforeIsSet = false;
    m_SpaceBeforeAuto = false;
    m_SpaceBeforeAutoIsSet = false;
    m_StyleIdentifier = utility::conversions::to_string_t("");
    m_StyleIdentifierIsSet = false;
    m_StyleName = utility::conversions::to_string_t("");
    m_StyleNameIsSet = false;
    m_SuppressAutoHyphens = false;
    m_SuppressAutoHyphensIsSet = false;
    m_SuppressLineNumbers = false;
    m_SuppressLineNumbersIsSet = false;
    m_WidowControl = false;
    m_WidowControlIsSet = false;
}

ParagraphFormat::~ParagraphFormat()
{
}

void ParagraphFormat::validate()
{
    // TODO: implement validation
}

web::json::value ParagraphFormat::toJson() const
{
    web::json::value val = this->LinkElement::toJson();

    if(m_AddSpaceBetweenFarEastAndAlphaIsSet)
    {
        val[utility::conversions::to_string_t("AddSpaceBetweenFarEastAndAlpha")] = ModelBase::toJson(m_AddSpaceBetweenFarEastAndAlpha);
    }
    if(m_AddSpaceBetweenFarEastAndDigitIsSet)
    {
        val[utility::conversions::to_string_t("AddSpaceBetweenFarEastAndDigit")] = ModelBase::toJson(m_AddSpaceBetweenFarEastAndDigit);
    }
    if(m_AlignmentIsSet)
    {
        val[utility::conversions::to_string_t("Alignment")] = ModelBase::toJson(m_Alignment);
    }
    if(m_BidiIsSet)
    {
        val[utility::conversions::to_string_t("Bidi")] = ModelBase::toJson(m_Bidi);
    }
    if(m_DropCapPositionIsSet)
    {
        val[utility::conversions::to_string_t("DropCapPosition")] = ModelBase::toJson(m_DropCapPosition);
    }
    if(m_FirstLineIndentIsSet)
    {
        val[utility::conversions::to_string_t("FirstLineIndent")] = ModelBase::toJson(m_FirstLineIndent);
    }
    if(m_KeepTogetherIsSet)
    {
        val[utility::conversions::to_string_t("KeepTogether")] = ModelBase::toJson(m_KeepTogether);
    }
    if(m_KeepWithNextIsSet)
    {
        val[utility::conversions::to_string_t("KeepWithNext")] = ModelBase::toJson(m_KeepWithNext);
    }
    if(m_LeftIndentIsSet)
    {
        val[utility::conversions::to_string_t("LeftIndent")] = ModelBase::toJson(m_LeftIndent);
    }
    if(m_LineSpacingIsSet)
    {
        val[utility::conversions::to_string_t("LineSpacing")] = ModelBase::toJson(m_LineSpacing);
    }
    if(m_LineSpacingRuleIsSet)
    {
        val[utility::conversions::to_string_t("LineSpacingRule")] = ModelBase::toJson(m_LineSpacingRule);
    }
    if(m_LinesToDropIsSet)
    {
        val[utility::conversions::to_string_t("LinesToDrop")] = ModelBase::toJson(m_LinesToDrop);
    }
    if(m_NoSpaceBetweenParagraphsOfSameStyleIsSet)
    {
        val[utility::conversions::to_string_t("NoSpaceBetweenParagraphsOfSameStyle")] = ModelBase::toJson(m_NoSpaceBetweenParagraphsOfSameStyle);
    }
    if(m_OutlineLevelIsSet)
    {
        val[utility::conversions::to_string_t("OutlineLevel")] = ModelBase::toJson(m_OutlineLevel);
    }
    if(m_PageBreakBeforeIsSet)
    {
        val[utility::conversions::to_string_t("PageBreakBefore")] = ModelBase::toJson(m_PageBreakBefore);
    }
    if(m_RightIndentIsSet)
    {
        val[utility::conversions::to_string_t("RightIndent")] = ModelBase::toJson(m_RightIndent);
    }
    if(m_SpaceAfterIsSet)
    {
        val[utility::conversions::to_string_t("SpaceAfter")] = ModelBase::toJson(m_SpaceAfter);
    }
    if(m_SpaceAfterAutoIsSet)
    {
        val[utility::conversions::to_string_t("SpaceAfterAuto")] = ModelBase::toJson(m_SpaceAfterAuto);
    }
    if(m_SpaceBeforeIsSet)
    {
        val[utility::conversions::to_string_t("SpaceBefore")] = ModelBase::toJson(m_SpaceBefore);
    }
    if(m_SpaceBeforeAutoIsSet)
    {
        val[utility::conversions::to_string_t("SpaceBeforeAuto")] = ModelBase::toJson(m_SpaceBeforeAuto);
    }
    if(m_StyleIdentifierIsSet)
    {
        val[utility::conversions::to_string_t("StyleIdentifier")] = ModelBase::toJson(m_StyleIdentifier);
    }
    if(m_StyleNameIsSet)
    {
        val[utility::conversions::to_string_t("StyleName")] = ModelBase::toJson(m_StyleName);
    }
    if(m_SuppressAutoHyphensIsSet)
    {
        val[utility::conversions::to_string_t("SuppressAutoHyphens")] = ModelBase::toJson(m_SuppressAutoHyphens);
    }
    if(m_SuppressLineNumbersIsSet)
    {
        val[utility::conversions::to_string_t("SuppressLineNumbers")] = ModelBase::toJson(m_SuppressLineNumbers);
    }
    if(m_WidowControlIsSet)
    {
        val[utility::conversions::to_string_t("WidowControl")] = ModelBase::toJson(m_WidowControl);
    }

    return val;
}

void ParagraphFormat::fromJson(web::json::value& val)
{
    this->LinkElement::fromJson(val);

    if(val.has_field(utility::conversions::to_string_t("AddSpaceBetweenFarEastAndAlpha")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("AddSpaceBetweenFarEastAndAlpha")];
        if(!fieldValue.is_null())
        {
            setAddSpaceBetweenFarEastAndAlpha(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("AddSpaceBetweenFarEastAndDigit")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("AddSpaceBetweenFarEastAndDigit")];
        if(!fieldValue.is_null())
        {
            setAddSpaceBetweenFarEastAndDigit(ModelBase::boolFromJson(fieldValue));
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
    if(val.has_field(utility::conversions::to_string_t("Bidi")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("Bidi")];
        if(!fieldValue.is_null())
        {
            setBidi(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("DropCapPosition")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("DropCapPosition")];
        if(!fieldValue.is_null())
        {
            setDropCapPosition(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("FirstLineIndent")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("FirstLineIndent")];
        if(!fieldValue.is_null())
        {
            setFirstLineIndent(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("KeepTogether")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("KeepTogether")];
        if(!fieldValue.is_null())
        {
            setKeepTogether(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("KeepWithNext")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("KeepWithNext")];
        if(!fieldValue.is_null())
        {
            setKeepWithNext(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("LeftIndent")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("LeftIndent")];
        if(!fieldValue.is_null())
        {
            setLeftIndent(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("LineSpacing")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("LineSpacing")];
        if(!fieldValue.is_null())
        {
            setLineSpacing(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("LineSpacingRule")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("LineSpacingRule")];
        if(!fieldValue.is_null())
        {
            setLineSpacingRule(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("LinesToDrop")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("LinesToDrop")];
        if(!fieldValue.is_null())
        {
            setLinesToDrop(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("NoSpaceBetweenParagraphsOfSameStyle")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("NoSpaceBetweenParagraphsOfSameStyle")];
        if(!fieldValue.is_null())
        {
            setNoSpaceBetweenParagraphsOfSameStyle(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("OutlineLevel")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("OutlineLevel")];
        if(!fieldValue.is_null())
        {
            setOutlineLevel(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("PageBreakBefore")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("PageBreakBefore")];
        if(!fieldValue.is_null())
        {
            setPageBreakBefore(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("RightIndent")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("RightIndent")];
        if(!fieldValue.is_null())
        {
            setRightIndent(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("SpaceAfter")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("SpaceAfter")];
        if(!fieldValue.is_null())
        {
            setSpaceAfter(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("SpaceAfterAuto")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("SpaceAfterAuto")];
        if(!fieldValue.is_null())
        {
            setSpaceAfterAuto(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("SpaceBefore")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("SpaceBefore")];
        if(!fieldValue.is_null())
        {
            setSpaceBefore(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("SpaceBeforeAuto")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("SpaceBeforeAuto")];
        if(!fieldValue.is_null())
        {
            setSpaceBeforeAuto(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("StyleIdentifier")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("StyleIdentifier")];
        if(!fieldValue.is_null())
        {
            setStyleIdentifier(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("StyleName")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("StyleName")];
        if(!fieldValue.is_null())
        {
            setStyleName(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("SuppressAutoHyphens")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("SuppressAutoHyphens")];
        if(!fieldValue.is_null())
        {
            setSuppressAutoHyphens(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("SuppressLineNumbers")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("SuppressLineNumbers")];
        if(!fieldValue.is_null())
        {
            setSuppressLineNumbers(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("WidowControl")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("WidowControl")];
        if(!fieldValue.is_null())
        {
            setWidowControl(ModelBase::boolFromJson(fieldValue));
        }
    }
}

void ParagraphFormat::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_AddSpaceBetweenFarEastAndAlphaIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("AddSpaceBetweenFarEastAndAlpha"), m_AddSpaceBetweenFarEastAndAlpha));
    }
    if(m_AddSpaceBetweenFarEastAndDigitIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("AddSpaceBetweenFarEastAndDigit"), m_AddSpaceBetweenFarEastAndDigit));
    }
    if(m_AlignmentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("Alignment"), m_Alignment));
        
    }
    if(m_BidiIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("Bidi"), m_Bidi));
    }
    if(m_DropCapPositionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("DropCapPosition"), m_DropCapPosition));
        
    }
    if(m_FirstLineIndentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("FirstLineIndent"), m_FirstLineIndent));
    }
    if(m_KeepTogetherIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("KeepTogether"), m_KeepTogether));
    }
    if(m_KeepWithNextIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("KeepWithNext"), m_KeepWithNext));
    }
    if(m_LeftIndentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("LeftIndent"), m_LeftIndent));
    }
    if(m_LineSpacingIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("LineSpacing"), m_LineSpacing));
    }
    if(m_LineSpacingRuleIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("LineSpacingRule"), m_LineSpacingRule));
        
    }
    if(m_LinesToDropIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("LinesToDrop"), m_LinesToDrop));
    }
    if(m_NoSpaceBetweenParagraphsOfSameStyleIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("NoSpaceBetweenParagraphsOfSameStyle"), m_NoSpaceBetweenParagraphsOfSameStyle));
    }
    if(m_OutlineLevelIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("OutlineLevel"), m_OutlineLevel));
        
    }
    if(m_PageBreakBeforeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("PageBreakBefore"), m_PageBreakBefore));
    }
    if(m_RightIndentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("RightIndent"), m_RightIndent));
    }
    if(m_SpaceAfterIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("SpaceAfter"), m_SpaceAfter));
    }
    if(m_SpaceAfterAutoIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("SpaceAfterAuto"), m_SpaceAfterAuto));
    }
    if(m_SpaceBeforeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("SpaceBefore"), m_SpaceBefore));
    }
    if(m_SpaceBeforeAutoIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("SpaceBeforeAuto"), m_SpaceBeforeAuto));
    }
    if(m_StyleIdentifierIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("StyleIdentifier"), m_StyleIdentifier));
        
    }
    if(m_StyleNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("StyleName"), m_StyleName));
        
    }
    if(m_SuppressAutoHyphensIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("SuppressAutoHyphens"), m_SuppressAutoHyphens));
    }
    if(m_SuppressLineNumbersIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("SuppressLineNumbers"), m_SuppressLineNumbers));
    }
    if(m_WidowControlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("WidowControl"), m_WidowControl));
    }
}

void ParagraphFormat::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("AddSpaceBetweenFarEastAndAlpha")))
    {
        setAddSpaceBetweenFarEastAndAlpha(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("AddSpaceBetweenFarEastAndAlpha"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("AddSpaceBetweenFarEastAndDigit")))
    {
        setAddSpaceBetweenFarEastAndDigit(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("AddSpaceBetweenFarEastAndDigit"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("Alignment")))
    {
        setAlignment(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("Alignment"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("Bidi")))
    {
        setBidi(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("Bidi"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("DropCapPosition")))
    {
        setDropCapPosition(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("DropCapPosition"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("FirstLineIndent")))
    {
        setFirstLineIndent(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("FirstLineIndent"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("KeepTogether")))
    {
        setKeepTogether(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("KeepTogether"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("KeepWithNext")))
    {
        setKeepWithNext(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("KeepWithNext"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("LeftIndent")))
    {
        setLeftIndent(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("LeftIndent"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("LineSpacing")))
    {
        setLineSpacing(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("LineSpacing"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("LineSpacingRule")))
    {
        setLineSpacingRule(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("LineSpacingRule"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("LinesToDrop")))
    {
        setLinesToDrop(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("LinesToDrop"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("NoSpaceBetweenParagraphsOfSameStyle")))
    {
        setNoSpaceBetweenParagraphsOfSameStyle(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("NoSpaceBetweenParagraphsOfSameStyle"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("OutlineLevel")))
    {
        setOutlineLevel(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("OutlineLevel"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("PageBreakBefore")))
    {
        setPageBreakBefore(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("PageBreakBefore"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("RightIndent")))
    {
        setRightIndent(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("RightIndent"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("SpaceAfter")))
    {
        setSpaceAfter(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("SpaceAfter"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("SpaceAfterAuto")))
    {
        setSpaceAfterAuto(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("SpaceAfterAuto"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("SpaceBefore")))
    {
        setSpaceBefore(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("SpaceBefore"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("SpaceBeforeAuto")))
    {
        setSpaceBeforeAuto(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("SpaceBeforeAuto"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("StyleIdentifier")))
    {
        setStyleIdentifier(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("StyleIdentifier"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("StyleName")))
    {
        setStyleName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("StyleName"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("SuppressAutoHyphens")))
    {
        setSuppressAutoHyphens(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("SuppressAutoHyphens"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("SuppressLineNumbers")))
    {
        setSuppressLineNumbers(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("SuppressLineNumbers"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("WidowControl")))
    {
        setWidowControl(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("WidowControl"))));
    }
}

bool ParagraphFormat::isAddSpaceBetweenFarEastAndAlpha() const
{
    return m_AddSpaceBetweenFarEastAndAlpha;
}


void ParagraphFormat::setAddSpaceBetweenFarEastAndAlpha(bool value)
{
    m_AddSpaceBetweenFarEastAndAlpha = value;
    m_AddSpaceBetweenFarEastAndAlphaIsSet = true;
}
bool ParagraphFormat::addSpaceBetweenFarEastAndAlphaIsSet() const
{
    return m_AddSpaceBetweenFarEastAndAlphaIsSet;
}

void ParagraphFormat::unsetAddSpaceBetweenFarEastAndAlpha()
{
    m_AddSpaceBetweenFarEastAndAlphaIsSet = false;
}

bool ParagraphFormat::isAddSpaceBetweenFarEastAndDigit() const
{
    return m_AddSpaceBetweenFarEastAndDigit;
}


void ParagraphFormat::setAddSpaceBetweenFarEastAndDigit(bool value)
{
    m_AddSpaceBetweenFarEastAndDigit = value;
    m_AddSpaceBetweenFarEastAndDigitIsSet = true;
}
bool ParagraphFormat::addSpaceBetweenFarEastAndDigitIsSet() const
{
    return m_AddSpaceBetweenFarEastAndDigitIsSet;
}

void ParagraphFormat::unsetAddSpaceBetweenFarEastAndDigit()
{
    m_AddSpaceBetweenFarEastAndDigitIsSet = false;
}

utility::string_t ParagraphFormat::getAlignment() const
{
    return m_Alignment;
}


void ParagraphFormat::setAlignment(utility::string_t value)
{
    m_Alignment = value;
    m_AlignmentIsSet = true;
}
bool ParagraphFormat::alignmentIsSet() const
{
    return m_AlignmentIsSet;
}

void ParagraphFormat::unsetAlignment()
{
    m_AlignmentIsSet = false;
}

bool ParagraphFormat::isBidi() const
{
    return m_Bidi;
}


void ParagraphFormat::setBidi(bool value)
{
    m_Bidi = value;
    m_BidiIsSet = true;
}
bool ParagraphFormat::bidiIsSet() const
{
    return m_BidiIsSet;
}

void ParagraphFormat::unsetBidi()
{
    m_BidiIsSet = false;
}

utility::string_t ParagraphFormat::getDropCapPosition() const
{
    return m_DropCapPosition;
}


void ParagraphFormat::setDropCapPosition(utility::string_t value)
{
    m_DropCapPosition = value;
    m_DropCapPositionIsSet = true;
}
bool ParagraphFormat::dropCapPositionIsSet() const
{
    return m_DropCapPositionIsSet;
}

void ParagraphFormat::unsetDropCapPosition()
{
    m_DropCapPositionIsSet = false;
}

double ParagraphFormat::getFirstLineIndent() const
{
    return m_FirstLineIndent;
}


void ParagraphFormat::setFirstLineIndent(double value)
{
    m_FirstLineIndent = value;
    m_FirstLineIndentIsSet = true;
}
bool ParagraphFormat::firstLineIndentIsSet() const
{
    return m_FirstLineIndentIsSet;
}

void ParagraphFormat::unsetFirstLineIndent()
{
    m_FirstLineIndentIsSet = false;
}

bool ParagraphFormat::isKeepTogether() const
{
    return m_KeepTogether;
}


void ParagraphFormat::setKeepTogether(bool value)
{
    m_KeepTogether = value;
    m_KeepTogetherIsSet = true;
}
bool ParagraphFormat::keepTogetherIsSet() const
{
    return m_KeepTogetherIsSet;
}

void ParagraphFormat::unsetKeepTogether()
{
    m_KeepTogetherIsSet = false;
}

bool ParagraphFormat::isKeepWithNext() const
{
    return m_KeepWithNext;
}


void ParagraphFormat::setKeepWithNext(bool value)
{
    m_KeepWithNext = value;
    m_KeepWithNextIsSet = true;
}
bool ParagraphFormat::keepWithNextIsSet() const
{
    return m_KeepWithNextIsSet;
}

void ParagraphFormat::unsetKeepWithNext()
{
    m_KeepWithNextIsSet = false;
}

double ParagraphFormat::getLeftIndent() const
{
    return m_LeftIndent;
}


void ParagraphFormat::setLeftIndent(double value)
{
    m_LeftIndent = value;
    m_LeftIndentIsSet = true;
}
bool ParagraphFormat::leftIndentIsSet() const
{
    return m_LeftIndentIsSet;
}

void ParagraphFormat::unsetLeftIndent()
{
    m_LeftIndentIsSet = false;
}

double ParagraphFormat::getLineSpacing() const
{
    return m_LineSpacing;
}


void ParagraphFormat::setLineSpacing(double value)
{
    m_LineSpacing = value;
    m_LineSpacingIsSet = true;
}
bool ParagraphFormat::lineSpacingIsSet() const
{
    return m_LineSpacingIsSet;
}

void ParagraphFormat::unsetLineSpacing()
{
    m_LineSpacingIsSet = false;
}

utility::string_t ParagraphFormat::getLineSpacingRule() const
{
    return m_LineSpacingRule;
}


void ParagraphFormat::setLineSpacingRule(utility::string_t value)
{
    m_LineSpacingRule = value;
    m_LineSpacingRuleIsSet = true;
}
bool ParagraphFormat::lineSpacingRuleIsSet() const
{
    return m_LineSpacingRuleIsSet;
}

void ParagraphFormat::unsetLineSpacingRule()
{
    m_LineSpacingRuleIsSet = false;
}

int32_t ParagraphFormat::getLinesToDrop() const
{
    return m_LinesToDrop;
}


void ParagraphFormat::setLinesToDrop(int32_t value)
{
    m_LinesToDrop = value;
    m_LinesToDropIsSet = true;
}
bool ParagraphFormat::linesToDropIsSet() const
{
    return m_LinesToDropIsSet;
}

void ParagraphFormat::unsetLinesToDrop()
{
    m_LinesToDropIsSet = false;
}

bool ParagraphFormat::isNoSpaceBetweenParagraphsOfSameStyle() const
{
    return m_NoSpaceBetweenParagraphsOfSameStyle;
}


void ParagraphFormat::setNoSpaceBetweenParagraphsOfSameStyle(bool value)
{
    m_NoSpaceBetweenParagraphsOfSameStyle = value;
    m_NoSpaceBetweenParagraphsOfSameStyleIsSet = true;
}
bool ParagraphFormat::noSpaceBetweenParagraphsOfSameStyleIsSet() const
{
    return m_NoSpaceBetweenParagraphsOfSameStyleIsSet;
}

void ParagraphFormat::unsetNoSpaceBetweenParagraphsOfSameStyle()
{
    m_NoSpaceBetweenParagraphsOfSameStyleIsSet = false;
}

utility::string_t ParagraphFormat::getOutlineLevel() const
{
    return m_OutlineLevel;
}


void ParagraphFormat::setOutlineLevel(utility::string_t value)
{
    m_OutlineLevel = value;
    m_OutlineLevelIsSet = true;
}
bool ParagraphFormat::outlineLevelIsSet() const
{
    return m_OutlineLevelIsSet;
}

void ParagraphFormat::unsetOutlineLevel()
{
    m_OutlineLevelIsSet = false;
}

bool ParagraphFormat::isPageBreakBefore() const
{
    return m_PageBreakBefore;
}


void ParagraphFormat::setPageBreakBefore(bool value)
{
    m_PageBreakBefore = value;
    m_PageBreakBeforeIsSet = true;
}
bool ParagraphFormat::pageBreakBeforeIsSet() const
{
    return m_PageBreakBeforeIsSet;
}

void ParagraphFormat::unsetPageBreakBefore()
{
    m_PageBreakBeforeIsSet = false;
}

double ParagraphFormat::getRightIndent() const
{
    return m_RightIndent;
}


void ParagraphFormat::setRightIndent(double value)
{
    m_RightIndent = value;
    m_RightIndentIsSet = true;
}
bool ParagraphFormat::rightIndentIsSet() const
{
    return m_RightIndentIsSet;
}

void ParagraphFormat::unsetRightIndent()
{
    m_RightIndentIsSet = false;
}

double ParagraphFormat::getSpaceAfter() const
{
    return m_SpaceAfter;
}


void ParagraphFormat::setSpaceAfter(double value)
{
    m_SpaceAfter = value;
    m_SpaceAfterIsSet = true;
}
bool ParagraphFormat::spaceAfterIsSet() const
{
    return m_SpaceAfterIsSet;
}

void ParagraphFormat::unsetSpaceAfter()
{
    m_SpaceAfterIsSet = false;
}

bool ParagraphFormat::isSpaceAfterAuto() const
{
    return m_SpaceAfterAuto;
}


void ParagraphFormat::setSpaceAfterAuto(bool value)
{
    m_SpaceAfterAuto = value;
    m_SpaceAfterAutoIsSet = true;
}
bool ParagraphFormat::spaceAfterAutoIsSet() const
{
    return m_SpaceAfterAutoIsSet;
}

void ParagraphFormat::unsetSpaceAfterAuto()
{
    m_SpaceAfterAutoIsSet = false;
}

double ParagraphFormat::getSpaceBefore() const
{
    return m_SpaceBefore;
}


void ParagraphFormat::setSpaceBefore(double value)
{
    m_SpaceBefore = value;
    m_SpaceBeforeIsSet = true;
}
bool ParagraphFormat::spaceBeforeIsSet() const
{
    return m_SpaceBeforeIsSet;
}

void ParagraphFormat::unsetSpaceBefore()
{
    m_SpaceBeforeIsSet = false;
}

bool ParagraphFormat::isSpaceBeforeAuto() const
{
    return m_SpaceBeforeAuto;
}


void ParagraphFormat::setSpaceBeforeAuto(bool value)
{
    m_SpaceBeforeAuto = value;
    m_SpaceBeforeAutoIsSet = true;
}
bool ParagraphFormat::spaceBeforeAutoIsSet() const
{
    return m_SpaceBeforeAutoIsSet;
}

void ParagraphFormat::unsetSpaceBeforeAuto()
{
    m_SpaceBeforeAutoIsSet = false;
}

utility::string_t ParagraphFormat::getStyleIdentifier() const
{
    return m_StyleIdentifier;
}


void ParagraphFormat::setStyleIdentifier(utility::string_t value)
{
    m_StyleIdentifier = value;
    m_StyleIdentifierIsSet = true;
}
bool ParagraphFormat::styleIdentifierIsSet() const
{
    return m_StyleIdentifierIsSet;
}

void ParagraphFormat::unsetStyleIdentifier()
{
    m_StyleIdentifierIsSet = false;
}

utility::string_t ParagraphFormat::getStyleName() const
{
    return m_StyleName;
}


void ParagraphFormat::setStyleName(utility::string_t value)
{
    m_StyleName = value;
    m_StyleNameIsSet = true;
}
bool ParagraphFormat::styleNameIsSet() const
{
    return m_StyleNameIsSet;
}

void ParagraphFormat::unsetStyleName()
{
    m_StyleNameIsSet = false;
}

bool ParagraphFormat::isSuppressAutoHyphens() const
{
    return m_SuppressAutoHyphens;
}


void ParagraphFormat::setSuppressAutoHyphens(bool value)
{
    m_SuppressAutoHyphens = value;
    m_SuppressAutoHyphensIsSet = true;
}
bool ParagraphFormat::suppressAutoHyphensIsSet() const
{
    return m_SuppressAutoHyphensIsSet;
}

void ParagraphFormat::unsetSuppressAutoHyphens()
{
    m_SuppressAutoHyphensIsSet = false;
}

bool ParagraphFormat::isSuppressLineNumbers() const
{
    return m_SuppressLineNumbers;
}


void ParagraphFormat::setSuppressLineNumbers(bool value)
{
    m_SuppressLineNumbers = value;
    m_SuppressLineNumbersIsSet = true;
}
bool ParagraphFormat::suppressLineNumbersIsSet() const
{
    return m_SuppressLineNumbersIsSet;
}

void ParagraphFormat::unsetSuppressLineNumbers()
{
    m_SuppressLineNumbersIsSet = false;
}

bool ParagraphFormat::isWidowControl() const
{
    return m_WidowControl;
}


void ParagraphFormat::setWidowControl(bool value)
{
    m_WidowControl = value;
    m_WidowControlIsSet = true;
}
bool ParagraphFormat::widowControlIsSet() const
{
    return m_WidowControlIsSet;
}

void ParagraphFormat::unsetWidowControl()
{
    m_WidowControlIsSet = false;
}

}
}
}
}

