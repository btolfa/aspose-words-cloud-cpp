
/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="TableRowResponse.h">
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

#ifndef IO_SWAGGER_CLIENT_MODEL_TableRowResponse_H_
#define IO_SWAGGER_CLIENT_MODEL_TableRowResponse_H_


#include "AsposeResponse.h"
#include "TableRow.h"
#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// This response should be returned by the service when handling: GET http://api.aspose.com/v1.1/words/Test.doc/tables/{0}
/// </summary>
class  TableRowResponse
    : public AsposeResponse
{
public:
    TableRowResponse();
    virtual ~TableRowResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// TableRowResponse members

    /// <summary>
    /// Table row.
    /// </summary>
    std::shared_ptr<TableRow> getRow() const;
    bool rowIsSet() const;
    void unsetRow();
    void setRow(std::shared_ptr<TableRow> value);

protected:
    std::shared_ptr<TableRow> m_Row;
    bool m_RowIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_TableRowResponse_H_ */
