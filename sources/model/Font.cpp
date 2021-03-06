/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="Font.cpp">
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


#include "Font.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

Font::Font()
{
    m_AllCaps = false;
    m_AllCapsIsSet = false;
    m_Bidi = false;
    m_BidiIsSet = false;
    m_Bold = false;
    m_BoldIsSet = false;
    m_BoldBi = false;
    m_BoldBiIsSet = false;
    m_BorderIsSet = false;
    m_ColorIsSet = false;
    m_ComplexScript = false;
    m_ComplexScriptIsSet = false;
    m_DoubleStrikeThrough = false;
    m_DoubleStrikeThroughIsSet = false;
    m_Emboss = false;
    m_EmbossIsSet = false;
    m_Engrave = false;
    m_EngraveIsSet = false;
    m_Hidden = false;
    m_HiddenIsSet = false;
    m_HighlightColorIsSet = false;
    m_Italic = false;
    m_ItalicIsSet = false;
    m_ItalicBi = false;
    m_ItalicBiIsSet = false;
    m_Kerning = 0.0;
    m_KerningIsSet = false;
    m_LocaleId = 0;
    m_LocaleIdIsSet = false;
    m_LocaleIdBi = 0;
    m_LocaleIdBiIsSet = false;
    m_LocaleIdFarEast = 0;
    m_LocaleIdFarEastIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_NameAscii = utility::conversions::to_string_t("");
    m_NameAsciiIsSet = false;
    m_NameBi = utility::conversions::to_string_t("");
    m_NameBiIsSet = false;
    m_NameFarEast = utility::conversions::to_string_t("");
    m_NameFarEastIsSet = false;
    m_NameOther = utility::conversions::to_string_t("");
    m_NameOtherIsSet = false;
    m_NoProofing = false;
    m_NoProofingIsSet = false;
    m_Outline = false;
    m_OutlineIsSet = false;
    m_Position = 0.0;
    m_PositionIsSet = false;
    m_Scaling = 0;
    m_ScalingIsSet = false;
    m_Shadow = false;
    m_ShadowIsSet = false;
    m_Size = 0.0;
    m_SizeIsSet = false;
    m_SizeBi = 0.0;
    m_SizeBiIsSet = false;
    m_SmallCaps = false;
    m_SmallCapsIsSet = false;
    m_Spacing = 0.0;
    m_SpacingIsSet = false;
    m_StrikeThrough = false;
    m_StrikeThroughIsSet = false;
    m_StyleIdentifier = utility::conversions::to_string_t("");
    m_StyleIdentifierIsSet = false;
    m_StyleName = utility::conversions::to_string_t("");
    m_StyleNameIsSet = false;
    m_Subscript = false;
    m_SubscriptIsSet = false;
    m_Superscript = false;
    m_SuperscriptIsSet = false;
    m_TextEffect = utility::conversions::to_string_t("");
    m_TextEffectIsSet = false;
    m_Underline = utility::conversions::to_string_t("");
    m_UnderlineIsSet = false;
    m_UnderlineColorIsSet = false;
}

Font::~Font()
{
}

void Font::validate()
{
    // TODO: implement validation
}

