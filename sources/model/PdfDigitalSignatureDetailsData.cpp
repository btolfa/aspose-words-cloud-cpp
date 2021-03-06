/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="PdfDigitalSignatureDetailsData.cpp">
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


#include "PdfDigitalSignatureDetailsData.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

PdfDigitalSignatureDetailsData::PdfDigitalSignatureDetailsData()
{
    m_CertificateFilename = utility::conversions::to_string_t("");
    m_CertificateFilenameIsSet = false;
    m_HashAlgorithm = utility::conversions::to_string_t("");
    m_HashAlgorithmIsSet = false;
    m_Location = utility::conversions::to_string_t("");
    m_LocationIsSet = false;
    m_Reason = utility::conversions::to_string_t("");
    m_ReasonIsSet = false;
    m_SignatureDate = utility::datetime();
    m_SignatureDateIsSet = false;
}

PdfDigitalSignatureDetailsData::~PdfDigitalSignatureDetailsData()
{
}

void PdfDigitalSignatureDetailsData::validate()
{
    // TODO: implement validation
}

web::json::value PdfDigitalSignatureDetailsData::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_CertificateFilenameIsSet)
    {
        val[utility::conversions::to_string_t("CertificateFilename")] = ModelBase::toJson(m_CertificateFilename);
    }
    if(m_HashAlgorithmIsSet)
    {
        val[utility::conversions::to_string_t("HashAlgorithm")] = ModelBase::toJson(m_HashAlgorithm);
    }
    if(m_LocationIsSet)
    {
        val[utility::conversions::to_string_t("Location")] = ModelBase::toJson(m_Location);
    }
    if(m_ReasonIsSet)
    {
        val[utility::conversions::to_string_t("Reason")] = ModelBase::toJson(m_Reason);
    }
    if(m_SignatureDateIsSet)
    {
        val[utility::conversions::to_string_t("SignatureDate")] = ModelBase::toJson(m_SignatureDate);
    }

    return val;
}

void PdfDigitalSignatureDetailsData::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("CertificateFilename")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("CertificateFilename")];
        if(!fieldValue.is_null())
        {
            setCertificateFilename(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("HashAlgorithm")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("HashAlgorithm")];
        if(!fieldValue.is_null())
        {
            setHashAlgorithm(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Location")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("Location")];
        if(!fieldValue.is_null())
        {
            setLocation(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Reason")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("Reason")];
        if(!fieldValue.is_null())
        {
            setReason(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("SignatureDate")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("SignatureDate")];
        if(!fieldValue.is_null())
        {
            setSignatureDate(ModelBase::dateFromJson(fieldValue));
        }
    }
}

void PdfDigitalSignatureDetailsData::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_CertificateFilenameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("CertificateFilename"), m_CertificateFilename));
        
    }
    if(m_HashAlgorithmIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("HashAlgorithm"), m_HashAlgorithm));
        
    }
    if(m_LocationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("Location"), m_Location));
        
    }
    if(m_ReasonIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("Reason"), m_Reason));
        
    }
    if(m_SignatureDateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("SignatureDate"), m_SignatureDate));
        
    }
}

void PdfDigitalSignatureDetailsData::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("CertificateFilename")))
    {
        setCertificateFilename(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("CertificateFilename"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("HashAlgorithm")))
    {
        setHashAlgorithm(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("HashAlgorithm"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("Location")))
    {
        setLocation(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("Location"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("Reason")))
    {
        setReason(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("Reason"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("SignatureDate")))
    {
        setSignatureDate(ModelBase::dateFromHttpContent(multipart->getContent(utility::conversions::to_string_t("SignatureDate"))));
    }
}

utility::string_t PdfDigitalSignatureDetailsData::getCertificateFilename() const
{
    return m_CertificateFilename;
}


void PdfDigitalSignatureDetailsData::setCertificateFilename(utility::string_t value)
{
    m_CertificateFilename = value;
    m_CertificateFilenameIsSet = true;
}
bool PdfDigitalSignatureDetailsData::certificateFilenameIsSet() const
{
    return m_CertificateFilenameIsSet;
}

void PdfDigitalSignatureDetailsData::unsetCertificateFilename()
{
    m_CertificateFilenameIsSet = false;
}

utility::string_t PdfDigitalSignatureDetailsData::getHashAlgorithm() const
{
    return m_HashAlgorithm;
}


void PdfDigitalSignatureDetailsData::setHashAlgorithm(utility::string_t value)
{
    m_HashAlgorithm = value;
    m_HashAlgorithmIsSet = true;
}
bool PdfDigitalSignatureDetailsData::hashAlgorithmIsSet() const
{
    return m_HashAlgorithmIsSet;
}

void PdfDigitalSignatureDetailsData::unsetHashAlgorithm()
{
    m_HashAlgorithmIsSet = false;
}

utility::string_t PdfDigitalSignatureDetailsData::getLocation() const
{
    return m_Location;
}


void PdfDigitalSignatureDetailsData::setLocation(utility::string_t value)
{
    m_Location = value;
    m_LocationIsSet = true;
}
bool PdfDigitalSignatureDetailsData::locationIsSet() const
{
    return m_LocationIsSet;
}

void PdfDigitalSignatureDetailsData::unsetLocation()
{
    m_LocationIsSet = false;
}

utility::string_t PdfDigitalSignatureDetailsData::getReason() const
{
    return m_Reason;
}


void PdfDigitalSignatureDetailsData::setReason(utility::string_t value)
{
    m_Reason = value;
    m_ReasonIsSet = true;
}
bool PdfDigitalSignatureDetailsData::reasonIsSet() const
{
    return m_ReasonIsSet;
}

void PdfDigitalSignatureDetailsData::unsetReason()
{
    m_ReasonIsSet = false;
}

utility::datetime PdfDigitalSignatureDetailsData::getSignatureDate() const
{
    return m_SignatureDate;
}


void PdfDigitalSignatureDetailsData::setSignatureDate(utility::datetime value)
{
    m_SignatureDate = value;
    m_SignatureDateIsSet = true;
}
bool PdfDigitalSignatureDetailsData::signatureDateIsSet() const
{
    return m_SignatureDateIsSet;
}

void PdfDigitalSignatureDetailsData::unsetSignatureDate()
{
    m_SignatureDateIsSet = false;
}

}
}
}
}

