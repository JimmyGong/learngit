#ifndef CONST_H
#define CONST_H

#include <QString>

static const QString& InteractionViewPluginName = "libInteractionViewPlugin";
static const QString& DetailViewPluginName = "libDetailViewPlugin";
static const QString& ScopeViewPluginName = "libcopeViewPlugin";
static const QString& DutViewPluginName = "libDutViewPlugin";
static const QString& FctViewPluginName = "libFctViewPlugin";
static const QString& BarcodeViewPluginName = "libBarcodeViewPlugin";//
static const QString& LoopTestViewPluginName = "libLoopTestViewPlugin";//

static const int SEQ_NUM = 6;
static const int ENG_NUM = 6;
static const int SM_NUM = 1;

static const int& TIME_OUT = 3000;

//插件处理策略
enum EStrategyID
{
    InActive = 0, //非激活
    Active, //激活
    All = 2 //全部
};


#endif
