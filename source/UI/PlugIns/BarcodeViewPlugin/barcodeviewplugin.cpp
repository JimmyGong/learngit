#include "barcodeviewplugin.h"
#include "barcodeviewform.h"
#include "const.h"
#include "message.h"

BarcodeViewPlugin::BarcodeViewPlugin()
{
    _name = BarcodeViewPluginName;
    _pluginType = EPluginType::Tool;
    _widget = NULL;
}

BarcodeViewPlugin::~BarcodeViewPlugin()
{

}

int BarcodeViewPlugin::init()
{
    _widget = new BarcodeViewForm(this);
    return 0;
}

void BarcodeViewPlugin::fini()
{
    if(NULL != _widget)
    {
        _widget->setParent(NULL);
        delete _widget;
        _widget = NULL;
    }
}

int BarcodeViewPlugin::onMessage(const IMessage* msg)
{
    return 0;
}

bool BarcodeViewPlugin::isHandleMessage(const IMessage* msg)
{
    //先判断是否同个组，如不是，直接返回
    if (!_pluginType & msg->groupType())
        return false;

    return true;
}

IModuleForm *BarcodeViewPlugin::getModuleForm()
{
    return _widget;
}

extern "C" IPlugin * createPlugin()
{
    return new BarcodeViewPlugin();
}