web::json::value Font::toJson() const
{
    web::json::value val = this->LinkElement::toJson();

    if(m_AllCapsIsSet)
    {
        val[utility::conversions::to_string_t("AllCaps")] = ModelBase::toJson(m_AllCaps);
    }
    if(m_BidiIsSet)
    {
        val[utility::conversions::to_string_t("Bidi")] = ModelBase::toJson(m_Bidi);
    }
    if(m_BoldIsSet)
    {
        val[utility::conversions::to_string_t("Bold")] = ModelBase::toJson(m_Bold);
    }
    if(m_BoldBiIsSet)
    {
        val[utility::conversions::to_string_t("BoldBi")] = ModelBase::toJson(m_BoldBi);
    }
    if(m_BorderIsSet)
    {
        val[utility::conversions::to_string_t("Border")] = ModelBase::toJson(m_Border);
    }
    if(m_ColorIsSet)
    {
        val[utility::conversions::to_string_t("Color")] = ModelBase::toJson(m_Color);
    }
    if(m_ComplexScriptIsSet)
    {
        val[utility::conversions::to_string_t("ComplexScript")] = ModelBase::toJson(m_ComplexScript);
    }
    if(m_DoubleStrikeThroughIsSet)
    {
        val[utility::conversions::to_string_t("DoubleStrikeThrough")] = ModelBase::toJson(m_DoubleStrikeThrough);
    }
    if(m_EmbossIsSet)
    {
        val[utility::conversions::to_string_t("Emboss")] = ModelBase::toJson(m_Emboss);
    }
    if(m_EngraveIsSet)
    {
        val[utility::conversions::to_string_t("Engrave")] = ModelBase::toJson(m_Engrave);
    }
    if(m_HiddenIsSet)
    {
        val[utility::conversions::to_string_t("Hidden")] = ModelBase::toJson(m_Hidden);
    }
    if(m_HighlightColorIsSet)
    {
        val[utility::conversions::to_string_t("HighlightColor")] = ModelBase::toJson(m_HighlightColor);
    }
    if(m_ItalicIsSet)
    {
        val[utility::conversions::to_string_t("Italic")] = ModelBase::toJson(m_Italic);
    }
    if(m_ItalicBiIsSet)
    {
        val[utility::conversions::to_string_t("ItalicBi")] = ModelBase::toJson(m_ItalicBi);
    }
    if(m_KerningIsSet)
    {
        val[utility::conversions::to_string_t("Kerning")] = ModelBase::toJson(m_Kerning);
    }
    if(m_LocaleIdIsSet)
    {
        val[utility::conversions::to_string_t("LocaleId")] = ModelBase::toJson(m_LocaleId);
    }
    if(m_LocaleIdBiIsSet)
    {
        val[utility::conversions::to_string_t("LocaleIdBi")] = ModelBase::toJson(m_LocaleIdBi);
    }
    if(m_LocaleIdFarEastIsSet)
    {
        val[utility::conversions::to_string_t("LocaleIdFarEast")] = ModelBase::toJson(m_LocaleIdFarEast);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t("Name")] = ModelBase::toJson(m_Name);
    }
    if(m_NameAsciiIsSet)
    {
        val[utility::conversions::to_string_t("NameAscii")] = ModelBase::toJson(m_NameAscii);
    }
    if(m_NameBiIsSet)
    {
        val[utility::conversions::to_string_t("NameBi")] = ModelBase::toJson(m_NameBi);
    }
    if(m_NameFarEastIsSet)
    {
        val[utility::conversions::to_string_t("NameFarEast")] = ModelBase::toJson(m_NameFarEast);
    }
    if(m_NameOtherIsSet)
    {
        val[utility::conversions::to_string_t("NameOther")] = ModelBase::toJson(m_NameOther);
    }
    if(m_NoProofingIsSet)
    {
        val[utility::conversions::to_string_t("NoProofing")] = ModelBase::toJson(m_NoProofing);
    }
    if(m_OutlineIsSet)
    {
        val[utility::conversions::to_string_t("Outline")] = ModelBase::toJson(m_Outline);
    }
    if(m_PositionIsSet)
    {
        val[utility::conversions::to_string_t("Position")] = ModelBase::toJson(m_Position);
    }
    if(m_ScalingIsSet)
    {
        val[utility::conversions::to_string_t("Scaling")] = ModelBase::toJson(m_Scaling);
    }
    if(m_ShadowIsSet)
    {
        val[utility::conversions::to_string_t("Shadow")] = ModelBase::toJson(m_Shadow);
    }
    if(m_SizeIsSet)
    {
        val[utility::conversions::to_string_t("Size")] = ModelBase::toJson(m_Size);
    }
    if(m_SizeBiIsSet)
    {
        val[utility::conversions::to_string_t("SizeBi")] = ModelBase::toJson(m_SizeBi);
    }
    if(m_SmallCapsIsSet)
    {
        val[utility::conversions::to_string_t("SmallCaps")] = ModelBase::toJson(m_SmallCaps);
    }
    if(m_SpacingIsSet)
    {
        val[utility::conversions::to_string_t("Spacing")] = ModelBase::toJson(m_Spacing);
    }
    if(m_StrikeThroughIsSet)
    {
        val[utility::conversions::to_string_t("StrikeThrough")] = ModelBase::toJson(m_StrikeThrough);
    }
    if(m_StyleIdentifierIsSet)
    {
        val[utility::conversions::to_string_t("StyleIdentifier")] = ModelBase::toJson(m_StyleIdentifier);
    }
    if(m_StyleNameIsSet)
    {
        val[utility::conversions::to_string_t("StyleName")] = ModelBase::toJson(m_StyleName);
    }
    if(m_SubscriptIsSet)
    {
        val[utility::conversions::to_string_t("Subscript")] = ModelBase::toJson(m_Subscript);
    }
    if(m_SuperscriptIsSet)
    {
        val[utility::conversions::to_string_t("Superscript")] = ModelBase::toJson(m_Superscript);
    }
    if(m_TextEffectIsSet)
    {
        val[utility::conversions::to_string_t("TextEffect")] = ModelBase::toJson(m_TextEffect);
    }
    if(m_UnderlineIsSet)
    {
        val[utility::conversions::to_string_t("Underline")] = ModelBase::toJson(m_Underline);
    }
    if(m_UnderlineColorIsSet)
    {
        val[utility::conversions::to_string_t("UnderlineColor")] = ModelBase::toJson(m_UnderlineColor);
    }

    return val;
}

