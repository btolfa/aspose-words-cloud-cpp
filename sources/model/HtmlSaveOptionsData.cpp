/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="HtmlSaveOptionsData.cpp">
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


#include "HtmlSaveOptionsData.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

HtmlSaveOptionsData::HtmlSaveOptionsData()
{
    m_AllowNegativeIndent = false;
    m_AllowNegativeIndentIsSet = false;
    m_CssClassNamePrefix = utility::conversions::to_string_t("");
    m_CssClassNamePrefixIsSet = false;
    m_CssStyleSheetFileName = utility::conversions::to_string_t("");
    m_CssStyleSheetFileNameIsSet = false;
    m_CssStyleSheetType = utility::conversions::to_string_t("");
    m_CssStyleSheetTypeIsSet = false;
    m_DocumentSplitCriteria = utility::conversions::to_string_t("");
    m_DocumentSplitCriteriaIsSet = false;
    m_DocumentSplitHeadingLevel = 0;
    m_DocumentSplitHeadingLevelIsSet = false;
    m_Encoding = utility::conversions::to_string_t("");
    m_EncodingIsSet = false;
    m_ExportDocumentProperties = false;
    m_ExportDocumentPropertiesIsSet = false;
    m_ExportDropDownFormFieldAsText = false;
    m_ExportDropDownFormFieldAsTextIsSet = false;
    m_ExportFontResources = false;
    m_ExportFontResourcesIsSet = false;
    m_ExportFontsAsBase64 = false;
    m_ExportFontsAsBase64IsSet = false;
    m_ExportHeadersFootersMode = utility::conversions::to_string_t("");
    m_ExportHeadersFootersModeIsSet = false;
    m_ExportImagesAsBase64 = false;
    m_ExportImagesAsBase64IsSet = false;
    m_ExportLanguageInformation = false;
    m_ExportLanguageInformationIsSet = false;
    m_ExportListLabels = utility::conversions::to_string_t("");
    m_ExportListLabelsIsSet = false;
    m_ExportOriginalUrlForLinkedImages = false;
    m_ExportOriginalUrlForLinkedImagesIsSet = false;
    m_ExportPageMargins = false;
    m_ExportPageMarginsIsSet = false;
    m_ExportPageSetup = false;
    m_ExportPageSetupIsSet = false;
    m_ExportRelativeFontSize = false;
    m_ExportRelativeFontSizeIsSet = false;
    m_ExportRoundtripInformation = false;
    m_ExportRoundtripInformationIsSet = false;
    m_ExportTextBoxAsSvg = false;
    m_ExportTextBoxAsSvgIsSet = false;
    m_ExportTextInputFormFieldAsText = false;
    m_ExportTextInputFormFieldAsTextIsSet = false;
    m_ExportTocPageNumbers = false;
    m_ExportTocPageNumbersIsSet = false;
    m_ExportXhtmlTransitional = false;
    m_ExportXhtmlTransitionalIsSet = false;
    m_FontResourcesSubsettingSizeThreshold = 0;
    m_FontResourcesSubsettingSizeThresholdIsSet = false;
    m_FontsFolder = utility::conversions::to_string_t("");
    m_FontsFolderIsSet = false;
    m_FontsFolderAlias = utility::conversions::to_string_t("");
    m_FontsFolderAliasIsSet = false;
    m_HtmlVersion = utility::conversions::to_string_t("");
    m_HtmlVersionIsSet = false;
    m_ImageResolution = 0;
    m_ImageResolutionIsSet = false;
    m_ImagesFolder = utility::conversions::to_string_t("");
    m_ImagesFolderIsSet = false;
    m_ImagesFolderAlias = utility::conversions::to_string_t("");
    m_ImagesFolderAliasIsSet = false;
    m_MetafileFormat = utility::conversions::to_string_t("");
    m_MetafileFormatIsSet = false;
    m_OfficeMathOutputMode = utility::conversions::to_string_t("");
    m_OfficeMathOutputModeIsSet = false;
    m_PrettyFormat = false;
    m_PrettyFormatIsSet = false;
    m_ResourceFolder = utility::conversions::to_string_t("");
    m_ResourceFolderIsSet = false;
    m_ResourceFolderAlias = utility::conversions::to_string_t("");
    m_ResourceFolderAliasIsSet = false;
    m_ScaleImageToShapeSize = false;
    m_ScaleImageToShapeSizeIsSet = false;
    m_TableWidthOutputMode = utility::conversions::to_string_t("");
    m_TableWidthOutputModeIsSet = false;
}

HtmlSaveOptionsData::~HtmlSaveOptionsData()
{
}

void HtmlSaveOptionsData::validate()
{
    // TODO: implement validation
}

