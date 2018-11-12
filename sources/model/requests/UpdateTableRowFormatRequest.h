//UpdateTableRowFormatRequest.h
#include "cpprest/details/basic_types.h"
#undef U
#include "TableRowFormat.h"
#include <boost/optional.hpp>

namespace io {
namespace swagger {
namespace client {
namespace model {

class UpdateTableRowFormatRequest{
    public: 
    UpdateTableRowFormatRequest(
        utility::string_t name,
                utility::string_t tablePath,
                int32_t index,
                boost::optional<utility::string_t> folder,
                boost::optional<utility::string_t> storage,
                boost::optional<utility::string_t> loadEncoding,
                boost::optional<utility::string_t> password,
                boost::optional<utility::string_t> destFileName,
                boost::optional<utility::string_t> revisionAuthor,
                boost::optional<utility::string_t> revisionDateTime,
                boost::optional<std::shared_ptr<TableRowFormat>> format
        );

    public:
        utility::string_t name;
        utility::string_t tablePath;
        int32_t index;
        boost::optional<utility::string_t> folder;
        boost::optional<utility::string_t> storage;
        boost::optional<utility::string_t> loadEncoding;
        boost::optional<utility::string_t> password;
        boost::optional<utility::string_t> destFileName;
        boost::optional<utility::string_t> revisionAuthor;
        boost::optional<utility::string_t> revisionDateTime;
        boost::optional<std::shared_ptr<TableRowFormat>> format;
};

}
}
}
}