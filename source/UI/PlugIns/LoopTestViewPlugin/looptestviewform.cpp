#include "looptestviewform.h"
//
#include "util.h"
#include "message.h"
#include "plugin_global.h"
#include "qlog.h"
//
#include <QHBoxLayout>
#include <QLabel>
#include <QGridLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QDialog>
#include <QMovie>
//
#include <QToolBar>
#include <QToolButton>
//
static const QString& LOOPTEST_PANNEL = "LoopTest Pannel";
//
LoopTestViewForm::LoopTestViewForm(IPlugin *plugIn, QWidget *parent) : IModuleForm(plugIn, parent)
{
    _plugin = plugIn;
    setupUi();
    this->setWindowTitle("LoopTestView");
    this->setWindowFlags(Qt::Widget | Qt::WindowCloseButtonHint);
}

LoopTestViewForm::~LoopTestViewForm(){}

bool LoopTestViewForm::init()
{

}

void LoopTestViewForm::clear()
{

}

QVector<QAction*> LoopTestViewForm::getActions()
{
    return QVector<QAction*>() << _showFormAct;
}


void LoopTestViewForm::setupUi()
{
    _showFormAct = UIUtil::createWidgetWithName<QAction>(LOOPTEST_PANNEL);
    connect(_showFormAct, SIGNAL(triggered()), this, SLOT(onShowForm()));

    //4个水平布局
    QHBoxLayout* h1 = new QHBoxLayout;
    QHBoxLayout* h2 = new QHBoxLayout;
    QHBoxLayout* h3 = new QHBoxLayout;
    QHBoxLayout* h4 = new QHBoxLayout;

    //1个垂直布局
    QVBoxLayout* vMain = new QVBoxLayout;

    //5个QLabel
    label1 = new QLabel;
    label1->setText("  Loop Count:");
    label1->setAlignment(Qt::AlignRight);

    label2 = new QLabel;
    label2->setText("Time Interval:");
    label2->setAlignment(Qt::AlignRight);

    label3 = new QLabel;
    label3->setText("Current Loop:");
    label3->setAlignment(Qt::AlignRight);

    label4 = new QLabel;
    label4->setText("0");
    label4->setAlignment(Qt::AlignLeft);

    label5 = new QLabel;
    label5->resize(20,20);
    progressCircle = new QMovie(":/Resources/progressCircle.gif");
    progressCircle->setScaledSize(label5->size());
    label5->setMovie(progressCircle);
    progressCircle->start();
    progressCircle->stop();
    label5->setAlignment(Qt::AlignHCenter);

    //2个QPushButton
    btnLoopIn = new QPushButton("Loop In");
    connect(btnLoopIn, SIGNAL(clicked()), this, SLOT(progressCircleStart()));
    btnLoopOut = new QPushButton("Loop Out");
    connect(btnLoopOut, SIGNAL(clicked()), this, SLOT(progressCircleStop()));

    //2个QLineEdit
    lineEditLoopCount = new QLineEdit;
    lineEditLoopCount->setText("10");
    lineEditLoopCount->resize(30, 20);

    lineEditInterval = new QLineEdit;
    lineEditInterval->setText("2");
    lineEditInterval->resize(30, 20);

    h1->addWidget(label1);
    h1->addWidget(lineEditLoopCount);
    h1->addStretch(1);

    h2->addWidget(label2);
    h2->addWidget(lineEditInterval);
    h2->addStretch(1);

    h3->addWidget(label3);
    h3->addWidget(label4);
    h3->addStretch(1);

    h4->addStretch(1);
    h4->addWidget(btnLoopIn);
    h4->addWidget(btnLoopOut);
    h4->addStretch(1);

    vMain->addStretch(1);
    vMain->addLayout(h1);
    vMain->addSpacing(1);
    vMain->addLayout(h2);
    vMain->addSpacing(1);
    vMain->addLayout(h3);
    vMain->addSpacing(1);
    vMain->addWidget(label5);
    vMain->addSpacing(1);
    vMain->addLayout(h4);
    vMain->addStretch(1);

    this->setLayout(vMain);
}

void LoopTestViewForm::onShowForm()//用于界面显示
{
    QDialog* dlg = NULL;
    if (_ownerWgt != NULL)
        dlg = new QDialog(_ownerWgt);
    else
        dlg = new QDialog();

    dlg->setWindowTitle("LoopTestView调试板");
    QHBoxLayout* h1 = new QHBoxLayout();
    h1->addWidget(this);
    h1->setContentsMargins(0,0,0,0);
    dlg->setLayout(h1);
//    dlg->resize(240, 180);
    dlg->setFixedSize(240, 180);
    dlg->show();

    //dlg 内存需要处理，暂时先放着
}

void LoopTestViewForm::progressCircleStop()//槽函数,停止进度环
{
    progressCircle->stop();
//    progressCircle->
}

void LoopTestViewForm::progressCircleStart()//槽函数，启动进度环
{
    progressCircle->start();
}
