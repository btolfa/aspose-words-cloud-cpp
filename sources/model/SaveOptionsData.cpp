/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="SaveOptionsData.cpp">
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


#include "SaveOptionsData.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

SaveOptionsData::SaveOptionsData()
{
    m_ColorMode = utility::conversions::to_string_t("");
    m_ColorModeIsSet = false;
    m_SaveFormat = utility::conversions::to_string_t("");
    m_SaveFormatIsSet = false;
    m_FileName = utility::conversions::to_string_t("");
    m_FileNameIsSet = false;
    m_DmlRenderingMode = utility::conversions::to_string_t("");
    m_DmlRenderingModeIsSet = false;
    m_DmlEffectsRenderingMode = utility::conversions::to_string_t("");
    m_DmlEffectsRenderingModeIsSet = false;
    m_ZipOutput = false;
    m_ZipOutputIsSet = false;
    m_UpdateLastSavedTimeProperty = false;
    m_UpdateLastSavedTimePropertyIsSet = false;
    m_UpdateSdtContent = false;
    m_UpdateSdtContentIsSet = false;
    m_UpdateFields = false;
    m_UpdateFieldsIsSet = false;
}

SaveOptionsData::~SaveOptionsData()
{
}

void SaveOptionsData::validate()
{
    // TODO: implement validation
}

web::json::value SaveOptionsData::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_ColorModeIsSet)
    {
        val[utility::conversions::to_string_t("ColorMode")] = ModelBase::toJson(m_ColorMode);
    }
    if(m_SaveFormatIsSet)
    {
        val[utility::conversions::to_string_t("SaveFormat")] = ModelBase::toJson(m_SaveFormat);
    }
    if(m_FileNameIsSet)
    {
        val[utility::conversions::to_string_t("FileName")] = ModelBase::toJson(m_FileName);
    }
    if(m_DmlRenderingModeIsSet)
    {
        val[utility::conversions::to_string_t("DmlRenderingMode")] = ModelBase::toJson(m_DmlRenderingMode);
    }
    if(m_DmlEffectsRenderingModeIsSet)
    {
        val[utility::conversions::to_string_t("DmlEffectsRenderingMode")] = ModelBase::toJson(m_DmlEffectsRenderingMode);
    }
    if(m_ZipOutputIsSet)
    {
        val[utility::conversions::to_string_t("ZipOutput")] = ModelBase::toJson(m_ZipOutput);
    }
    if(m_UpdateLastSavedTimePropertyIsSet)
    {
        val[utility::conversions::to_string_t("UpdateLastSavedTimeProperty")] = ModelBase::toJson(m_UpdateLastSavedTimeProperty);
    }
    if(m_UpdateSdtContentIsSet)
    {
        val[utility::conversions::to_string_t("UpdateSdtContent")] = ModelBase::toJson(m_UpdateSdtContent);
    }
    if(m_UpdateFieldsIsSet)
    {
        val[utility::conversions::to_string_t("UpdateFields")] = ModelBase::toJson(m_UpdateFields);
    }

    return val;
}

