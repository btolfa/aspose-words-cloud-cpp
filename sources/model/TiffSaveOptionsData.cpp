/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="TiffSaveOptionsData.cpp">
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


#include "TiffSaveOptionsData.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

TiffSaveOptionsData::TiffSaveOptionsData()
{
    m_TiffBinarizationMethod = utility::conversions::to_string_t("");
    m_TiffBinarizationMethodIsSet = false;
    m_TiffCompression = utility::conversions::to_string_t("");
    m_TiffCompressionIsSet = false;
}

TiffSaveOptionsData::~TiffSaveOptionsData()
{
}

void TiffSaveOptionsData::validate()
{
    // TODO: implement validation
}

web::json::value TiffSaveOptionsData::toJson() const
{
    web::json::value val = this->ImageSaveOptionsData::toJson();

    if(m_TiffBinarizationMethodIsSet)
    {
        val[utility::conversions::to_string_t("TiffBinarizationMethod")] = ModelBase::toJson(m_TiffBinarizationMethod);
    }
    if(m_TiffCompressionIsSet)
    {
        val[utility::conversions::to_string_t("TiffCompression")] = ModelBase::toJson(m_TiffCompression);
    }

    return val;
}

void TiffSaveOptionsData::fromJson(web::json::value& val)
{
    this->ImageSaveOptionsData::fromJson(val);

    if(val.has_field(utility::conversions::to_string_t("TiffBinarizationMethod")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("TiffBinarizationMethod")];
        if(!fieldValue.is_null())
        {
            setTiffBinarizationMethod(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("TiffCompression")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("TiffCompression")];
        if(!fieldValue.is_null())
        {
            setTiffCompression(ModelBase::stringFromJson(fieldValue));
        }
    }
}

void TiffSaveOptionsData::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_GraphicsQualityOptionsIsSet)
    {
        if (m_GraphicsQualityOptions.get())
        {
            m_GraphicsQualityOptions->toMultipart(multipart, utility::conversions::to_string_t("GraphicsQualityOptions."));
        }
        
    }
    if(m_HorizontalResolutionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("HorizontalResolution"), m_HorizontalResolution));
    }
    if(m_ImageBrightnessIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ImageBrightness"), m_ImageBrightness));
    }
    if(m_ImageColorModeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ImageColorMode"), m_ImageColorMode));
        
    }
    if(m_ImageContrastIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ImageContrast"), m_ImageContrast));
    }
    if(m_PaperColorIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("PaperColor"), m_PaperColor));
        
    }
    if(m_PixelFormatIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("PixelFormat"), m_PixelFormat));
        
    }
    if(m_ResolutionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("Resolution"), m_Resolution));
    }
    if(m_ScaleIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("Scale"), m_Scale));
    }
    if(m_UseAntiAliasingIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("UseAntiAliasing"), m_UseAntiAliasing));
    }
    if(m_UseGdiEmfRendererIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("UseGdiEmfRenderer"), m_UseGdiEmfRenderer));
    }
    if(m_UseHighQualityRenderingIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("UseHighQualityRendering"), m_UseHighQualityRendering));
    }
    if(m_VerticalResolutionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("VerticalResolution"), m_VerticalResolution));
    }
    if(m_TiffBinarizationMethodIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("TiffBinarizationMethod"), m_TiffBinarizationMethod));
        
    }
    if(m_TiffCompressionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("TiffCompression"), m_TiffCompression));
        
    }
}

void TiffSaveOptionsData::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("GraphicsQualityOptions")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("GraphicsQualityOptions")))
        {
            std::shared_ptr<GraphicsQualityOptionsData> newItem(new GraphicsQualityOptionsData());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("GraphicsQualityOptions."));
            setGraphicsQualityOptions( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("HorizontalResolution")))
    {
        setHorizontalResolution(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("HorizontalResolution"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ImageBrightness")))
    {
        setImageBrightness(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ImageBrightness"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ImageColorMode")))
    {
        setImageColorMode(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ImageColorMode"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ImageContrast")))
    {
        setImageContrast(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ImageContrast"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("PaperColor")))
    {
        setPaperColor(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("PaperColor"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("PixelFormat")))
    {
        setPixelFormat(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("PixelFormat"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("Resolution")))
    {
        setResolution(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("Resolution"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("Scale")))
    {
        setScale(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("Scale"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("UseAntiAliasing")))
    {
        setUseAntiAliasing(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("UseAntiAliasing"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("UseGdiEmfRenderer")))
    {
        setUseGdiEmfRenderer(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("UseGdiEmfRenderer"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("UseHighQualityRendering")))
    {
        setUseHighQualityRendering(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("UseHighQualityRendering"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("VerticalResolution")))
    {
        setVerticalResolution(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("VerticalResolution"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("TiffBinarizationMethod")))
    {
        setTiffBinarizationMethod(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("TiffBinarizationMethod"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("TiffCompression")))
    {
        setTiffCompression(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("TiffCompression"))));
    }
}

utility::string_t TiffSaveOptionsData::getTiffBinarizationMethod() const
{
    return m_TiffBinarizationMethod;
}


void TiffSaveOptionsData::setTiffBinarizationMethod(utility::string_t value)
{
    m_TiffBinarizationMethod = value;
    m_TiffBinarizationMethodIsSet = true;
}
bool TiffSaveOptionsData::tiffBinarizationMethodIsSet() const
{
    return m_TiffBinarizationMethodIsSet;
}

void TiffSaveOptionsData::unsetTiffBinarizationMethod()
{
    m_TiffBinarizationMethodIsSet = false;
}

utility::string_t TiffSaveOptionsData::getTiffCompression() const
{
    return m_TiffCompression;
}


void TiffSaveOptionsData::setTiffCompression(utility::string_t value)
{
    m_TiffCompression = value;
    m_TiffCompressionIsSet = true;
}
bool TiffSaveOptionsData::tiffCompressionIsSet() const
{
    return m_TiffCompressionIsSet;
}

void TiffSaveOptionsData::unsetTiffCompression()
{
    m_TiffCompressionIsSet = false;
}

}
}
}
}

