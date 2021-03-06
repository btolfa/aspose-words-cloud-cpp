/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="FixedPageSaveOptionsData.cpp">
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


#include "FixedPageSaveOptionsData.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

FixedPageSaveOptionsData::FixedPageSaveOptionsData()
{
    m_JpegQuality = 0;
    m_JpegQualityIsSet = false;
    m_MetafileRenderingOptionsIsSet = false;
    m_NumeralFormat = utility::conversions::to_string_t("");
    m_NumeralFormatIsSet = false;
    m_OptimizeOutput = false;
    m_OptimizeOutputIsSet = false;
    m_PageCount = 0;
    m_PageCountIsSet = false;
    m_PageIndex = 0;
    m_PageIndexIsSet = false;
}

FixedPageSaveOptionsData::~FixedPageSaveOptionsData()
{
}

void FixedPageSaveOptionsData::validate()
{
    // TODO: implement validation
}

web::json::value FixedPageSaveOptionsData::toJson() const
{
    web::json::value val = this->SaveOptionsData::toJson();

    if(m_JpegQualityIsSet)
    {
        val[utility::conversions::to_string_t("JpegQuality")] = ModelBase::toJson(m_JpegQuality);
    }
    if(m_MetafileRenderingOptionsIsSet)
    {
        val[utility::conversions::to_string_t("MetafileRenderingOptions")] = ModelBase::toJson(m_MetafileRenderingOptions);
    }
    if(m_NumeralFormatIsSet)
    {
        val[utility::conversions::to_string_t("NumeralFormat")] = ModelBase::toJson(m_NumeralFormat);
    }
    if(m_OptimizeOutputIsSet)
    {
        val[utility::conversions::to_string_t("OptimizeOutput")] = ModelBase::toJson(m_OptimizeOutput);
    }
    if(m_PageCountIsSet)
    {
        val[utility::conversions::to_string_t("PageCount")] = ModelBase::toJson(m_PageCount);
    }
    if(m_PageIndexIsSet)
    {
        val[utility::conversions::to_string_t("PageIndex")] = ModelBase::toJson(m_PageIndex);
    }

    return val;
}

void FixedPageSaveOptionsData::fromJson(web::json::value& val)
{
    this->SaveOptionsData::fromJson(val);

    if(val.has_field(utility::conversions::to_string_t("JpegQuality")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("JpegQuality")];
        if(!fieldValue.is_null())
        {
            setJpegQuality(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("MetafileRenderingOptions")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("MetafileRenderingOptions")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<MetafileRenderingOptionsData> newItem(new MetafileRenderingOptionsData());
            newItem->fromJson(fieldValue);
            setMetafileRenderingOptions( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("NumeralFormat")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("NumeralFormat")];
        if(!fieldValue.is_null())
        {
            setNumeralFormat(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("OptimizeOutput")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("OptimizeOutput")];
        if(!fieldValue.is_null())
        {
            setOptimizeOutput(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("PageCount")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("PageCount")];
        if(!fieldValue.is_null())
        {
            setPageCount(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("PageIndex")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("PageIndex")];
        if(!fieldValue.is_null())
        {
            setPageIndex(ModelBase::int32_tFromJson(fieldValue));
        }
    }
}

void FixedPageSaveOptionsData::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
}

void FixedPageSaveOptionsData::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
}

int32_t FixedPageSaveOptionsData::getJpegQuality() const
{
    return m_JpegQuality;
}


void FixedPageSaveOptionsData::setJpegQuality(int32_t value)
{
    m_JpegQuality = value;
    m_JpegQualityIsSet = true;
}
bool FixedPageSaveOptionsData::jpegQualityIsSet() const
{
    return m_JpegQualityIsSet;
}

void FixedPageSaveOptionsData::unsetJpegQuality()
{
    m_JpegQualityIsSet = false;
}

std::shared_ptr<MetafileRenderingOptionsData> FixedPageSaveOptionsData::getMetafileRenderingOptions() const
{
    return m_MetafileRenderingOptions;
}


void FixedPageSaveOptionsData::setMetafileRenderingOptions(std::shared_ptr<MetafileRenderingOptionsData> value)
{
    m_MetafileRenderingOptions = value;
    m_MetafileRenderingOptionsIsSet = true;
}
bool FixedPageSaveOptionsData::metafileRenderingOptionsIsSet() const
{
    return m_MetafileRenderingOptionsIsSet;
}

void FixedPageSaveOptionsData::unsetMetafileRenderingOptions()
{
    m_MetafileRenderingOptionsIsSet = false;
}

utility::string_t FixedPageSaveOptionsData::getNumeralFormat() const
{
    return m_NumeralFormat;
}


void FixedPageSaveOptionsData::setNumeralFormat(utility::string_t value)
{
    m_NumeralFormat = value;
    m_NumeralFormatIsSet = true;
}
bool FixedPageSaveOptionsData::numeralFormatIsSet() const
{
    return m_NumeralFormatIsSet;
}

void FixedPageSaveOptionsData::unsetNumeralFormat()
{
    m_NumeralFormatIsSet = false;
}

bool FixedPageSaveOptionsData::isOptimizeOutput() const
{
    return m_OptimizeOutput;
}


void FixedPageSaveOptionsData::setOptimizeOutput(bool value)
{
    m_OptimizeOutput = value;
    m_OptimizeOutputIsSet = true;
}
bool FixedPageSaveOptionsData::optimizeOutputIsSet() const
{
    return m_OptimizeOutputIsSet;
}

void FixedPageSaveOptionsData::unsetOptimizeOutput()
{
    m_OptimizeOutputIsSet = false;
}

int32_t FixedPageSaveOptionsData::getPageCount() const
{
    return m_PageCount;
}


void FixedPageSaveOptionsData::setPageCount(int32_t value)
{
    m_PageCount = value;
    m_PageCountIsSet = true;
}
bool FixedPageSaveOptionsData::pageCountIsSet() const
{
    return m_PageCountIsSet;
}

void FixedPageSaveOptionsData::unsetPageCount()
{
    m_PageCountIsSet = false;
}

int32_t FixedPageSaveOptionsData::getPageIndex() const
{
    return m_PageIndex;
}


void FixedPageSaveOptionsData::setPageIndex(int32_t value)
{
    m_PageIndex = value;
    m_PageIndexIsSet = true;
}
bool FixedPageSaveOptionsData::pageIndexIsSet() const
{
    return m_PageIndexIsSet;
}

void FixedPageSaveOptionsData::unsetPageIndex()
{
    m_PageIndexIsSet = false;
}

}
}
}
}

