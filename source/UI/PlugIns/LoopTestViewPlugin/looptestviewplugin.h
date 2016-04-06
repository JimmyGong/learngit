#ifndef LOOPTESTVIEWPLUGIN_H
#define LOOPTESTVIEWPLUGIN_H

#include "plugin_global.h"

class TPLUGINSHARED_EXPORT LoopTestViewPlugin : public IPlugin
{

public:
    LoopTestViewPlugin();
    ~LoopTestViewPlugin();

    virtual int init();
    virtual void fini();
    virtual int onMessage(const IMessage* msg);
    virtual bool isHandleMessage(const IMessage* msg);
    virtual IModuleForm* getModuleForm();

};

#endif // LOOPTESTVIEWPLUGIN_H
