/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="SvgSaveOptionsData.cpp">
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


#include "SvgSaveOptionsData.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

SvgSaveOptionsData::SvgSaveOptionsData()
{
    m_ExportEmbeddedImages = false;
    m_ExportEmbeddedImagesIsSet = false;
    m_FitToViewPort = false;
    m_FitToViewPortIsSet = false;
    m_ResourcesFolder = utility::conversions::to_string_t("");
    m_ResourcesFolderIsSet = false;
    m_ResourcesFolderAlias = utility::conversions::to_string_t("");
    m_ResourcesFolderAliasIsSet = false;
    m_ShowPageBorder = false;
    m_ShowPageBorderIsSet = false;
    m_TextOutputMode = utility::conversions::to_string_t("");
    m_TextOutputModeIsSet = false;
}

SvgSaveOptionsData::~SvgSaveOptionsData()
{
}

void SvgSaveOptionsData::validate()
{
    // TODO: implement validation
}

web::json::value SvgSaveOptionsData::toJson() const
{
    web::json::value val = this->FixedPageSaveOptionsData::toJson();

    if(m_ExportEmbeddedImagesIsSet)
    {
        val[utility::conversions::to_string_t("ExportEmbeddedImages")] = ModelBase::toJson(m_ExportEmbeddedImages);
    }
    if(m_FitToViewPortIsSet)
    {
        val[utility::conversions::to_string_t("FitToViewPort")] = ModelBase::toJson(m_FitToViewPort);
    }
    if(m_ResourcesFolderIsSet)
    {
        val[utility::conversions::to_string_t("ResourcesFolder")] = ModelBase::toJson(m_ResourcesFolder);
    }
    if(m_ResourcesFolderAliasIsSet)
    {
        val[utility::conversions::to_string_t("ResourcesFolderAlias")] = ModelBase::toJson(m_ResourcesFolderAlias);
    }
    if(m_ShowPageBorderIsSet)
    {
        val[utility::conversions::to_string_t("ShowPageBorder")] = ModelBase::toJson(m_ShowPageBorder);
    }
    if(m_TextOutputModeIsSet)
    {
        val[utility::conversions::to_string_t("TextOutputMode")] = ModelBase::toJson(m_TextOutputMode);
    }

    return val;
}

void SvgSaveOptionsData::fromJson(web::json::value& val)
{
    this->FixedPageSaveOptionsData::fromJson(val);

    if(val.has_field(utility::conversions::to_string_t("ExportEmbeddedImages")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("ExportEmbeddedImages")];
        if(!fieldValue.is_null())
        {
            setExportEmbeddedImages(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("FitToViewPort")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("FitToViewPort")];
        if(!fieldValue.is_null())
        {
            setFitToViewPort(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ResourcesFolder")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("ResourcesFolder")];
        if(!fieldValue.is_null())
        {
            setResourcesFolder(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ResourcesFolderAlias")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("ResourcesFolderAlias")];
        if(!fieldValue.is_null())
        {
            setResourcesFolderAlias(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ShowPageBorder")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("ShowPageBorder")];
        if(!fieldValue.is_null())
        {
            setShowPageBorder(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("TextOutputMode")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("TextOutputMode")];
        if(!fieldValue.is_null())
        {
            setTextOutputMode(ModelBase::stringFromJson(fieldValue));
        }
    }
}

void SvgSaveOptionsData::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_JpegQualityIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("JpegQuality"), m_JpegQuality));
    }
    if(m_MetafileRenderingOptionsIsSet)
    {
        if (m_MetafileRenderingOptions.get())
        {
            m_MetafileRenderingOptions->toMultipart(multipart, utility::conversions::to_string_t("MetafileRenderingOptions."));
        }
        
    }
    if(m_NumeralFormatIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("NumeralFormat"), m_NumeralFormat));
        
    }
    if(m_OptimizeOutputIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("OptimizeOutput"), m_OptimizeOutput));
    }
    if(m_PageCountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("PageCount"), m_PageCount));
    }
    if(m_PageIndexIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("PageIndex"), m_PageIndex));
    }
    if(m_ExportEmbeddedImagesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ExportEmbeddedImages"), m_ExportEmbeddedImages));
    }
    if(m_FitToViewPortIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("FitToViewPort"), m_FitToViewPort));
    }
    if(m_ResourcesFolderIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ResourcesFolder"), m_ResourcesFolder));
        
    }
    if(m_ResourcesFolderAliasIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ResourcesFolderAlias"), m_ResourcesFolderAlias));
        
    }
    if(m_ShowPageBorderIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ShowPageBorder"), m_ShowPageBorder));
    }
    if(m_TextOutputModeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("TextOutputMode"), m_TextOutputMode));
        
    }
}

