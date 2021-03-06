/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="DownsampleOptionsData.cpp">
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


#include "DownsampleOptionsData.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

DownsampleOptionsData::DownsampleOptionsData()
{
    m_DownsampleImages = false;
    m_DownsampleImagesIsSet = false;
    m_Resolution = 0;
    m_ResolutionIsSet = false;
    m_ResolutionThreshold = 0;
    m_ResolutionThresholdIsSet = false;
}

DownsampleOptionsData::~DownsampleOptionsData()
{
}

void DownsampleOptionsData::validate()
{
    // TODO: implement validation
}

web::json::value DownsampleOptionsData::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_DownsampleImagesIsSet)
    {
        val[utility::conversions::to_string_t("DownsampleImages")] = ModelBase::toJson(m_DownsampleImages);
    }
    if(m_ResolutionIsSet)
    {
        val[utility::conversions::to_string_t("Resolution")] = ModelBase::toJson(m_Resolution);
    }
    if(m_ResolutionThresholdIsSet)
    {
        val[utility::conversions::to_string_t("ResolutionThreshold")] = ModelBase::toJson(m_ResolutionThreshold);
    }

    return val;
}

void DownsampleOptionsData::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("DownsampleImages")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("DownsampleImages")];
        if(!fieldValue.is_null())
        {
            setDownsampleImages(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Resolution")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("Resolution")];
        if(!fieldValue.is_null())
        {
            setResolution(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ResolutionThreshold")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("ResolutionThreshold")];
        if(!fieldValue.is_null())
        {
            setResolutionThreshold(ModelBase::int32_tFromJson(fieldValue));
        }
    }
}

void DownsampleOptionsData::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_DownsampleImagesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("DownsampleImages"), m_DownsampleImages));
    }
    if(m_ResolutionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("Resolution"), m_Resolution));
    }
    if(m_ResolutionThresholdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ResolutionThreshold"), m_ResolutionThreshold));
    }
}

void DownsampleOptionsData::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("DownsampleImages")))
    {
        setDownsampleImages(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("DownsampleImages"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("Resolution")))
    {
        setResolution(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("Resolution"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ResolutionThreshold")))
    {
        setResolutionThreshold(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ResolutionThreshold"))));
    }
}

bool DownsampleOptionsData::isDownsampleImages() const
{
    return m_DownsampleImages;
}


void DownsampleOptionsData::setDownsampleImages(bool value)
{
    m_DownsampleImages = value;
    m_DownsampleImagesIsSet = true;
}
bool DownsampleOptionsData::downsampleImagesIsSet() const
{
    return m_DownsampleImagesIsSet;
}

void DownsampleOptionsData::unsetDownsampleImages()
{
    m_DownsampleImagesIsSet = false;
}

int32_t DownsampleOptionsData::getResolution() const
{
    return m_Resolution;
}


void DownsampleOptionsData::setResolution(int32_t value)
{
    m_Resolution = value;
    m_ResolutionIsSet = true;
}
bool DownsampleOptionsData::resolutionIsSet() const
{
    return m_ResolutionIsSet;
}

void DownsampleOptionsData::unsetResolution()
{
    m_ResolutionIsSet = false;
}

int32_t DownsampleOptionsData::getResolutionThreshold() const
{
    return m_ResolutionThreshold;
}


void DownsampleOptionsData::setResolutionThreshold(int32_t value)
{
    m_ResolutionThreshold = value;
    m_ResolutionThresholdIsSet = true;
}
bool DownsampleOptionsData::resolutionThresholdIsSet() const
{
    return m_ResolutionThresholdIsSet;
}

void DownsampleOptionsData::unsetResolutionThreshold()
{
    m_ResolutionThresholdIsSet = false;
}

}
}
}
}

