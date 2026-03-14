#pragma once

#include <functional>
#include <fstream>
#include <memory>
#include <string>
#include <unordered_map>

namespace Firefly 
{
    class ContentProvider : public std::enable_shared_from_this<ContentProvider>
    {
    private:
        std::string _rootDirectory;
        std::unordered_map<std::string, std::shared_ptr<void>> loadedAssets;
    public:
        ~ContentProvider();

        virtual void Unload();
    protected:
        std::shared_ptr<std::ifstream> OpenStream(const std::string& assetName);

        
    };
}