void SvgSaveOptionsData::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("JpegQuality")))
    {
        setJpegQuality(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("JpegQuality"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("MetafileRenderingOptions")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("MetafileRenderingOptions")))
        {
            std::shared_ptr<MetafileRenderingOptionsData> newItem(new MetafileRenderingOptionsData());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("MetafileRenderingOptions."));
            setMetafileRenderingOptions( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("NumeralFormat")))
    {
        setNumeralFormat(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("NumeralFormat"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("OptimizeOutput")))
    {
        setOptimizeOutput(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("OptimizeOutput"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("PageCount")))
    {
        setPageCount(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("PageCount"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("PageIndex")))
    {
        setPageIndex(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("PageIndex"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ExportEmbeddedImages")))
    {
        setExportEmbeddedImages(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ExportEmbeddedImages"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("FitToViewPort")))
    {
        setFitToViewPort(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("FitToViewPort"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ResourcesFolder")))
    {
        setResourcesFolder(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ResourcesFolder"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ResourcesFolderAlias")))
    {
        setResourcesFolderAlias(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ResourcesFolderAlias"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ShowPageBorder")))
    {
        setShowPageBorder(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ShowPageBorder"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("TextOutputMode")))
    {
        setTextOutputMode(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("TextOutputMode"))));
    }
}

bool SvgSaveOptionsData::isExportEmbeddedImages() const
{
    return m_ExportEmbeddedImages;
}


void SvgSaveOptionsData::setExportEmbeddedImages(bool value)
{
    m_ExportEmbeddedImages = value;
    m_ExportEmbeddedImagesIsSet = true;
}
bool SvgSaveOptionsData::exportEmbeddedImagesIsSet() const
{
    return m_ExportEmbeddedImagesIsSet;
}

void SvgSaveOptionsData::unsetExportEmbeddedImages()
{
    m_ExportEmbeddedImagesIsSet = false;
}

bool SvgSaveOptionsData::isFitToViewPort() const
{
    return m_FitToViewPort;
}


void SvgSaveOptionsData::setFitToViewPort(bool value)
{
    m_FitToViewPort = value;
    m_FitToViewPortIsSet = true;
}
bool SvgSaveOptionsData::fitToViewPortIsSet() const
{
    return m_FitToViewPortIsSet;
}

void SvgSaveOptionsData::unsetFitToViewPort()
{
    m_FitToViewPortIsSet = false;
}

utility::string_t SvgSaveOptionsData::getResourcesFolder() const
{
    return m_ResourcesFolder;
}


void SvgSaveOptionsData::setResourcesFolder(utility::string_t value)
{
    m_ResourcesFolder = value;
    m_ResourcesFolderIsSet = true;
}
bool SvgSaveOptionsData::resourcesFolderIsSet() const
{
    return m_ResourcesFolderIsSet;
}

void SvgSaveOptionsData::unsetResourcesFolder()
{
    m_ResourcesFolderIsSet = false;
}

utility::string_t SvgSaveOptionsData::getResourcesFolderAlias() const
{
    return m_ResourcesFolderAlias;
}


void SvgSaveOptionsData::setResourcesFolderAlias(utility::string_t value)
{
    m_ResourcesFolderAlias = value;
    m_ResourcesFolderAliasIsSet = true;
}
bool SvgSaveOptionsData::resourcesFolderAliasIsSet() const
{
    return m_ResourcesFolderAliasIsSet;
}

void SvgSaveOptionsData::unsetResourcesFolderAlias()
{
    m_ResourcesFolderAliasIsSet = false;
}

bool SvgSaveOptionsData::isShowPageBorder() const
{
    return m_ShowPageBorder;
}


void SvgSaveOptionsData::setShowPageBorder(bool value)
{
    m_ShowPageBorder = value;
    m_ShowPageBorderIsSet = true;
}
bool SvgSaveOptionsData::showPageBorderIsSet() const
{
    return m_ShowPageBorderIsSet;
}

void SvgSaveOptionsData::unsetShowPageBorder()
{
    m_ShowPageBorderIsSet = false;
}

utility::string_t SvgSaveOptionsData::getTextOutputMode() const
{
    return m_TextOutputMode;
}


void SvgSaveOptionsData::setTextOutputMode(utility::string_t value)
{
    m_TextOutputMode = value;
    m_TextOutputModeIsSet = true;
}
bool SvgSaveOptionsData::textOutputModeIsSet() const
{
    return m_TextOutputModeIsSet;
}

void SvgSaveOptionsData::unsetTextOutputMode()
{
    m_TextOutputModeIsSet = false;
}

}
}
}
}

