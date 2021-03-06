/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="ImageSaveOptionsData.cpp">
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


#include "ImageSaveOptionsData.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

ImageSaveOptionsData::ImageSaveOptionsData()
{
    m_GraphicsQualityOptionsIsSet = false;
    m_HorizontalResolution = 0.0;
    m_HorizontalResolutionIsSet = false;
    m_ImageBrightness = 0.0;
    m_ImageBrightnessIsSet = false;
    m_ImageColorMode = utility::conversions::to_string_t("");
    m_ImageColorModeIsSet = false;
    m_ImageContrast = 0.0;
    m_ImageContrastIsSet = false;
    m_PaperColor = utility::conversions::to_string_t("");
    m_PaperColorIsSet = false;
    m_PixelFormat = utility::conversions::to_string_t("");
    m_PixelFormatIsSet = false;
    m_Resolution = 0.0;
    m_ResolutionIsSet = false;
    m_Scale = 0.0;
    m_ScaleIsSet = false;
    m_UseAntiAliasing = false;
    m_UseAntiAliasingIsSet = false;
    m_UseGdiEmfRenderer = false;
    m_UseGdiEmfRendererIsSet = false;
    m_UseHighQualityRendering = false;
    m_UseHighQualityRenderingIsSet = false;
    m_VerticalResolution = 0.0;
    m_VerticalResolutionIsSet = false;
}

ImageSaveOptionsData::~ImageSaveOptionsData()
{
}

void ImageSaveOptionsData::validate()
{
    // TODO: implement validation
}

web::json::value ImageSaveOptionsData::toJson() const
{
    web::json::value val = this->FixedPageSaveOptionsData::toJson();

    if(m_GraphicsQualityOptionsIsSet)
    {
        val[utility::conversions::to_string_t("GraphicsQualityOptions")] = ModelBase::toJson(m_GraphicsQualityOptions);
    }
    if(m_HorizontalResolutionIsSet)
    {
        val[utility::conversions::to_string_t("HorizontalResolution")] = ModelBase::toJson(m_HorizontalResolution);
    }
    if(m_ImageBrightnessIsSet)
    {
        val[utility::conversions::to_string_t("ImageBrightness")] = ModelBase::toJson(m_ImageBrightness);
    }
    if(m_ImageColorModeIsSet)
    {
        val[utility::conversions::to_string_t("ImageColorMode")] = ModelBase::toJson(m_ImageColorMode);
    }
    if(m_ImageContrastIsSet)
    {
        val[utility::conversions::to_string_t("ImageContrast")] = ModelBase::toJson(m_ImageContrast);
    }
    if(m_PaperColorIsSet)
    {
        val[utility::conversions::to_string_t("PaperColor")] = ModelBase::toJson(m_PaperColor);
    }
    if(m_PixelFormatIsSet)
    {
        val[utility::conversions::to_string_t("PixelFormat")] = ModelBase::toJson(m_PixelFormat);
    }
    if(m_ResolutionIsSet)
    {
        val[utility::conversions::to_string_t("Resolution")] = ModelBase::toJson(m_Resolution);
    }
    if(m_ScaleIsSet)
    {
        val[utility::conversions::to_string_t("Scale")] = ModelBase::toJson(m_Scale);
    }
    if(m_UseAntiAliasingIsSet)
    {
        val[utility::conversions::to_string_t("UseAntiAliasing")] = ModelBase::toJson(m_UseAntiAliasing);
    }
    if(m_UseGdiEmfRendererIsSet)
    {
        val[utility::conversions::to_string_t("UseGdiEmfRenderer")] = ModelBase::toJson(m_UseGdiEmfRenderer);
    }
    if(m_UseHighQualityRenderingIsSet)
    {
        val[utility::conversions::to_string_t("UseHighQualityRendering")] = ModelBase::toJson(m_UseHighQualityRendering);
    }
    if(m_VerticalResolutionIsSet)
    {
        val[utility::conversions::to_string_t("VerticalResolution")] = ModelBase::toJson(m_VerticalResolution);
    }

    return val;
}

