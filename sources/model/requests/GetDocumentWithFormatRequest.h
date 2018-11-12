//GetDocumentWithFormatRequest.h
#include "cpprest/details/basic_types.h"
#undef U
#include <boost/optional.hpp>

namespace io {
namespace swagger {
namespace client {
namespace model {

class GetDocumentWithFormatRequest{
    public: 
    GetDocumentWithFormatRequest(
        utility::string_t name,
                utility::string_t format,
                boost::optional<utility::string_t> folder,
                boost::optional<utility::string_t> storage,
                boost::optional<utility::string_t> loadEncoding,
                boost::optional<utility::string_t> password,
                boost::optional<utility::string_t> outPath,
                boost::optional<utility::string_t> fontsLocation
        );

    public:
        utility::string_t name;
        utility::string_t format;
        boost::optional<utility::string_t> folder;
        boost::optional<utility::string_t> storage;
        boost::optional<utility::string_t> loadEncoding;
        boost::optional<utility::string_t> password;
        boost::optional<utility::string_t> outPath;
        boost::optional<utility::string_t> fontsLocation;
};

}
}
}
}