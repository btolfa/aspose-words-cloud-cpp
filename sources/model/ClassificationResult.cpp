/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="ClassificationResult.cpp">
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


#include "ClassificationResult.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

ClassificationResult::ClassificationResult()
{
    m_ClassName = utility::conversions::to_string_t("");
    m_ClassNameIsSet = false;
    m_ClassProbability = 0.0;
}

ClassificationResult::~ClassificationResult()
{
}

void ClassificationResult::validate()
{
    // TODO: implement validation
}

web::json::value ClassificationResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_ClassNameIsSet)
    {
        val[utility::conversions::to_string_t("ClassName")] = ModelBase::toJson(m_ClassName);
    }
    val[utility::conversions::to_string_t("ClassProbability")] = ModelBase::toJson(m_ClassProbability);

    return val;
}

void ClassificationResult::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("ClassName")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("ClassName")];
        if(!fieldValue.is_null())
        {
            setClassName(ModelBase::stringFromJson(fieldValue));
        }
    }
    setClassProbability(ModelBase::doubleFromJson(val[utility::conversions::to_string_t("ClassProbability")]));
}

void ClassificationResult::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_ClassNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ClassName"), m_ClassName));
        
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ClassProbability"), m_ClassProbability));
}

void ClassificationResult::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("ClassName")))
    {
        setClassName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ClassName"))));
    }
    setClassProbability(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ClassProbability"))));
}

utility::string_t ClassificationResult::getClassName() const
{
    return m_ClassName;
}


void ClassificationResult::setClassName(utility::string_t value)
{
    m_ClassName = value;
    m_ClassNameIsSet = true;
}
bool ClassificationResult::classNameIsSet() const
{
    return m_ClassNameIsSet;
}

void ClassificationResult::unsetClassName()
{
    m_ClassNameIsSet = false;
}

double ClassificationResult::getClassProbability() const
{
    return m_ClassProbability;
}


void ClassificationResult::setClassProbability(double value)
{
    m_ClassProbability = value;
    
}
}
}
}
}