web::json::value HtmlSaveOptionsData::toJson() const
{
    web::json::value val = this->SaveOptionsData::toJson();

    if(m_AllowNegativeIndentIsSet)
    {
        val[utility::conversions::to_string_t("AllowNegativeIndent")] = ModelBase::toJson(m_AllowNegativeIndent);
    }
    if(m_CssClassNamePrefixIsSet)
    {
        val[utility::conversions::to_string_t("CssClassNamePrefix")] = ModelBase::toJson(m_CssClassNamePrefix);
    }
    if(m_CssStyleSheetFileNameIsSet)
    {
        val[utility::conversions::to_string_t("CssStyleSheetFileName")] = ModelBase::toJson(m_CssStyleSheetFileName);
    }
    if(m_CssStyleSheetTypeIsSet)
    {
        val[utility::conversions::to_string_t("CssStyleSheetType")] = ModelBase::toJson(m_CssStyleSheetType);
    }
    if(m_DocumentSplitCriteriaIsSet)
    {
        val[utility::conversions::to_string_t("DocumentSplitCriteria")] = ModelBase::toJson(m_DocumentSplitCriteria);
    }
    if(m_DocumentSplitHeadingLevelIsSet)
    {
        val[utility::conversions::to_string_t("DocumentSplitHeadingLevel")] = ModelBase::toJson(m_DocumentSplitHeadingLevel);
    }
    if(m_EncodingIsSet)
    {
        val[utility::conversions::to_string_t("Encoding")] = ModelBase::toJson(m_Encoding);
    }
    if(m_ExportDocumentPropertiesIsSet)
    {
        val[utility::conversions::to_string_t("ExportDocumentProperties")] = ModelBase::toJson(m_ExportDocumentProperties);
    }
    if(m_ExportDropDownFormFieldAsTextIsSet)
    {
        val[utility::conversions::to_string_t("ExportDropDownFormFieldAsText")] = ModelBase::toJson(m_ExportDropDownFormFieldAsText);
    }
    if(m_ExportFontResourcesIsSet)
    {
        val[utility::conversions::to_string_t("ExportFontResources")] = ModelBase::toJson(m_ExportFontResources);
    }
    if(m_ExportFontsAsBase64IsSet)
    {
        val[utility::conversions::to_string_t("ExportFontsAsBase64")] = ModelBase::toJson(m_ExportFontsAsBase64);
    }
    if(m_ExportHeadersFootersModeIsSet)
    {
        val[utility::conversions::to_string_t("ExportHeadersFootersMode")] = ModelBase::toJson(m_ExportHeadersFootersMode);
    }
    if(m_ExportImagesAsBase64IsSet)
    {
        val[utility::conversions::to_string_t("ExportImagesAsBase64")] = ModelBase::toJson(m_ExportImagesAsBase64);
    }
    if(m_ExportLanguageInformationIsSet)
    {
        val[utility::conversions::to_string_t("ExportLanguageInformation")] = ModelBase::toJson(m_ExportLanguageInformation);
    }
    if(m_ExportListLabelsIsSet)
    {
        val[utility::conversions::to_string_t("ExportListLabels")] = ModelBase::toJson(m_ExportListLabels);
    }
    if(m_ExportOriginalUrlForLinkedImagesIsSet)
    {
        val[utility::conversions::to_string_t("ExportOriginalUrlForLinkedImages")] = ModelBase::toJson(m_ExportOriginalUrlForLinkedImages);
    }
    if(m_ExportPageMarginsIsSet)
    {
        val[utility::conversions::to_string_t("ExportPageMargins")] = ModelBase::toJson(m_ExportPageMargins);
    }
    if(m_ExportPageSetupIsSet)
    {
        val[utility::conversions::to_string_t("ExportPageSetup")] = ModelBase::toJson(m_ExportPageSetup);
    }
    if(m_ExportRelativeFontSizeIsSet)
    {
        val[utility::conversions::to_string_t("ExportRelativeFontSize")] = ModelBase::toJson(m_ExportRelativeFontSize);
    }
    if(m_ExportRoundtripInformationIsSet)
    {
        val[utility::conversions::to_string_t("ExportRoundtripInformation")] = ModelBase::toJson(m_ExportRoundtripInformation);
    }
    if(m_ExportTextBoxAsSvgIsSet)
    {
        val[utility::conversions::to_string_t("ExportTextBoxAsSvg")] = ModelBase::toJson(m_ExportTextBoxAsSvg);
    }
    if(m_ExportTextInputFormFieldAsTextIsSet)
    {
        val[utility::conversions::to_string_t("ExportTextInputFormFieldAsText")] = ModelBase::toJson(m_ExportTextInputFormFieldAsText);
    }
    if(m_ExportTocPageNumbersIsSet)
    {
        val[utility::conversions::to_string_t("ExportTocPageNumbers")] = ModelBase::toJson(m_ExportTocPageNumbers);
    }
    if(m_ExportXhtmlTransitionalIsSet)
    {
        val[utility::conversions::to_string_t("ExportXhtmlTransitional")] = ModelBase::toJson(m_ExportXhtmlTransitional);
    }
    if(m_FontResourcesSubsettingSizeThresholdIsSet)
    {
        val[utility::conversions::to_string_t("FontResourcesSubsettingSizeThreshold")] = ModelBase::toJson(m_FontResourcesSubsettingSizeThreshold);
    }
    if(m_FontsFolderIsSet)
    {
        val[utility::conversions::to_string_t("FontsFolder")] = ModelBase::toJson(m_FontsFolder);
    }
    if(m_FontsFolderAliasIsSet)
    {
        val[utility::conversions::to_string_t("FontsFolderAlias")] = ModelBase::toJson(m_FontsFolderAlias);
    }
    if(m_HtmlVersionIsSet)
    {
        val[utility::conversions::to_string_t("HtmlVersion")] = ModelBase::toJson(m_HtmlVersion);
    }
    if(m_ImageResolutionIsSet)
    {
        val[utility::conversions::to_string_t("ImageResolution")] = ModelBase::toJson(m_ImageResolution);
    }
    if(m_ImagesFolderIsSet)
    {
        val[utility::conversions::to_string_t("ImagesFolder")] = ModelBase::toJson(m_ImagesFolder);
    }
    if(m_ImagesFolderAliasIsSet)
    {
        val[utility::conversions::to_string_t("ImagesFolderAlias")] = ModelBase::toJson(m_ImagesFolderAlias);
    }
    if(m_MetafileFormatIsSet)
    {
        val[utility::conversions::to_string_t("MetafileFormat")] = ModelBase::toJson(m_MetafileFormat);
    }
    if(m_OfficeMathOutputModeIsSet)
    {
        val[utility::conversions::to_string_t("OfficeMathOutputMode")] = ModelBase::toJson(m_OfficeMathOutputMode);
    }
    if(m_PrettyFormatIsSet)
    {
        val[utility::conversions::to_string_t("PrettyFormat")] = ModelBase::toJson(m_PrettyFormat);
    }
    if(m_ResourceFolderIsSet)
    {
        val[utility::conversions::to_string_t("ResourceFolder")] = ModelBase::toJson(m_ResourceFolder);
    }
    if(m_ResourceFolderAliasIsSet)
    {
        val[utility::conversions::to_string_t("ResourceFolderAlias")] = ModelBase::toJson(m_ResourceFolderAlias);
    }
    if(m_ScaleImageToShapeSizeIsSet)
    {
        val[utility::conversions::to_string_t("ScaleImageToShapeSize")] = ModelBase::toJson(m_ScaleImageToShapeSize);
    }
    if(m_TableWidthOutputModeIsSet)
    {
        val[utility::conversions::to_string_t("TableWidthOutputMode")] = ModelBase::toJson(m_TableWidthOutputMode);
    }

    return val;
}

