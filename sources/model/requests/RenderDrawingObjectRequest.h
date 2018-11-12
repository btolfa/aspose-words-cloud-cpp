//RenderDrawingObjectRequest.h
#include "cpprest/details/basic_types.h"
#undef U
#include <boost/optional.hpp>

namespace io {
namespace swagger {
namespace client {
namespace model {

class RenderDrawingObjectRequest{
    public: 
    RenderDrawingObjectRequest(
        utility::string_t name,
                utility::string_t format,
                int32_t index,
                boost::optional<utility::string_t> folder,
                boost::optional<utility::string_t> storage,
                boost::optional<utility::string_t> loadEncoding,
                boost::optional<utility::string_t> password,
                boost::optional<utility::string_t> nodePath,
                boost::optional<utility::string_t> fontsLocation
        );

    public:
        utility::string_t name;
        utility::string_t format;
        int32_t index;
        boost::optional<utility::string_t> folder;
        boost::optional<utility::string_t> storage;
        boost::optional<utility::string_t> loadEncoding;
        boost::optional<utility::string_t> password;
        boost::optional<utility::string_t> nodePath;
        boost::optional<utility::string_t> fontsLocation;
};

}
}
}
}