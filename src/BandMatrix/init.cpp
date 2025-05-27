#include <BandMatrix/init.h>
#include <sofa/core/ObjectFactory.h>

namespace bandmatrix
{

void initializePlugin() 
{
    static bool first = true;
    if (first) {
        first = false;
        // Register components here
    }
}

}

extern "C" 
{
    BANDMATRIX_API void initExternalModule() 
    {
        bandmatrix::initializePlugin();
    }

    BANDMATRIX_API const char* getModuleName() 
    {
        return bandmatrix::MODULE_NAME;
    }

    BANDMATRIX_API const char* getModuleVersion() 
    {
        return bandmatrix::MODULE_VERSION;
    }

    BANDMATRIX_API const char* getModuleLicense() 
    {
        return "LGPL";
    }

    BANDMATRIX_API const char* getModuleDescription() 
    {
        return "SOFA plugin for BandMatrix";
    }
}