void HtmlSaveOptionsData::fromJson(web::json::value& val)
{
    this->SaveOptionsData::fromJson(val);

    if(val.has_field(utility::conversions::to_string_t("AllowNegativeIndent")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("AllowNegativeIndent")];
        if(!fieldValue.is_null())
        {
            setAllowNegativeIndent(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("CssClassNamePrefix")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("CssClassNamePrefix")];
        if(!fieldValue.is_null())
        {
            setCssClassNamePrefix(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("CssStyleSheetFileName")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("CssStyleSheetFileName")];
        if(!fieldValue.is_null())
        {
            setCssStyleSheetFileName(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("CssStyleSheetType")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("CssStyleSheetType")];
        if(!fieldValue.is_null())
        {
            setCssStyleSheetType(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("DocumentSplitCriteria")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("DocumentSplitCriteria")];
        if(!fieldValue.is_null())
        {
            setDocumentSplitCriteria(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("DocumentSplitHeadingLevel")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("DocumentSplitHeadingLevel")];
        if(!fieldValue.is_null())
        {
            setDocumentSplitHeadingLevel(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Encoding")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("Encoding")];
        if(!fieldValue.is_null())
        {
            setEncoding(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ExportDocumentProperties")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("ExportDocumentProperties")];
        if(!fieldValue.is_null())
        {
            setExportDocumentProperties(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ExportDropDownFormFieldAsText")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("ExportDropDownFormFieldAsText")];
        if(!fieldValue.is_null())
        {
            setExportDropDownFormFieldAsText(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ExportFontResources")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("ExportFontResources")];
        if(!fieldValue.is_null())
        {
            setExportFontResources(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ExportFontsAsBase64")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("ExportFontsAsBase64")];
        if(!fieldValue.is_null())
        {
            setExportFontsAsBase64(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ExportHeadersFootersMode")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("ExportHeadersFootersMode")];
        if(!fieldValue.is_null())
        {
            setExportHeadersFootersMode(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ExportImagesAsBase64")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("ExportImagesAsBase64")];
        if(!fieldValue.is_null())
        {
            setExportImagesAsBase64(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ExportLanguageInformation")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("ExportLanguageInformation")];
        if(!fieldValue.is_null())
        {
            setExportLanguageInformation(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ExportListLabels")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("ExportListLabels")];
        if(!fieldValue.is_null())
        {
            setExportListLabels(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ExportOriginalUrlForLinkedImages")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("ExportOriginalUrlForLinkedImages")];
        if(!fieldValue.is_null())
        {
            setExportOriginalUrlForLinkedImages(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ExportPageMargins")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("ExportPageMargins")];
        if(!fieldValue.is_null())
        {
            setExportPageMargins(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ExportPageSetup")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("ExportPageSetup")];
        if(!fieldValue.is_null())
        {
            setExportPageSetup(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ExportRelativeFontSize")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("ExportRelativeFontSize")];
        if(!fieldValue.is_null())
        {
            setExportRelativeFontSize(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ExportRoundtripInformation")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("ExportRoundtripInformation")];
        if(!fieldValue.is_null())
        {
            setExportRoundtripInformation(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ExportTextBoxAsSvg")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("ExportTextBoxAsSvg")];
        if(!fieldValue.is_null())
        {
            setExportTextBoxAsSvg(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ExportTextInputFormFieldAsText")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("ExportTextInputFormFieldAsText")];
        if(!fieldValue.is_null())
        {
            setExportTextInputFormFieldAsText(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ExportTocPageNumbers")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("ExportTocPageNumbers")];
        if(!fieldValue.is_null())
        {
            setExportTocPageNumbers(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ExportXhtmlTransitional")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("ExportXhtmlTransitional")];
        if(!fieldValue.is_null())
        {
            setExportXhtmlTransitional(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("FontResourcesSubsettingSizeThreshold")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("FontResourcesSubsettingSizeThreshold")];
        if(!fieldValue.is_null())
        {
            setFontResourcesSubsettingSizeThreshold(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("FontsFolder")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("FontsFolder")];
        if(!fieldValue.is_null())
        {
            setFontsFolder(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("FontsFolderAlias")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("FontsFolderAlias")];
        if(!fieldValue.is_null())
        {
            setFontsFolderAlias(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("HtmlVersion")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("HtmlVersion")];
        if(!fieldValue.is_null())
        {
            setHtmlVersion(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ImageResolution")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("ImageResolution")];
        if(!fieldValue.is_null())
        {
            setImageResolution(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ImagesFolder")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("ImagesFolder")];
        if(!fieldValue.is_null())
        {
            setImagesFolder(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ImagesFolderAlias")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("ImagesFolderAlias")];
        if(!fieldValue.is_null())
        {
            setImagesFolderAlias(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("MetafileFormat")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("MetafileFormat")];
        if(!fieldValue.is_null())
        {
            setMetafileFormat(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("OfficeMathOutputMode")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("OfficeMathOutputMode")];
        if(!fieldValue.is_null())
        {
            setOfficeMathOutputMode(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("PrettyFormat")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("PrettyFormat")];
        if(!fieldValue.is_null())
        {
            setPrettyFormat(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ResourceFolder")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("ResourceFolder")];
        if(!fieldValue.is_null())
        {
            setResourceFolder(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ResourceFolderAlias")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("ResourceFolderAlias")];
        if(!fieldValue.is_null())
        {
            setResourceFolderAlias(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ScaleImageToShapeSize")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("ScaleImageToShapeSize")];
        if(!fieldValue.is_null())
        {
            setScaleImageToShapeSize(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("TableWidthOutputMode")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("TableWidthOutputMode")];
        if(!fieldValue.is_null())
        {
            setTableWidthOutputMode(ModelBase::stringFromJson(fieldValue));
        }
    }
}

void HtmlSaveOptionsData::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_ColorModeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ColorMode"), m_ColorMode));
        
    }
    if(m_SaveFormatIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("SaveFormat"), m_SaveFormat));
        
    }
    if(m_FileNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("FileName"), m_FileName));
        
    }
    if(m_DmlRenderingModeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("DmlRenderingMode"), m_DmlRenderingMode));
        
    }
    if(m_DmlEffectsRenderingModeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("DmlEffectsRenderingMode"), m_DmlEffectsRenderingMode));
        
    }
    if(m_ZipOutputIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ZipOutput"), m_ZipOutput));
    }
    if(m_UpdateLastSavedTimePropertyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("UpdateLastSavedTimeProperty"), m_UpdateLastSavedTimeProperty));
    }
    if(m_UpdateSdtContentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("UpdateSdtContent"), m_UpdateSdtContent));
    }
    if(m_UpdateFieldsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("UpdateFields"), m_UpdateFields));
    }
    if(m_AllowNegativeIndentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("AllowNegativeIndent"), m_AllowNegativeIndent));
    }
    if(m_CssClassNamePrefixIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("CssClassNamePrefix"), m_CssClassNamePrefix));
        
    }
    if(m_CssStyleSheetFileNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("CssStyleSheetFileName"), m_CssStyleSheetFileName));
        
    }
    if(m_CssStyleSheetTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("CssStyleSheetType"), m_CssStyleSheetType));
        
    }
    if(m_DocumentSplitCriteriaIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("DocumentSplitCriteria"), m_DocumentSplitCriteria));
        
    }
    if(m_DocumentSplitHeadingLevelIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("DocumentSplitHeadingLevel"), m_DocumentSplitHeadingLevel));
    }
    if(m_EncodingIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("Encoding"), m_Encoding));
        
    }
    if(m_ExportDocumentPropertiesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ExportDocumentProperties"), m_ExportDocumentProperties));
    }
    if(m_ExportDropDownFormFieldAsTextIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ExportDropDownFormFieldAsText"), m_ExportDropDownFormFieldAsText));
    }
    if(m_ExportFontResourcesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ExportFontResources"), m_ExportFontResources));
    }
    if(m_ExportFontsAsBase64IsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ExportFontsAsBase64"), m_ExportFontsAsBase64));
    }
    if(m_ExportHeadersFootersModeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ExportHeadersFootersMode"), m_ExportHeadersFootersMode));
        
    }
    if(m_ExportImagesAsBase64IsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ExportImagesAsBase64"), m_ExportImagesAsBase64));
    }
    if(m_ExportLanguageInformationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ExportLanguageInformation"), m_ExportLanguageInformation));
    }
    if(m_ExportListLabelsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ExportListLabels"), m_ExportListLabels));
        
    }
    if(m_ExportOriginalUrlForLinkedImagesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ExportOriginalUrlForLinkedImages"), m_ExportOriginalUrlForLinkedImages));
    }
    if(m_ExportPageMarginsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ExportPageMargins"), m_ExportPageMargins));
    }
    if(m_ExportPageSetupIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ExportPageSetup"), m_ExportPageSetup));
    }
    if(m_ExportRelativeFontSizeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ExportRelativeFontSize"), m_ExportRelativeFontSize));
    }
    if(m_ExportRoundtripInformationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ExportRoundtripInformation"), m_ExportRoundtripInformation));
    }
    if(m_ExportTextBoxAsSvgIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ExportTextBoxAsSvg"), m_ExportTextBoxAsSvg));
    }
    if(m_ExportTextInputFormFieldAsTextIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ExportTextInputFormFieldAsText"), m_ExportTextInputFormFieldAsText));
    }
    if(m_ExportTocPageNumbersIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ExportTocPageNumbers"), m_ExportTocPageNumbers));
    }
    if(m_ExportXhtmlTransitionalIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ExportXhtmlTransitional"), m_ExportXhtmlTransitional));
    }
    if(m_FontResourcesSubsettingSizeThresholdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("FontResourcesSubsettingSizeThreshold"), m_FontResourcesSubsettingSizeThreshold));
    }
    if(m_FontsFolderIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("FontsFolder"), m_FontsFolder));
        
    }
    if(m_FontsFolderAliasIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("FontsFolderAlias"), m_FontsFolderAlias));
        
    }
    if(m_HtmlVersionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("HtmlVersion"), m_HtmlVersion));
        
    }
    if(m_ImageResolutionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ImageResolution"), m_ImageResolution));
    }
    if(m_ImagesFolderIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ImagesFolder"), m_ImagesFolder));
        
    }
    if(m_ImagesFolderAliasIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ImagesFolderAlias"), m_ImagesFolderAlias));
        
    }
    if(m_MetafileFormatIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("MetafileFormat"), m_MetafileFormat));
        
    }
    if(m_OfficeMathOutputModeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("OfficeMathOutputMode"), m_OfficeMathOutputMode));
        
    }
    if(m_PrettyFormatIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("PrettyFormat"), m_PrettyFormat));
    }
    if(m_ResourceFolderIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ResourceFolder"), m_ResourceFolder));
        
    }
    if(m_ResourceFolderAliasIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ResourceFolderAlias"), m_ResourceFolderAlias));
        
    }
    if(m_ScaleImageToShapeSizeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ScaleImageToShapeSize"), m_ScaleImageToShapeSize));
    }
    if(m_TableWidthOutputModeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("TableWidthOutputMode"), m_TableWidthOutputMode));
        
    }
}

void HtmlSaveOptionsData::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("ColorMode")))
    {
        setColorMode(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ColorMode"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("SaveFormat")))
    {
        setSaveFormat(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("SaveFormat"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("FileName")))
    {
        setFileName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("FileName"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("DmlRenderingMode")))
    {
        setDmlRenderingMode(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("DmlRenderingMode"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("DmlEffectsRenderingMode")))
    {
        setDmlEffectsRenderingMode(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("DmlEffectsRenderingMode"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ZipOutput")))
    {
        setZipOutput(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ZipOutput"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("UpdateLastSavedTimeProperty")))
    {
        setUpdateLastSavedTimeProperty(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("UpdateLastSavedTimeProperty"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("UpdateSdtContent")))
    {
        setUpdateSdtContent(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("UpdateSdtContent"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("UpdateFields")))
    {
        setUpdateFields(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("UpdateFields"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("AllowNegativeIndent")))
    {
        setAllowNegativeIndent(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("AllowNegativeIndent"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("CssClassNamePrefix")))
    {
        setCssClassNamePrefix(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("CssClassNamePrefix"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("CssStyleSheetFileName")))
    {
        setCssStyleSheetFileName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("CssStyleSheetFileName"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("CssStyleSheetType")))
    {
        setCssStyleSheetType(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("CssStyleSheetType"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("DocumentSplitCriteria")))
    {
        setDocumentSplitCriteria(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("DocumentSplitCriteria"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("DocumentSplitHeadingLevel")))
    {
        setDocumentSplitHeadingLevel(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("DocumentSplitHeadingLevel"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("Encoding")))
    {
        setEncoding(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("Encoding"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ExportDocumentProperties")))
    {
        setExportDocumentProperties(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ExportDocumentProperties"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ExportDropDownFormFieldAsText")))
    {
        setExportDropDownFormFieldAsText(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ExportDropDownFormFieldAsText"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ExportFontResources")))
    {
        setExportFontResources(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ExportFontResources"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ExportFontsAsBase64")))
    {
        setExportFontsAsBase64(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ExportFontsAsBase64"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ExportHeadersFootersMode")))
    {
        setExportHeadersFootersMode(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ExportHeadersFootersMode"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ExportImagesAsBase64")))
    {
        setExportImagesAsBase64(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ExportImagesAsBase64"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ExportLanguageInformation")))
    {
        setExportLanguageInformation(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ExportLanguageInformation"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ExportListLabels")))
    {
        setExportListLabels(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ExportListLabels"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ExportOriginalUrlForLinkedImages")))
    {
        setExportOriginalUrlForLinkedImages(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ExportOriginalUrlForLinkedImages"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ExportPageMargins")))
    {
        setExportPageMargins(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ExportPageMargins"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ExportPageSetup")))
    {
        setExportPageSetup(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ExportPageSetup"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ExportRelativeFontSize")))
    {
        setExportRelativeFontSize(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ExportRelativeFontSize"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ExportRoundtripInformation")))
    {
        setExportRoundtripInformation(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ExportRoundtripInformation"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ExportTextBoxAsSvg")))
    {
        setExportTextBoxAsSvg(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ExportTextBoxAsSvg"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ExportTextInputFormFieldAsText")))
    {
        setExportTextInputFormFieldAsText(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ExportTextInputFormFieldAsText"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ExportTocPageNumbers")))
    {
        setExportTocPageNumbers(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ExportTocPageNumbers"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ExportXhtmlTransitional")))
    {
        setExportXhtmlTransitional(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ExportXhtmlTransitional"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("FontResourcesSubsettingSizeThreshold")))
    {
        setFontResourcesSubsettingSizeThreshold(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("FontResourcesSubsettingSizeThreshold"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("FontsFolder")))
    {
        setFontsFolder(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("FontsFolder"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("FontsFolderAlias")))
    {
        setFontsFolderAlias(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("FontsFolderAlias"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("HtmlVersion")))
    {
        setHtmlVersion(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("HtmlVersion"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ImageResolution")))
    {
        setImageResolution(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ImageResolution"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ImagesFolder")))
    {
        setImagesFolder(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ImagesFolder"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ImagesFolderAlias")))
    {
        setImagesFolderAlias(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ImagesFolderAlias"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("MetafileFormat")))
    {
        setMetafileFormat(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("MetafileFormat"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("OfficeMathOutputMode")))
    {
        setOfficeMathOutputMode(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("OfficeMathOutputMode"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("PrettyFormat")))
    {
        setPrettyFormat(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("PrettyFormat"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ResourceFolder")))
    {
        setResourceFolder(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ResourceFolder"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ResourceFolderAlias")))
    {
        setResourceFolderAlias(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ResourceFolderAlias"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ScaleImageToShapeSize")))
    {
        setScaleImageToShapeSize(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ScaleImageToShapeSize"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("TableWidthOutputMode")))
    {
        setTableWidthOutputMode(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("TableWidthOutputMode"))));
    }
}

bool HtmlSaveOptionsData::isAllowNegativeIndent() const
{
    return m_AllowNegativeIndent;
}


void HtmlSaveOptionsData::setAllowNegativeIndent(bool value)
{
    m_AllowNegativeIndent = value;
    m_AllowNegativeIndentIsSet = true;
}
bool HtmlSaveOptionsData::allowNegativeIndentIsSet() const
{
    return m_AllowNegativeIndentIsSet;
}

void HtmlSaveOptionsData::unsetAllowNegativeIndent()
{
    m_AllowNegativeIndentIsSet = false;
}

utility::string_t HtmlSaveOptionsData::getCssClassNamePrefix() const
{
    return m_CssClassNamePrefix;
}


void HtmlSaveOptionsData::setCssClassNamePrefix(utility::string_t value)
{
    m_CssClassNamePrefix = value;
    m_CssClassNamePrefixIsSet = true;
}
bool HtmlSaveOptionsData::cssClassNamePrefixIsSet() const
{
    return m_CssClassNamePrefixIsSet;
}

void HtmlSaveOptionsData::unsetCssClassNamePrefix()
{
    m_CssClassNamePrefixIsSet = false;
}

utility::string_t HtmlSaveOptionsData::getCssStyleSheetFileName() const
{
    return m_CssStyleSheetFileName;
}


void HtmlSaveOptionsData::setCssStyleSheetFileName(utility::string_t value)
{
    m_CssStyleSheetFileName = value;
    m_CssStyleSheetFileNameIsSet = true;
}
bool HtmlSaveOptionsData::cssStyleSheetFileNameIsSet() const
{
    return m_CssStyleSheetFileNameIsSet;
}

void HtmlSaveOptionsData::unsetCssStyleSheetFileName()
{
    m_CssStyleSheetFileNameIsSet = false;
}

utility::string_t HtmlSaveOptionsData::getCssStyleSheetType() const
{
    return m_CssStyleSheetType;
}


void HtmlSaveOptionsData::setCssStyleSheetType(utility::string_t value)
{
    m_CssStyleSheetType = value;
    m_CssStyleSheetTypeIsSet = true;
}
bool HtmlSaveOptionsData::cssStyleSheetTypeIsSet() const
{
    return m_CssStyleSheetTypeIsSet;
}

void HtmlSaveOptionsData::unsetCssStyleSheetType()
{
    m_CssStyleSheetTypeIsSet = false;
}

utility::string_t HtmlSaveOptionsData::getDocumentSplitCriteria() const
{
    return m_DocumentSplitCriteria;
}


void HtmlSaveOptionsData::setDocumentSplitCriteria(utility::string_t value)
{
    m_DocumentSplitCriteria = value;
    m_DocumentSplitCriteriaIsSet = true;
}
bool HtmlSaveOptionsData::documentSplitCriteriaIsSet() const
{
    return m_DocumentSplitCriteriaIsSet;
}

void HtmlSaveOptionsData::unsetDocumentSplitCriteria()
{
    m_DocumentSplitCriteriaIsSet = false;
}

int32_t HtmlSaveOptionsData::getDocumentSplitHeadingLevel() const
{
    return m_DocumentSplitHeadingLevel;
}


void HtmlSaveOptionsData::setDocumentSplitHeadingLevel(int32_t value)
{
    m_DocumentSplitHeadingLevel = value;
    m_DocumentSplitHeadingLevelIsSet = true;
}
bool HtmlSaveOptionsData::documentSplitHeadingLevelIsSet() const
{
    return m_DocumentSplitHeadingLevelIsSet;
}

void HtmlSaveOptionsData::unsetDocumentSplitHeadingLevel()
{
    m_DocumentSplitHeadingLevelIsSet = false;
}

utility::string_t HtmlSaveOptionsData::getEncoding() const
{
    return m_Encoding;
}


void HtmlSaveOptionsData::setEncoding(utility::string_t value)
{
    m_Encoding = value;
    m_EncodingIsSet = true;
}
bool HtmlSaveOptionsData::encodingIsSet() const
{
    return m_EncodingIsSet;
}

void HtmlSaveOptionsData::unsetEncoding()
{
    m_EncodingIsSet = false;
}

bool HtmlSaveOptionsData::isExportDocumentProperties() const
{
    return m_ExportDocumentProperties;
}


void HtmlSaveOptionsData::setExportDocumentProperties(bool value)
{
    m_ExportDocumentProperties = value;
    m_ExportDocumentPropertiesIsSet = true;
}
bool HtmlSaveOptionsData::exportDocumentPropertiesIsSet() const
{
    return m_ExportDocumentPropertiesIsSet;
}

void HtmlSaveOptionsData::unsetExportDocumentProperties()
{
    m_ExportDocumentPropertiesIsSet = false;
}

bool HtmlSaveOptionsData::isExportDropDownFormFieldAsText() const
{
    return m_ExportDropDownFormFieldAsText;
}


void HtmlSaveOptionsData::setExportDropDownFormFieldAsText(bool value)
{
    m_ExportDropDownFormFieldAsText = value;
    m_ExportDropDownFormFieldAsTextIsSet = true;
}
bool HtmlSaveOptionsData::exportDropDownFormFieldAsTextIsSet() const
{
    return m_ExportDropDownFormFieldAsTextIsSet;
}

void HtmlSaveOptionsData::unsetExportDropDownFormFieldAsText()
{
    m_ExportDropDownFormFieldAsTextIsSet = false;
}

bool HtmlSaveOptionsData::isExportFontResources() const
{
    return m_ExportFontResources;
}


void HtmlSaveOptionsData::setExportFontResources(bool value)
{
    m_ExportFontResources = value;
    m_ExportFontResourcesIsSet = true;
}
bool HtmlSaveOptionsData::exportFontResourcesIsSet() const
{
    return m_ExportFontResourcesIsSet;
}

void HtmlSaveOptionsData::unsetExportFontResources()
{
    m_ExportFontResourcesIsSet = false;
}

bool HtmlSaveOptionsData::isExportFontsAsBase64() const
{
    return m_ExportFontsAsBase64;
}


void HtmlSaveOptionsData::setExportFontsAsBase64(bool value)
{
    m_ExportFontsAsBase64 = value;
    m_ExportFontsAsBase64IsSet = true;
}
bool HtmlSaveOptionsData::exportFontsAsBase64IsSet() const
{
    return m_ExportFontsAsBase64IsSet;
}

void HtmlSaveOptionsData::unsetExportFontsAsBase64()
{
    m_ExportFontsAsBase64IsSet = false;
}

utility::string_t HtmlSaveOptionsData::getExportHeadersFootersMode() const
{
    return m_ExportHeadersFootersMode;
}


void HtmlSaveOptionsData::setExportHeadersFootersMode(utility::string_t value)
{
    m_ExportHeadersFootersMode = value;
    m_ExportHeadersFootersModeIsSet = true;
}
bool HtmlSaveOptionsData::exportHeadersFootersModeIsSet() const
{
    return m_ExportHeadersFootersModeIsSet;
}

void HtmlSaveOptionsData::unsetExportHeadersFootersMode()
{
    m_ExportHeadersFootersModeIsSet = false;
}

bool HtmlSaveOptionsData::isExportImagesAsBase64() const
{
    return m_ExportImagesAsBase64;
}


void HtmlSaveOptionsData::setExportImagesAsBase64(bool value)
{
    m_ExportImagesAsBase64 = value;
    m_ExportImagesAsBase64IsSet = true;
}
bool HtmlSaveOptionsData::exportImagesAsBase64IsSet() const
{
    return m_ExportImagesAsBase64IsSet;
}

void HtmlSaveOptionsData::unsetExportImagesAsBase64()
{
    m_ExportImagesAsBase64IsSet = false;
}

bool HtmlSaveOptionsData::isExportLanguageInformation() const
{
    return m_ExportLanguageInformation;
}


void HtmlSaveOptionsData::setExportLanguageInformation(bool value)
{
    m_ExportLanguageInformation = value;
    m_ExportLanguageInformationIsSet = true;
}
bool HtmlSaveOptionsData::exportLanguageInformationIsSet() const
{
    return m_ExportLanguageInformationIsSet;
}

void HtmlSaveOptionsData::unsetExportLanguageInformation()
{
    m_ExportLanguageInformationIsSet = false;
}

utility::string_t HtmlSaveOptionsData::getExportListLabels() const
{
    return m_ExportListLabels;
}


void HtmlSaveOptionsData::setExportListLabels(utility::string_t value)
{
    m_ExportListLabels = value;
    m_ExportListLabelsIsSet = true;
}
bool HtmlSaveOptionsData::exportListLabelsIsSet() const
{
    return m_ExportListLabelsIsSet;
}

void HtmlSaveOptionsData::unsetExportListLabels()
{
    m_ExportListLabelsIsSet = false;
}

bool HtmlSaveOptionsData::isExportOriginalUrlForLinkedImages() const
{
    return m_ExportOriginalUrlForLinkedImages;
}


void HtmlSaveOptionsData::setExportOriginalUrlForLinkedImages(bool value)
{
    m_ExportOriginalUrlForLinkedImages = value;
    m_ExportOriginalUrlForLinkedImagesIsSet = true;
}
bool HtmlSaveOptionsData::exportOriginalUrlForLinkedImagesIsSet() const
{
    return m_ExportOriginalUrlForLinkedImagesIsSet;
}

void HtmlSaveOptionsData::unsetExportOriginalUrlForLinkedImages()
{
    m_ExportOriginalUrlForLinkedImagesIsSet = false;
}

bool HtmlSaveOptionsData::isExportPageMargins() const
{
    return m_ExportPageMargins;
}


void HtmlSaveOptionsData::setExportPageMargins(bool value)
{
    m_ExportPageMargins = value;
    m_ExportPageMarginsIsSet = true;
}
bool HtmlSaveOptionsData::exportPageMarginsIsSet() const
{
    return m_ExportPageMarginsIsSet;
}

void HtmlSaveOptionsData::unsetExportPageMargins()
{
    m_ExportPageMarginsIsSet = false;
}

bool HtmlSaveOptionsData::isExportPageSetup() const
{
    return m_ExportPageSetup;
}


void HtmlSaveOptionsData::setExportPageSetup(bool value)
{
    m_ExportPageSetup = value;
    m_ExportPageSetupIsSet = true;
}
bool HtmlSaveOptionsData::exportPageSetupIsSet() const
{
    return m_ExportPageSetupIsSet;
}

void HtmlSaveOptionsData::unsetExportPageSetup()
{
    m_ExportPageSetupIsSet = false;
}

bool HtmlSaveOptionsData::isExportRelativeFontSize() const
{
    return m_ExportRelativeFontSize;
}


void HtmlSaveOptionsData::setExportRelativeFontSize(bool value)
{
    m_ExportRelativeFontSize = value;
    m_ExportRelativeFontSizeIsSet = true;
}
bool HtmlSaveOptionsData::exportRelativeFontSizeIsSet() const
{
    return m_ExportRelativeFontSizeIsSet;
}

void HtmlSaveOptionsData::unsetExportRelativeFontSize()
{
    m_ExportRelativeFontSizeIsSet = false;
}

bool HtmlSaveOptionsData::isExportRoundtripInformation() const
{
    return m_ExportRoundtripInformation;
}


void HtmlSaveOptionsData::setExportRoundtripInformation(bool value)
{
    m_ExportRoundtripInformation = value;
    m_ExportRoundtripInformationIsSet = true;
}
bool HtmlSaveOptionsData::exportRoundtripInformationIsSet() const
{
    return m_ExportRoundtripInformationIsSet;
}

void HtmlSaveOptionsData::unsetExportRoundtripInformation()
{
    m_ExportRoundtripInformationIsSet = false;
}

bool HtmlSaveOptionsData::isExportTextBoxAsSvg() const
{
    return m_ExportTextBoxAsSvg;
}


void HtmlSaveOptionsData::setExportTextBoxAsSvg(bool value)
{
    m_ExportTextBoxAsSvg = value;
    m_ExportTextBoxAsSvgIsSet = true;
}
bool HtmlSaveOptionsData::exportTextBoxAsSvgIsSet() const
{
    return m_ExportTextBoxAsSvgIsSet;
}

void HtmlSaveOptionsData::unsetExportTextBoxAsSvg()
{
    m_ExportTextBoxAsSvgIsSet = false;
}

bool HtmlSaveOptionsData::isExportTextInputFormFieldAsText() const
{
    return m_ExportTextInputFormFieldAsText;
}


void HtmlSaveOptionsData::setExportTextInputFormFieldAsText(bool value)
{
    m_ExportTextInputFormFieldAsText = value;
    m_ExportTextInputFormFieldAsTextIsSet = true;
}
bool HtmlSaveOptionsData::exportTextInputFormFieldAsTextIsSet() const
{
    return m_ExportTextInputFormFieldAsTextIsSet;
}

void HtmlSaveOptionsData::unsetExportTextInputFormFieldAsText()
{
    m_ExportTextInputFormFieldAsTextIsSet = false;
}

bool HtmlSaveOptionsData::isExportTocPageNumbers() const
{
    return m_ExportTocPageNumbers;
}


void HtmlSaveOptionsData::setExportTocPageNumbers(bool value)
{
    m_ExportTocPageNumbers = value;
    m_ExportTocPageNumbersIsSet = true;
}
bool HtmlSaveOptionsData::exportTocPageNumbersIsSet() const
{
    return m_ExportTocPageNumbersIsSet;
}

void HtmlSaveOptionsData::unsetExportTocPageNumbers()
{
    m_ExportTocPageNumbersIsSet = false;
}

bool HtmlSaveOptionsData::isExportXhtmlTransitional() const
{
    return m_ExportXhtmlTransitional;
}


void HtmlSaveOptionsData::setExportXhtmlTransitional(bool value)
{
    m_ExportXhtmlTransitional = value;
    m_ExportXhtmlTransitionalIsSet = true;
}
bool HtmlSaveOptionsData::exportXhtmlTransitionalIsSet() const
{
    return m_ExportXhtmlTransitionalIsSet;
}

void HtmlSaveOptionsData::unsetExportXhtmlTransitional()
{
    m_ExportXhtmlTransitionalIsSet = false;
}

int32_t HtmlSaveOptionsData::getFontResourcesSubsettingSizeThreshold() const
{
    return m_FontResourcesSubsettingSizeThreshold;
}


void HtmlSaveOptionsData::setFontResourcesSubsettingSizeThreshold(int32_t value)
{
    m_FontResourcesSubsettingSizeThreshold = value;
    m_FontResourcesSubsettingSizeThresholdIsSet = true;
}
bool HtmlSaveOptionsData::fontResourcesSubsettingSizeThresholdIsSet() const
{
    return m_FontResourcesSubsettingSizeThresholdIsSet;
}

void HtmlSaveOptionsData::unsetFontResourcesSubsettingSizeThreshold()
{
    m_FontResourcesSubsettingSizeThresholdIsSet = false;
}

utility::string_t HtmlSaveOptionsData::getFontsFolder() const
{
    return m_FontsFolder;
}


void HtmlSaveOptionsData::setFontsFolder(utility::string_t value)
{
    m_FontsFolder = value;
    m_FontsFolderIsSet = true;
}
bool HtmlSaveOptionsData::fontsFolderIsSet() const
{
    return m_FontsFolderIsSet;
}

void HtmlSaveOptionsData::unsetFontsFolder()
{
    m_FontsFolderIsSet = false;
}

utility::string_t HtmlSaveOptionsData::getFontsFolderAlias() const
{
    return m_FontsFolderAlias;
}


void HtmlSaveOptionsData::setFontsFolderAlias(utility::string_t value)
{
    m_FontsFolderAlias = value;
    m_FontsFolderAliasIsSet = true;
}
bool HtmlSaveOptionsData::fontsFolderAliasIsSet() const
{
    return m_FontsFolderAliasIsSet;
}

void HtmlSaveOptionsData::unsetFontsFolderAlias()
{
    m_FontsFolderAliasIsSet = false;
}

utility::string_t HtmlSaveOptionsData::getHtmlVersion() const
{
    return m_HtmlVersion;
}


void HtmlSaveOptionsData::setHtmlVersion(utility::string_t value)
{
    m_HtmlVersion = value;
    m_HtmlVersionIsSet = true;
}
bool HtmlSaveOptionsData::htmlVersionIsSet() const
{
    return m_HtmlVersionIsSet;
}

void HtmlSaveOptionsData::unsetHtmlVersion()
{
    m_HtmlVersionIsSet = false;
}

int32_t HtmlSaveOptionsData::getImageResolution() const
{
    return m_ImageResolution;
}


void HtmlSaveOptionsData::setImageResolution(int32_t value)
{
    m_ImageResolution = value;
    m_ImageResolutionIsSet = true;
}
bool HtmlSaveOptionsData::imageResolutionIsSet() const
{
    return m_ImageResolutionIsSet;
}

void HtmlSaveOptionsData::unsetImageResolution()
{
    m_ImageResolutionIsSet = false;
}

utility::string_t HtmlSaveOptionsData::getImagesFolder() const
{
    return m_ImagesFolder;
}


void HtmlSaveOptionsData::setImagesFolder(utility::string_t value)
{
    m_ImagesFolder = value;
    m_ImagesFolderIsSet = true;
}
bool HtmlSaveOptionsData::imagesFolderIsSet() const
{
    return m_ImagesFolderIsSet;
}

void HtmlSaveOptionsData::unsetImagesFolder()
{
    m_ImagesFolderIsSet = false;
}

utility::string_t HtmlSaveOptionsData::getImagesFolderAlias() const
{
    return m_ImagesFolderAlias;
}


void HtmlSaveOptionsData::setImagesFolderAlias(utility::string_t value)
{
    m_ImagesFolderAlias = value;
    m_ImagesFolderAliasIsSet = true;
}
bool HtmlSaveOptionsData::imagesFolderAliasIsSet() const
{
    return m_ImagesFolderAliasIsSet;
}

void HtmlSaveOptionsData::unsetImagesFolderAlias()
{
    m_ImagesFolderAliasIsSet = false;
}

utility::string_t HtmlSaveOptionsData::getMetafileFormat() const
{
    return m_MetafileFormat;
}


void HtmlSaveOptionsData::setMetafileFormat(utility::string_t value)
{
    m_MetafileFormat = value;
    m_MetafileFormatIsSet = true;
}
bool HtmlSaveOptionsData::metafileFormatIsSet() const
{
    return m_MetafileFormatIsSet;
}

void HtmlSaveOptionsData::unsetMetafileFormat()
{
    m_MetafileFormatIsSet = false;
}

utility::string_t HtmlSaveOptionsData::getOfficeMathOutputMode() const
{
    return m_OfficeMathOutputMode;
}


void HtmlSaveOptionsData::setOfficeMathOutputMode(utility::string_t value)
{
    m_OfficeMathOutputMode = value;
    m_OfficeMathOutputModeIsSet = true;
}
bool HtmlSaveOptionsData::officeMathOutputModeIsSet() const
{
    return m_OfficeMathOutputModeIsSet;
}

void HtmlSaveOptionsData::unsetOfficeMathOutputMode()
{
    m_OfficeMathOutputModeIsSet = false;
}

bool HtmlSaveOptionsData::isPrettyFormat() const
{
    return m_PrettyFormat;
}


void HtmlSaveOptionsData::setPrettyFormat(bool value)
{
    m_PrettyFormat = value;
    m_PrettyFormatIsSet = true;
}
bool HtmlSaveOptionsData::prettyFormatIsSet() const
{
    return m_PrettyFormatIsSet;
}

void HtmlSaveOptionsData::unsetPrettyFormat()
{
    m_PrettyFormatIsSet = false;
}

utility::string_t HtmlSaveOptionsData::getResourceFolder() const
{
    return m_ResourceFolder;
}


void HtmlSaveOptionsData::setResourceFolder(utility::string_t value)
{
    m_ResourceFolder = value;
    m_ResourceFolderIsSet = true;
}
bool HtmlSaveOptionsData::resourceFolderIsSet() const
{
    return m_ResourceFolderIsSet;
}

void HtmlSaveOptionsData::unsetResourceFolder()
{
    m_ResourceFolderIsSet = false;
}

utility::string_t HtmlSaveOptionsData::getResourceFolderAlias() const
{
    return m_ResourceFolderAlias;
}


void HtmlSaveOptionsData::setResourceFolderAlias(utility::string_t value)
{
    m_ResourceFolderAlias = value;
    m_ResourceFolderAliasIsSet = true;
}
bool HtmlSaveOptionsData::resourceFolderAliasIsSet() const
{
    return m_ResourceFolderAliasIsSet;
}

void HtmlSaveOptionsData::unsetResourceFolderAlias()
{
    m_ResourceFolderAliasIsSet = false;
}

bool HtmlSaveOptionsData::isScaleImageToShapeSize() const
{
    return m_ScaleImageToShapeSize;
}


void HtmlSaveOptionsData::setScaleImageToShapeSize(bool value)
{
    m_ScaleImageToShapeSize = value;
    m_ScaleImageToShapeSizeIsSet = true;
}
bool HtmlSaveOptionsData::scaleImageToShapeSizeIsSet() const
{
    return m_ScaleImageToShapeSizeIsSet;
}

void HtmlSaveOptionsData::unsetScaleImageToShapeSize()
{
    m_ScaleImageToShapeSizeIsSet = false;
}

utility::string_t HtmlSaveOptionsData::getTableWidthOutputMode() const
{
    return m_TableWidthOutputMode;
}


void HtmlSaveOptionsData::setTableWidthOutputMode(utility::string_t value)
{
    m_TableWidthOutputMode = value;
    m_TableWidthOutputModeIsSet = true;
}
bool HtmlSaveOptionsData::tableWidthOutputModeIsSet() const
{
    return m_TableWidthOutputModeIsSet;
}

void HtmlSaveOptionsData::unsetTableWidthOutputMode()
{
    m_TableWidthOutputModeIsSet = false;
}

}
}
}
}

