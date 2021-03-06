/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="XamlFixedSaveOptionsData.cpp">
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


#include "XamlFixedSaveOptionsData.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

XamlFixedSaveOptionsData::XamlFixedSaveOptionsData()
{
    m_ResourcesFolder = utility::conversions::to_string_t("");
    m_ResourcesFolderIsSet = false;
    m_ResourcesFolderAlias = utility::conversions::to_string_t("");
    m_ResourcesFolderAliasIsSet = false;
}

XamlFixedSaveOptionsData::~XamlFixedSaveOptionsData()
{
}

void XamlFixedSaveOptionsData::validate()
{
    // TODO: implement validation
}

web::json::value XamlFixedSaveOptionsData::toJson() const
{
    web::json::value val = this->FixedPageSaveOptionsData::toJson();

    if(m_ResourcesFolderIsSet)
    {
        val[utility::conversions::to_string_t("ResourcesFolder")] = ModelBase::toJson(m_ResourcesFolder);
    }
    if(m_ResourcesFolderAliasIsSet)
    {
        val[utility::conversions::to_string_t("ResourcesFolderAlias")] = ModelBase::toJson(m_ResourcesFolderAlias);
    }

    return val;
}

void XamlFixedSaveOptionsData::fromJson(web::json::value& val)
{
    this->FixedPageSaveOptionsData::fromJson(val);

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
}

void XamlFixedSaveOptionsData::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_ResourcesFolderIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ResourcesFolder"), m_ResourcesFolder));
        
    }
    if(m_ResourcesFolderAliasIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ResourcesFolderAlias"), m_ResourcesFolderAlias));
        
    }
}

void XamlFixedSaveOptionsData::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("ResourcesFolder")))
    {
        setResourcesFolder(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ResourcesFolder"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ResourcesFolderAlias")))
    {
        setResourcesFolderAlias(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ResourcesFolderAlias"))));
    }
}

utility::string_t XamlFixedSaveOptionsData::getResourcesFolder() const
{
    return m_ResourcesFolder;
}


void XamlFixedSaveOptionsData::setResourcesFolder(utility::string_t value)
{
    m_ResourcesFolder = value;
    m_ResourcesFolderIsSet = true;
}
bool XamlFixedSaveOptionsData::resourcesFolderIsSet() const
{
    return m_ResourcesFolderIsSet;
}

void XamlFixedSaveOptionsData::unsetResourcesFolder()
{
    m_ResourcesFolderIsSet = false;
}

utility::string_t XamlFixedSaveOptionsData::getResourcesFolderAlias() const
{
    return m_ResourcesFolderAlias;
}


void XamlFixedSaveOptionsData::setResourcesFolderAlias(utility::string_t value)
{
    m_ResourcesFolderAlias = value;
    m_ResourcesFolderAliasIsSet = true;
}
bool XamlFixedSaveOptionsData::resourcesFolderAliasIsSet() const
{
    return m_ResourcesFolderAliasIsSet;
}

void XamlFixedSaveOptionsData::unsetResourcesFolderAlias()
{
    m_ResourcesFolderAliasIsSet = false;
}

}
}
}
}