void ImageSaveOptionsData::fromJson(web::json::value& val)
{
    this->FixedPageSaveOptionsData::fromJson(val);

    if(val.has_field(utility::conversions::to_string_t("GraphicsQualityOptions")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("GraphicsQualityOptions")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<GraphicsQualityOptionsData> newItem(new GraphicsQualityOptionsData());
            newItem->fromJson(fieldValue);
            setGraphicsQualityOptions( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("HorizontalResolution")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("HorizontalResolution")];
        if(!fieldValue.is_null())
        {
            setHorizontalResolution(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ImageBrightness")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("ImageBrightness")];
        if(!fieldValue.is_null())
        {
            setImageBrightness(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ImageColorMode")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("ImageColorMode")];
        if(!fieldValue.is_null())
        {
            setImageColorMode(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ImageContrast")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("ImageContrast")];
        if(!fieldValue.is_null())
        {
            setImageContrast(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("PaperColor")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("PaperColor")];
        if(!fieldValue.is_null())
        {
            setPaperColor(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("PixelFormat")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("PixelFormat")];
        if(!fieldValue.is_null())
        {
            setPixelFormat(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Resolution")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("Resolution")];
        if(!fieldValue.is_null())
        {
            setResolution(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Scale")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("Scale")];
        if(!fieldValue.is_null())
        {
            setScale(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("UseAntiAliasing")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("UseAntiAliasing")];
        if(!fieldValue.is_null())
        {
            setUseAntiAliasing(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("UseGdiEmfRenderer")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("UseGdiEmfRenderer")];
        if(!fieldValue.is_null())
        {
            setUseGdiEmfRenderer(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("UseHighQualityRendering")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("UseHighQualityRendering")];
        if(!fieldValue.is_null())
        {
            setUseHighQualityRendering(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("VerticalResolution")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("VerticalResolution")];
        if(!fieldValue.is_null())
        {
            setVerticalResolution(ModelBase::doubleFromJson(fieldValue));
        }
    }
}

void ImageSaveOptionsData::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
}

void ImageSaveOptionsData::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
}

std::shared_ptr<GraphicsQualityOptionsData> ImageSaveOptionsData::getGraphicsQualityOptions() const
{
    return m_GraphicsQualityOptions;
}


void ImageSaveOptionsData::setGraphicsQualityOptions(std::shared_ptr<GraphicsQualityOptionsData> value)
{
    m_GraphicsQualityOptions = value;
    m_GraphicsQualityOptionsIsSet = true;
}
bool ImageSaveOptionsData::graphicsQualityOptionsIsSet() const
{
    return m_GraphicsQualityOptionsIsSet;
}

void ImageSaveOptionsData::unsetGraphicsQualityOptions()
{
    m_GraphicsQualityOptionsIsSet = false;
}

double ImageSaveOptionsData::getHorizontalResolution() const
{
    return m_HorizontalResolution;
}


void ImageSaveOptionsData::setHorizontalResolution(double value)
{
    m_HorizontalResolution = value;
    m_HorizontalResolutionIsSet = true;
}
bool ImageSaveOptionsData::horizontalResolutionIsSet() const
{
    return m_HorizontalResolutionIsSet;
}

void ImageSaveOptionsData::unsetHorizontalResolution()
{
    m_HorizontalResolutionIsSet = false;
}

double ImageSaveOptionsData::getImageBrightness() const
{
    return m_ImageBrightness;
}


void ImageSaveOptionsData::setImageBrightness(double value)
{
    m_ImageBrightness = value;
    m_ImageBrightnessIsSet = true;
}
bool ImageSaveOptionsData::imageBrightnessIsSet() const
{
    return m_ImageBrightnessIsSet;
}

void ImageSaveOptionsData::unsetImageBrightness()
{
    m_ImageBrightnessIsSet = false;
}

utility::string_t ImageSaveOptionsData::getImageColorMode() const
{
    return m_ImageColorMode;
}


void ImageSaveOptionsData::setImageColorMode(utility::string_t value)
{
    m_ImageColorMode = value;
    m_ImageColorModeIsSet = true;
}
bool ImageSaveOptionsData::imageColorModeIsSet() const
{
    return m_ImageColorModeIsSet;
}

void ImageSaveOptionsData::unsetImageColorMode()
{
    m_ImageColorModeIsSet = false;
}

double ImageSaveOptionsData::getImageContrast() const
{
    return m_ImageContrast;
}


void ImageSaveOptionsData::setImageContrast(double value)
{
    m_ImageContrast = value;
    m_ImageContrastIsSet = true;
}
bool ImageSaveOptionsData::imageContrastIsSet() const
{
    return m_ImageContrastIsSet;
}

void ImageSaveOptionsData::unsetImageContrast()
{
    m_ImageContrastIsSet = false;
}

utility::string_t ImageSaveOptionsData::getPaperColor() const
{
    return m_PaperColor;
}


void ImageSaveOptionsData::setPaperColor(utility::string_t value)
{
    m_PaperColor = value;
    m_PaperColorIsSet = true;
}
bool ImageSaveOptionsData::paperColorIsSet() const
{
    return m_PaperColorIsSet;
}

void ImageSaveOptionsData::unsetPaperColor()
{
    m_PaperColorIsSet = false;
}

utility::string_t ImageSaveOptionsData::getPixelFormat() const
{
    return m_PixelFormat;
}


void ImageSaveOptionsData::setPixelFormat(utility::string_t value)
{
    m_PixelFormat = value;
    m_PixelFormatIsSet = true;
}
bool ImageSaveOptionsData::pixelFormatIsSet() const
{
    return m_PixelFormatIsSet;
}

void ImageSaveOptionsData::unsetPixelFormat()
{
    m_PixelFormatIsSet = false;
}

double ImageSaveOptionsData::getResolution() const
{
    return m_Resolution;
}


void ImageSaveOptionsData::setResolution(double value)
{
    m_Resolution = value;
    m_ResolutionIsSet = true;
}
bool ImageSaveOptionsData::resolutionIsSet() const
{
    return m_ResolutionIsSet;
}

void ImageSaveOptionsData::unsetResolution()
{
    m_ResolutionIsSet = false;
}

double ImageSaveOptionsData::getScale() const
{
    return m_Scale;
}


void ImageSaveOptionsData::setScale(double value)
{
    m_Scale = value;
    m_ScaleIsSet = true;
}
bool ImageSaveOptionsData::scaleIsSet() const
{
    return m_ScaleIsSet;
}

void ImageSaveOptionsData::unsetScale()
{
    m_ScaleIsSet = false;
}

bool ImageSaveOptionsData::isUseAntiAliasing() const
{
    return m_UseAntiAliasing;
}


void ImageSaveOptionsData::setUseAntiAliasing(bool value)
{
    m_UseAntiAliasing = value;
    m_UseAntiAliasingIsSet = true;
}
bool ImageSaveOptionsData::useAntiAliasingIsSet() const
{
    return m_UseAntiAliasingIsSet;
}

void ImageSaveOptionsData::unsetUseAntiAliasing()
{
    m_UseAntiAliasingIsSet = false;
}

bool ImageSaveOptionsData::isUseGdiEmfRenderer() const
{
    return m_UseGdiEmfRenderer;
}


void ImageSaveOptionsData::setUseGdiEmfRenderer(bool value)
{
    m_UseGdiEmfRenderer = value;
    m_UseGdiEmfRendererIsSet = true;
}
bool ImageSaveOptionsData::useGdiEmfRendererIsSet() const
{
    return m_UseGdiEmfRendererIsSet;
}

void ImageSaveOptionsData::unsetUseGdiEmfRenderer()
{
    m_UseGdiEmfRendererIsSet = false;
}

bool ImageSaveOptionsData::isUseHighQualityRendering() const
{
    return m_UseHighQualityRendering;
}


void ImageSaveOptionsData::setUseHighQualityRendering(bool value)
{
    m_UseHighQualityRendering = value;
    m_UseHighQualityRenderingIsSet = true;
}
bool ImageSaveOptionsData::useHighQualityRenderingIsSet() const
{
    return m_UseHighQualityRenderingIsSet;
}

void ImageSaveOptionsData::unsetUseHighQualityRendering()
{
    m_UseHighQualityRenderingIsSet = false;
}

double ImageSaveOptionsData::getVerticalResolution() const
{
    return m_VerticalResolution;
}


void ImageSaveOptionsData::setVerticalResolution(double value)
{
    m_VerticalResolution = value;
    m_VerticalResolutionIsSet = true;
}
bool ImageSaveOptionsData::verticalResolutionIsSet() const
{
    return m_VerticalResolutionIsSet;
}

void ImageSaveOptionsData::unsetVerticalResolution()
{
    m_VerticalResolutionIsSet = false;
}

}
}
}
}

