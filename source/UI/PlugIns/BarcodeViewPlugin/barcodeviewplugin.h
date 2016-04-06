#ifndef BARCODEVIEWPLUGIN_H
#define BARCODEVIEWPLUGIN_H

#include "plugin_global.h"

class TPLUGINSHARED_EXPORT BarcodeViewPlugin : public IPlugin
{

public:
    BarcodeViewPlugin();
    ~BarcodeViewPlugin();

    virtual int init();
    virtual void fini();
    virtual int onMessage(const IMessage* msg);
    virtual bool isHandleMessage(const IMessage* msg);
    virtual IModuleForm * getModuleForm();
};

#endif // BARCODEVIEWPLUGIN_H
