
/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="Field.h">
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

#ifndef IO_SWAGGER_CLIENT_MODEL_Field_H_
#define IO_SWAGGER_CLIENT_MODEL_Field_H_


#include <cpprest/details/basic_types.h>
#include "FieldLink.h"
#include "WordsApiLink.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// Field
/// </summary>
class  Field
    : public FieldLink
{
public:
    Field();
    virtual ~Field();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Field members

    /// <summary>
    /// Gets or sets LCID of the field.
    /// </summary>
    utility::string_t getLocaleId() const;
    bool localeIdIsSet() const;
    void unsetLocaleId();
    void setLocaleId(utility::string_t value);
    /// <summary>
    /// Field result
    /// </summary>
    utility::string_t getResult() const;
    bool resultIsSet() const;
    void unsetResult();
    void setResult(utility::string_t value);

protected:
    utility::string_t m_LocaleId;
    bool m_LocaleIdIsSet;
    utility::string_t m_Result;
    bool m_ResultIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_Field_H_ */
