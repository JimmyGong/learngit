#include "looptestviewplugin.h"
#include "looptestviewform.h"
#include "const.h"
#include "message.h"

LoopTestViewPlugin::LoopTestViewPlugin()
{
    _name = LoopTestViewPluginName;
    _pluginType = EPluginType::Tool;
    _widget = NULL;
}

LoopTestViewPlugin::~LoopTestViewPlugin(){}

int LoopTestViewPlugin::init()
{
    _widget = new LoopTestViewForm(this);
    return 0;
}

void LoopTestViewPlugin::fini()
{
    if(NULL != _widget)
    {
        _widget->setParent(NULL);
        delete _widget;
        _widget = NULL;
    }
}

int LoopTestViewPlugin::onMessage(const IMessage* msg)
{
    return 0;
}

bool LoopTestViewPlugin::isHandleMessage(const IMessage* msg)
{
    //先判断是否同个组，如不是，直接返回
    if (!_pluginType & msg->groupType())
        return false;

    return true;
}

IModuleForm *LoopTestViewPlugin::getModuleForm()
{
    return _widget;
}

extern "C" IPlugin * createPlugin()
{
    return new LoopTestViewPlugin();
}