void Font::fromJson(web::json::value& val)
{
    this->LinkElement::fromJson(val);

    if(val.has_field(utility::conversions::to_string_t("AllCaps")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("AllCaps")];
        if(!fieldValue.is_null())
        {
            setAllCaps(ModelBase::boolFromJson(fieldValue));
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
    if(val.has_field(utility::conversions::to_string_t("Bold")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("Bold")];
        if(!fieldValue.is_null())
        {
            setBold(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("BoldBi")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("BoldBi")];
        if(!fieldValue.is_null())
        {
            setBoldBi(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Border")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("Border")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Border> newItem(new Border());
            newItem->fromJson(fieldValue);
            setBorder( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Color")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("Color")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<XmlColor> newItem(new XmlColor());
            newItem->fromJson(fieldValue);
            setColor( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ComplexScript")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("ComplexScript")];
        if(!fieldValue.is_null())
        {
            setComplexScript(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("DoubleStrikeThrough")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("DoubleStrikeThrough")];
        if(!fieldValue.is_null())
        {
            setDoubleStrikeThrough(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Emboss")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("Emboss")];
        if(!fieldValue.is_null())
        {
            setEmboss(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Engrave")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("Engrave")];
        if(!fieldValue.is_null())
        {
            setEngrave(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Hidden")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("Hidden")];
        if(!fieldValue.is_null())
        {
            setHidden(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("HighlightColor")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("HighlightColor")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<XmlColor> newItem(new XmlColor());
            newItem->fromJson(fieldValue);
            setHighlightColor( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Italic")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("Italic")];
        if(!fieldValue.is_null())
        {
            setItalic(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ItalicBi")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("ItalicBi")];
        if(!fieldValue.is_null())
        {
            setItalicBi(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Kerning")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("Kerning")];
        if(!fieldValue.is_null())
        {
            setKerning(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("LocaleId")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("LocaleId")];
        if(!fieldValue.is_null())
        {
            setLocaleId(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("LocaleIdBi")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("LocaleIdBi")];
        if(!fieldValue.is_null())
        {
            setLocaleIdBi(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("LocaleIdFarEast")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("LocaleIdFarEast")];
        if(!fieldValue.is_null())
        {
            setLocaleIdFarEast(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Name")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("Name")];
        if(!fieldValue.is_null())
        {
            setName(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("NameAscii")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("NameAscii")];
        if(!fieldValue.is_null())
        {
            setNameAscii(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("NameBi")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("NameBi")];
        if(!fieldValue.is_null())
        {
            setNameBi(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("NameFarEast")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("NameFarEast")];
        if(!fieldValue.is_null())
        {
            setNameFarEast(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("NameOther")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("NameOther")];
        if(!fieldValue.is_null())
        {
            setNameOther(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("NoProofing")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("NoProofing")];
        if(!fieldValue.is_null())
        {
            setNoProofing(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Outline")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("Outline")];
        if(!fieldValue.is_null())
        {
            setOutline(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Position")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("Position")];
        if(!fieldValue.is_null())
        {
            setPosition(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Scaling")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("Scaling")];
        if(!fieldValue.is_null())
        {
            setScaling(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Shadow")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("Shadow")];
        if(!fieldValue.is_null())
        {
            setShadow(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Size")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("Size")];
        if(!fieldValue.is_null())
        {
            setSize(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("SizeBi")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("SizeBi")];
        if(!fieldValue.is_null())
        {
            setSizeBi(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("SmallCaps")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("SmallCaps")];
        if(!fieldValue.is_null())
        {
            setSmallCaps(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Spacing")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("Spacing")];
        if(!fieldValue.is_null())
        {
            setSpacing(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("StrikeThrough")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("StrikeThrough")];
        if(!fieldValue.is_null())
        {
            setStrikeThrough(ModelBase::boolFromJson(fieldValue));
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
    if(val.has_field(utility::conversions::to_string_t("Subscript")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("Subscript")];
        if(!fieldValue.is_null())
        {
            setSubscript(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Superscript")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("Superscript")];
        if(!fieldValue.is_null())
        {
            setSuperscript(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("TextEffect")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("TextEffect")];
        if(!fieldValue.is_null())
        {
            setTextEffect(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Underline")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("Underline")];
        if(!fieldValue.is_null())
        {
            setUnderline(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("UnderlineColor")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("UnderlineColor")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<XmlColor> newItem(new XmlColor());
            newItem->fromJson(fieldValue);
            setUnderlineColor( newItem );
        }
    }
}

void Font::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_AllCapsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("AllCaps"), m_AllCaps));
    }
    if(m_BidiIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("Bidi"), m_Bidi));
    }
    if(m_BoldIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("Bold"), m_Bold));
    }
    if(m_BoldBiIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("BoldBi"), m_BoldBi));
    }
    if(m_BorderIsSet)
    {
        if (m_Border.get())
        {
            m_Border->toMultipart(multipart, utility::conversions::to_string_t("Border."));
        }
        
    }
    if(m_ColorIsSet)
    {
        if (m_Color.get())
        {
            m_Color->toMultipart(multipart, utility::conversions::to_string_t("Color."));
        }
        
    }
    if(m_ComplexScriptIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ComplexScript"), m_ComplexScript));
    }
    if(m_DoubleStrikeThroughIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("DoubleStrikeThrough"), m_DoubleStrikeThrough));
    }
    if(m_EmbossIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("Emboss"), m_Emboss));
    }
    if(m_EngraveIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("Engrave"), m_Engrave));
    }
    if(m_HiddenIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("Hidden"), m_Hidden));
    }
    if(m_HighlightColorIsSet)
    {
        if (m_HighlightColor.get())
        {
            m_HighlightColor->toMultipart(multipart, utility::conversions::to_string_t("HighlightColor."));
        }
        
    }
    if(m_ItalicIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("Italic"), m_Italic));
    }
    if(m_ItalicBiIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ItalicBi"), m_ItalicBi));
    }
    if(m_KerningIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("Kerning"), m_Kerning));
    }
    if(m_LocaleIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("LocaleId"), m_LocaleId));
    }
    if(m_LocaleIdBiIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("LocaleIdBi"), m_LocaleIdBi));
    }
    if(m_LocaleIdFarEastIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("LocaleIdFarEast"), m_LocaleIdFarEast));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("Name"), m_Name));
        
    }
    if(m_NameAsciiIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("NameAscii"), m_NameAscii));
        
    }
    if(m_NameBiIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("NameBi"), m_NameBi));
        
    }
    if(m_NameFarEastIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("NameFarEast"), m_NameFarEast));
        
    }
    if(m_NameOtherIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("NameOther"), m_NameOther));
        
    }
    if(m_NoProofingIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("NoProofing"), m_NoProofing));
    }
    if(m_OutlineIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("Outline"), m_Outline));
    }
    if(m_PositionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("Position"), m_Position));
    }
    if(m_ScalingIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("Scaling"), m_Scaling));
    }
    if(m_ShadowIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("Shadow"), m_Shadow));
    }
    if(m_SizeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("Size"), m_Size));
    }
    if(m_SizeBiIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("SizeBi"), m_SizeBi));
    }
    if(m_SmallCapsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("SmallCaps"), m_SmallCaps));
    }
    if(m_SpacingIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("Spacing"), m_Spacing));
    }
    if(m_StrikeThroughIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("StrikeThrough"), m_StrikeThrough));
    }
    if(m_StyleIdentifierIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("StyleIdentifier"), m_StyleIdentifier));
        
    }
    if(m_StyleNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("StyleName"), m_StyleName));
        
    }
    if(m_SubscriptIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("Subscript"), m_Subscript));
    }
    if(m_SuperscriptIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("Superscript"), m_Superscript));
    }
    if(m_TextEffectIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("TextEffect"), m_TextEffect));
        
    }
    if(m_UnderlineIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("Underline"), m_Underline));
        
    }
    if(m_UnderlineColorIsSet)
    {
        if (m_UnderlineColor.get())
        {
            m_UnderlineColor->toMultipart(multipart, utility::conversions::to_string_t("UnderlineColor."));
        }
        
    }
}