void SaveOptionsData::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("ColorMode")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("ColorMode")];
        if(!fieldValue.is_null())
        {
            setColorMode(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("SaveFormat")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("SaveFormat")];
        if(!fieldValue.is_null())
        {
            setSaveFormat(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("FileName")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("FileName")];
        if(!fieldValue.is_null())
        {
            setFileName(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("DmlRenderingMode")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("DmlRenderingMode")];
        if(!fieldValue.is_null())
        {
            setDmlRenderingMode(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("DmlEffectsRenderingMode")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("DmlEffectsRenderingMode")];
        if(!fieldValue.is_null())
        {
            setDmlEffectsRenderingMode(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ZipOutput")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("ZipOutput")];
        if(!fieldValue.is_null())
        {
            setZipOutput(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("UpdateLastSavedTimeProperty")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("UpdateLastSavedTimeProperty")];
        if(!fieldValue.is_null())
        {
            setUpdateLastSavedTimeProperty(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("UpdateSdtContent")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("UpdateSdtContent")];
        if(!fieldValue.is_null())
        {
            setUpdateSdtContent(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("UpdateFields")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("UpdateFields")];
        if(!fieldValue.is_null())
        {
            setUpdateFields(ModelBase::boolFromJson(fieldValue));
        }
    }
}

void SaveOptionsData::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
}

void SaveOptionsData::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
}

utility::string_t SaveOptionsData::getColorMode() const
{
    return m_ColorMode;
}


void SaveOptionsData::setColorMode(utility::string_t value)
{
    m_ColorMode = value;
    m_ColorModeIsSet = true;
}
bool SaveOptionsData::colorModeIsSet() const
{
    return m_ColorModeIsSet;
}

void SaveOptionsData::unsetColorMode()
{
    m_ColorModeIsSet = false;
}

utility::string_t SaveOptionsData::getSaveFormat() const
{
    return m_SaveFormat;
}


void SaveOptionsData::setSaveFormat(utility::string_t value)
{
    m_SaveFormat = value;
    m_SaveFormatIsSet = true;
}
bool SaveOptionsData::saveFormatIsSet() const
{
    return m_SaveFormatIsSet;
}

void SaveOptionsData::unsetSaveFormat()
{
    m_SaveFormatIsSet = false;
}

utility::string_t SaveOptionsData::getFileName() const
{
    return m_FileName;
}


void SaveOptionsData::setFileName(utility::string_t value)
{
    m_FileName = value;
    m_FileNameIsSet = true;
}
bool SaveOptionsData::fileNameIsSet() const
{
    return m_FileNameIsSet;
}

void SaveOptionsData::unsetFileName()
{
    m_FileNameIsSet = false;
}

utility::string_t SaveOptionsData::getDmlRenderingMode() const
{
    return m_DmlRenderingMode;
}


void SaveOptionsData::setDmlRenderingMode(utility::string_t value)
{
    m_DmlRenderingMode = value;
    m_DmlRenderingModeIsSet = true;
}
bool SaveOptionsData::dmlRenderingModeIsSet() const
{
    return m_DmlRenderingModeIsSet;
}

void SaveOptionsData::unsetDmlRenderingMode()
{
    m_DmlRenderingModeIsSet = false;
}

utility::string_t SaveOptionsData::getDmlEffectsRenderingMode() const
{
    return m_DmlEffectsRenderingMode;
}


void SaveOptionsData::setDmlEffectsRenderingMode(utility::string_t value)
{
    m_DmlEffectsRenderingMode = value;
    m_DmlEffectsRenderingModeIsSet = true;
}
bool SaveOptionsData::dmlEffectsRenderingModeIsSet() const
{
    return m_DmlEffectsRenderingModeIsSet;
}

void SaveOptionsData::unsetDmlEffectsRenderingMode()
{
    m_DmlEffectsRenderingModeIsSet = false;
}

bool SaveOptionsData::isZipOutput() const
{
    return m_ZipOutput;
}


void SaveOptionsData::setZipOutput(bool value)
{
    m_ZipOutput = value;
    m_ZipOutputIsSet = true;
}
bool SaveOptionsData::zipOutputIsSet() const
{
    return m_ZipOutputIsSet;
}

void SaveOptionsData::unsetZipOutput()
{
    m_ZipOutputIsSet = false;
}

bool SaveOptionsData::isUpdateLastSavedTimeProperty() const
{
    return m_UpdateLastSavedTimeProperty;
}


void SaveOptionsData::setUpdateLastSavedTimeProperty(bool value)
{
    m_UpdateLastSavedTimeProperty = value;
    m_UpdateLastSavedTimePropertyIsSet = true;
}
bool SaveOptionsData::updateLastSavedTimePropertyIsSet() const
{
    return m_UpdateLastSavedTimePropertyIsSet;
}

void SaveOptionsData::unsetUpdateLastSavedTimeProperty()
{
    m_UpdateLastSavedTimePropertyIsSet = false;
}

bool SaveOptionsData::isUpdateSdtContent() const
{
    return m_UpdateSdtContent;
}


void SaveOptionsData::setUpdateSdtContent(bool value)
{
    m_UpdateSdtContent = value;
    m_UpdateSdtContentIsSet = true;
}
bool SaveOptionsData::updateSdtContentIsSet() const
{
    return m_UpdateSdtContentIsSet;
}

void SaveOptionsData::unsetUpdateSdtContent()
{
    m_UpdateSdtContentIsSet = false;
}

bool SaveOptionsData::isUpdateFields() const
{
    return m_UpdateFields;
}


void SaveOptionsData::setUpdateFields(bool value)
{
    m_UpdateFields = value;
    m_UpdateFieldsIsSet = true;
}
bool SaveOptionsData::updateFieldsIsSet() const
{
    return m_UpdateFieldsIsSet;
}

void SaveOptionsData::unsetUpdateFields()
{
    m_UpdateFieldsIsSet = false;
}

}
}
}
}

