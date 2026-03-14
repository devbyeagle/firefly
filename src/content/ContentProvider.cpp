#include <stdexcept>

#include "firefly/content/ContentProvider.h"

namespace Firefly 
{
    ContentProvider::~ContentProvider()
    {
        Unload();
    }

    std::shared_ptr<std::ifstream> ContentProvider::OpenStream(const std::string &assetName)
    {
     return std::make_shared<std::ifstream>();
    }

    void ContentProvider::Unload()
    {
        loadedAssets.clear();
    }
}
