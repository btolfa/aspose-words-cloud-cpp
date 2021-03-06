/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="MhtmlSaveOptionsData.cpp">
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


#include "MhtmlSaveOptionsData.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

MhtmlSaveOptionsData::MhtmlSaveOptionsData()
{
    m_ExportCidUrlsForMhtmlResources = false;
    m_ExportCidUrlsForMhtmlResourcesIsSet = false;
}

MhtmlSaveOptionsData::~MhtmlSaveOptionsData()
{
}

void MhtmlSaveOptionsData::validate()
{
    // TODO: implement validation
}

web::json::value MhtmlSaveOptionsData::toJson() const
{
    web::json::value val = this->HtmlSaveOptionsData::toJson();

    if(m_ExportCidUrlsForMhtmlResourcesIsSet)
    {
        val[utility::conversions::to_string_t("ExportCidUrlsForMhtmlResources")] = ModelBase::toJson(m_ExportCidUrlsForMhtmlResources);
    }

    return val;
}

void MhtmlSaveOptionsData::fromJson(web::json::value& val)
{
    this->HtmlSaveOptionsData::fromJson(val);

    if(val.has_field(utility::conversions::to_string_t("ExportCidUrlsForMhtmlResources")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("ExportCidUrlsForMhtmlResources")];
        if(!fieldValue.is_null())
        {
            setExportCidUrlsForMhtmlResources(ModelBase::boolFromJson(fieldValue));
        }
    }
}

void MhtmlSaveOptionsData::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_ExportCidUrlsForMhtmlResourcesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ExportCidUrlsForMhtmlResources"), m_ExportCidUrlsForMhtmlResources));
    }
}

void MhtmlSaveOptionsData::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("ExportCidUrlsForMhtmlResources")))
    {
        setExportCidUrlsForMhtmlResources(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ExportCidUrlsForMhtmlResources"))));
    }
}

bool MhtmlSaveOptionsData::isExportCidUrlsForMhtmlResources() const
{
    return m_ExportCidUrlsForMhtmlResources;
}


void MhtmlSaveOptionsData::setExportCidUrlsForMhtmlResources(bool value)
{
    m_ExportCidUrlsForMhtmlResources = value;
    m_ExportCidUrlsForMhtmlResourcesIsSet = true;
}
bool MhtmlSaveOptionsData::exportCidUrlsForMhtmlResourcesIsSet() const
{
    return m_ExportCidUrlsForMhtmlResourcesIsSet;
}

void MhtmlSaveOptionsData::unsetExportCidUrlsForMhtmlResources()
{
    m_ExportCidUrlsForMhtmlResourcesIsSet = false;
}

}
}
}
}