void Font::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("AllCaps")))
    {
        setAllCaps(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("AllCaps"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("Bidi")))
    {
        setBidi(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("Bidi"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("Bold")))
    {
        setBold(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("Bold"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("BoldBi")))
    {
        setBoldBi(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("BoldBi"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("Border")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("Border")))
        {
            std::shared_ptr<Border> newItem(new Border());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("Border."));
            setBorder( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("Color")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("Color")))
        {
            std::shared_ptr<XmlColor> newItem(new XmlColor());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("Color."));
            setColor( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ComplexScript")))
    {
        setComplexScript(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ComplexScript"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("DoubleStrikeThrough")))
    {
        setDoubleStrikeThrough(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("DoubleStrikeThrough"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("Emboss")))
    {
        setEmboss(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("Emboss"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("Engrave")))
    {
        setEngrave(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("Engrave"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("Hidden")))
    {
        setHidden(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("Hidden"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("HighlightColor")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("HighlightColor")))
        {
            std::shared_ptr<XmlColor> newItem(new XmlColor());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("HighlightColor."));
            setHighlightColor( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("Italic")))
    {
        setItalic(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("Italic"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ItalicBi")))
    {
        setItalicBi(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ItalicBi"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("Kerning")))
    {
        setKerning(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("Kerning"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("LocaleId")))
    {
        setLocaleId(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("LocaleId"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("LocaleIdBi")))
    {
        setLocaleIdBi(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("LocaleIdBi"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("LocaleIdFarEast")))
    {
        setLocaleIdFarEast(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("LocaleIdFarEast"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("Name")))
    {
        setName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("Name"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("NameAscii")))
    {
        setNameAscii(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("NameAscii"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("NameBi")))
    {
        setNameBi(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("NameBi"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("NameFarEast")))
    {
        setNameFarEast(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("NameFarEast"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("NameOther")))
    {
        setNameOther(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("NameOther"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("NoProofing")))
    {
        setNoProofing(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("NoProofing"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("Outline")))
    {
        setOutline(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("Outline"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("Position")))
    {
        setPosition(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("Position"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("Scaling")))
    {
        setScaling(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("Scaling"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("Shadow")))
    {
        setShadow(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("Shadow"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("Size")))
    {
        setSize(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("Size"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("SizeBi")))
    {
        setSizeBi(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("SizeBi"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("SmallCaps")))
    {
        setSmallCaps(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("SmallCaps"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("Spacing")))
    {
        setSpacing(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("Spacing"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("StrikeThrough")))
    {
        setStrikeThrough(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("StrikeThrough"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("StyleIdentifier")))
    {
        setStyleIdentifier(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("StyleIdentifier"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("StyleName")))
    {
        setStyleName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("StyleName"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("Subscript")))
    {
        setSubscript(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("Subscript"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("Superscript")))
    {
        setSuperscript(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("Superscript"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("TextEffect")))
    {
        setTextEffect(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("TextEffect"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("Underline")))
    {
        setUnderline(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("Underline"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("UnderlineColor")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("UnderlineColor")))
        {
            std::shared_ptr<XmlColor> newItem(new XmlColor());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("UnderlineColor."));
            setUnderlineColor( newItem );
        }
    }
}

bool Font::isAllCaps() const
{
    return m_AllCaps;
}


void Font::setAllCaps(bool value)
{
    m_AllCaps = value;
    m_AllCapsIsSet = true;
}
bool Font::allCapsIsSet() const
{
    return m_AllCapsIsSet;
}

void Font::unsetAllCaps()
{
    m_AllCapsIsSet = false;
}

bool Font::isBidi() const
{
    return m_Bidi;
}


void Font::setBidi(bool value)
{
    m_Bidi = value;
    m_BidiIsSet = true;
}
bool Font::bidiIsSet() const
{
    return m_BidiIsSet;
}

void Font::unsetBidi()
{
    m_BidiIsSet = false;
}

bool Font::isBold() const
{
    return m_Bold;
}


void Font::setBold(bool value)
{
    m_Bold = value;
    m_BoldIsSet = true;
}
bool Font::boldIsSet() const
{
    return m_BoldIsSet;
}

void Font::unsetBold()
{
    m_BoldIsSet = false;
}

bool Font::isBoldBi() const
{
    return m_BoldBi;
}


void Font::setBoldBi(bool value)
{
    m_BoldBi = value;
    m_BoldBiIsSet = true;
}
bool Font::boldBiIsSet() const
{
    return m_BoldBiIsSet;
}

void Font::unsetBoldBi()
{
    m_BoldBiIsSet = false;
}

std::shared_ptr<Border> Font::getBorder() const
{
    return m_Border;
}


void Font::setBorder(std::shared_ptr<Border> value)
{
    m_Border = value;
    m_BorderIsSet = true;
}
bool Font::borderIsSet() const
{
    return m_BorderIsSet;
}

void Font::unsetBorder()
{
    m_BorderIsSet = false;
}

std::shared_ptr<XmlColor> Font::getColor() const
{
    return m_Color;
}


void Font::setColor(std::shared_ptr<XmlColor> value)
{
    m_Color = value;
    m_ColorIsSet = true;
}
bool Font::colorIsSet() const
{
    return m_ColorIsSet;
}

void Font::unsetColor()
{
    m_ColorIsSet = false;
}

bool Font::isComplexScript() const
{
    return m_ComplexScript;
}


void Font::setComplexScript(bool value)
{
    m_ComplexScript = value;
    m_ComplexScriptIsSet = true;
}
bool Font::complexScriptIsSet() const
{
    return m_ComplexScriptIsSet;
}

void Font::unsetComplexScript()
{
    m_ComplexScriptIsSet = false;
}

bool Font::isDoubleStrikeThrough() const
{
    return m_DoubleStrikeThrough;
}


void Font::setDoubleStrikeThrough(bool value)
{
    m_DoubleStrikeThrough = value;
    m_DoubleStrikeThroughIsSet = true;
}
bool Font::doubleStrikeThroughIsSet() const
{
    return m_DoubleStrikeThroughIsSet;
}

void Font::unsetDoubleStrikeThrough()
{
    m_DoubleStrikeThroughIsSet = false;
}

bool Font::isEmboss() const
{
    return m_Emboss;
}


void Font::setEmboss(bool value)
{
    m_Emboss = value;
    m_EmbossIsSet = true;
}
bool Font::embossIsSet() const
{
    return m_EmbossIsSet;
}

void Font::unsetEmboss()
{
    m_EmbossIsSet = false;
}

bool Font::isEngrave() const
{
    return m_Engrave;
}


void Font::setEngrave(bool value)
{
    m_Engrave = value;
    m_EngraveIsSet = true;
}
bool Font::engraveIsSet() const
{
    return m_EngraveIsSet;
}

void Font::unsetEngrave()
{
    m_EngraveIsSet = false;
}

bool Font::isHidden() const
{
    return m_Hidden;
}


void Font::setHidden(bool value)
{
    m_Hidden = value;
    m_HiddenIsSet = true;
}
bool Font::hiddenIsSet() const
{
    return m_HiddenIsSet;
}

void Font::unsetHidden()
{
    m_HiddenIsSet = false;
}

std::shared_ptr<XmlColor> Font::getHighlightColor() const
{
    return m_HighlightColor;
}


void Font::setHighlightColor(std::shared_ptr<XmlColor> value)
{
    m_HighlightColor = value;
    m_HighlightColorIsSet = true;
}
bool Font::highlightColorIsSet() const
{
    return m_HighlightColorIsSet;
}

void Font::unsetHighlightColor()
{
    m_HighlightColorIsSet = false;
}

bool Font::isItalic() const
{
    return m_Italic;
}


void Font::setItalic(bool value)
{
    m_Italic = value;
    m_ItalicIsSet = true;
}
bool Font::italicIsSet() const
{
    return m_ItalicIsSet;
}

void Font::unsetItalic()
{
    m_ItalicIsSet = false;
}

bool Font::isItalicBi() const
{
    return m_ItalicBi;
}


void Font::setItalicBi(bool value)
{
    m_ItalicBi = value;
    m_ItalicBiIsSet = true;
}
bool Font::italicBiIsSet() const
{
    return m_ItalicBiIsSet;
}

void Font::unsetItalicBi()
{
    m_ItalicBiIsSet = false;
}

double Font::getKerning() const
{
    return m_Kerning;
}


void Font::setKerning(double value)
{
    m_Kerning = value;
    m_KerningIsSet = true;
}
bool Font::kerningIsSet() const
{
    return m_KerningIsSet;
}

void Font::unsetKerning()
{
    m_KerningIsSet = false;
}

int32_t Font::getLocaleId() const
{
    return m_LocaleId;
}


void Font::setLocaleId(int32_t value)
{
    m_LocaleId = value;
    m_LocaleIdIsSet = true;
}
bool Font::localeIdIsSet() const
{
    return m_LocaleIdIsSet;
}

void Font::unsetLocaleId()
{
    m_LocaleIdIsSet = false;
}

int32_t Font::getLocaleIdBi() const
{
    return m_LocaleIdBi;
}


void Font::setLocaleIdBi(int32_t value)
{
    m_LocaleIdBi = value;
    m_LocaleIdBiIsSet = true;
}
bool Font::localeIdBiIsSet() const
{
    return m_LocaleIdBiIsSet;
}

void Font::unsetLocaleIdBi()
{
    m_LocaleIdBiIsSet = false;
}

int32_t Font::getLocaleIdFarEast() const
{
    return m_LocaleIdFarEast;
}


void Font::setLocaleIdFarEast(int32_t value)
{
    m_LocaleIdFarEast = value;
    m_LocaleIdFarEastIsSet = true;
}
bool Font::localeIdFarEastIsSet() const
{
    return m_LocaleIdFarEastIsSet;
}

void Font::unsetLocaleIdFarEast()
{
    m_LocaleIdFarEastIsSet = false;
}

utility::string_t Font::getName() const
{
    return m_Name;
}


void Font::setName(utility::string_t value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool Font::nameIsSet() const
{
    return m_NameIsSet;
}

void Font::unsetName()
{
    m_NameIsSet = false;
}

utility::string_t Font::getNameAscii() const
{
    return m_NameAscii;
}


void Font::setNameAscii(utility::string_t value)
{
    m_NameAscii = value;
    m_NameAsciiIsSet = true;
}
bool Font::nameAsciiIsSet() const
{
    return m_NameAsciiIsSet;
}

void Font::unsetNameAscii()
{
    m_NameAsciiIsSet = false;
}

utility::string_t Font::getNameBi() const
{
    return m_NameBi;
}


void Font::setNameBi(utility::string_t value)
{
    m_NameBi = value;
    m_NameBiIsSet = true;
}
bool Font::nameBiIsSet() const
{
    return m_NameBiIsSet;
}

void Font::unsetNameBi()
{
    m_NameBiIsSet = false;
}

utility::string_t Font::getNameFarEast() const
{
    return m_NameFarEast;
}


void Font::setNameFarEast(utility::string_t value)
{
    m_NameFarEast = value;
    m_NameFarEastIsSet = true;
}
bool Font::nameFarEastIsSet() const
{
    return m_NameFarEastIsSet;
}

void Font::unsetNameFarEast()
{
    m_NameFarEastIsSet = false;
}

utility::string_t Font::getNameOther() const
{
    return m_NameOther;
}


void Font::setNameOther(utility::string_t value)
{
    m_NameOther = value;
    m_NameOtherIsSet = true;
}
bool Font::nameOtherIsSet() const
{
    return m_NameOtherIsSet;
}

void Font::unsetNameOther()
{
    m_NameOtherIsSet = false;
}

bool Font::isNoProofing() const
{
    return m_NoProofing;
}


void Font::setNoProofing(bool value)
{
    m_NoProofing = value;
    m_NoProofingIsSet = true;
}
bool Font::noProofingIsSet() const
{
    return m_NoProofingIsSet;
}

void Font::unsetNoProofing()
{
    m_NoProofingIsSet = false;
}

bool Font::isOutline() const
{
    return m_Outline;
}


void Font::setOutline(bool value)
{
    m_Outline = value;
    m_OutlineIsSet = true;
}
bool Font::outlineIsSet() const
{
    return m_OutlineIsSet;
}

void Font::unsetOutline()
{
    m_OutlineIsSet = false;
}

double Font::getPosition() const
{
    return m_Position;
}


void Font::setPosition(double value)
{
    m_Position = value;
    m_PositionIsSet = true;
}
bool Font::positionIsSet() const
{
    return m_PositionIsSet;
}

void Font::unsetPosition()
{
    m_PositionIsSet = false;
}

int32_t Font::getScaling() const
{
    return m_Scaling;
}


void Font::setScaling(int32_t value)
{
    m_Scaling = value;
    m_ScalingIsSet = true;
}
bool Font::scalingIsSet() const
{
    return m_ScalingIsSet;
}

void Font::unsetScaling()
{
    m_ScalingIsSet = false;
}

bool Font::isShadow() const
{
    return m_Shadow;
}


void Font::setShadow(bool value)
{
    m_Shadow = value;
    m_ShadowIsSet = true;
}
bool Font::shadowIsSet() const
{
    return m_ShadowIsSet;
}

void Font::unsetShadow()
{
    m_ShadowIsSet = false;
}

double Font::getSize() const
{
    return m_Size;
}


void Font::setSize(double value)
{
    m_Size = value;
    m_SizeIsSet = true;
}
bool Font::sizeIsSet() const
{
    return m_SizeIsSet;
}

void Font::unsetSize()
{
    m_SizeIsSet = false;
}

double Font::getSizeBi() const
{
    return m_SizeBi;
}


void Font::setSizeBi(double value)
{
    m_SizeBi = value;
    m_SizeBiIsSet = true;
}
bool Font::sizeBiIsSet() const
{
    return m_SizeBiIsSet;
}

void Font::unsetSizeBi()
{
    m_SizeBiIsSet = false;
}

bool Font::isSmallCaps() const
{
    return m_SmallCaps;
}


void Font::setSmallCaps(bool value)
{
    m_SmallCaps = value;
    m_SmallCapsIsSet = true;
}
bool Font::smallCapsIsSet() const
{
    return m_SmallCapsIsSet;
}

void Font::unsetSmallCaps()
{
    m_SmallCapsIsSet = false;
}

double Font::getSpacing() const
{
    return m_Spacing;
}


void Font::setSpacing(double value)
{
    m_Spacing = value;
    m_SpacingIsSet = true;
}
bool Font::spacingIsSet() const
{
    return m_SpacingIsSet;
}

void Font::unsetSpacing()
{
    m_SpacingIsSet = false;
}

bool Font::isStrikeThrough() const
{
    return m_StrikeThrough;
}


void Font::setStrikeThrough(bool value)
{
    m_StrikeThrough = value;
    m_StrikeThroughIsSet = true;
}
bool Font::strikeThroughIsSet() const
{
    return m_StrikeThroughIsSet;
}

void Font::unsetStrikeThrough()
{
    m_StrikeThroughIsSet = false;
}

utility::string_t Font::getStyleIdentifier() const
{
    return m_StyleIdentifier;
}


void Font::setStyleIdentifier(utility::string_t value)
{
    m_StyleIdentifier = value;
    m_StyleIdentifierIsSet = true;
}
bool Font::styleIdentifierIsSet() const
{
    return m_StyleIdentifierIsSet;
}

void Font::unsetStyleIdentifier()
{
    m_StyleIdentifierIsSet = false;
}

utility::string_t Font::getStyleName() const
{
    return m_StyleName;
}


void Font::setStyleName(utility::string_t value)
{
    m_StyleName = value;
    m_StyleNameIsSet = true;
}
bool Font::styleNameIsSet() const
{
    return m_StyleNameIsSet;
}

void Font::unsetStyleName()
{
    m_StyleNameIsSet = false;
}

bool Font::isSubscript() const
{
    return m_Subscript;
}


void Font::setSubscript(bool value)
{
    m_Subscript = value;
    m_SubscriptIsSet = true;
}
bool Font::subscriptIsSet() const
{
    return m_SubscriptIsSet;
}

void Font::unsetSubscript()
{
    m_SubscriptIsSet = false;
}

bool Font::isSuperscript() const
{
    return m_Superscript;
}


void Font::setSuperscript(bool value)
{
    m_Superscript = value;
    m_SuperscriptIsSet = true;
}
bool Font::superscriptIsSet() const
{
    return m_SuperscriptIsSet;
}

void Font::unsetSuperscript()
{
    m_SuperscriptIsSet = false;
}

utility::string_t Font::getTextEffect() const
{
    return m_TextEffect;
}


void Font::setTextEffect(utility::string_t value)
{
    m_TextEffect = value;
    m_TextEffectIsSet = true;
}
bool Font::textEffectIsSet() const
{
    return m_TextEffectIsSet;
}

void Font::unsetTextEffect()
{
    m_TextEffectIsSet = false;
}

utility::string_t Font::getUnderline() const
{
    return m_Underline;
}


void Font::setUnderline(utility::string_t value)
{
    m_Underline = value;
    m_UnderlineIsSet = true;
}
bool Font::underlineIsSet() const
{
    return m_UnderlineIsSet;
}

void Font::unsetUnderline()
{
    m_UnderlineIsSet = false;
}

std::shared_ptr<XmlColor> Font::getUnderlineColor() const
{
    return m_UnderlineColor;
}


void Font::setUnderlineColor(std::shared_ptr<XmlColor> value)
{
    m_UnderlineColor = value;
    m_UnderlineColorIsSet = true;
}
bool Font::underlineColorIsSet() const
{
    return m_UnderlineColorIsSet;
}

void Font::unsetUnderlineColor()
{
    m_UnderlineColorIsSet = false;
}

}
}
}
}

