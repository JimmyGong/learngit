#include "barcodeviewform.h"

#include "util.h"
#include "message.h"
#include "plugin_global.h"
#include "qlog.h"
//
#include <QHBoxLayout>
#include <QLabel>
#include <QCheckBox>
#include <QGridLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QSet>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QDialog>
//
#include <QToolBar>
#include <QToolButton>
//
static const QString& Barcode_PANNEL = "Barcode Pannel";
//
BarcodeViewForm::BarcodeViewForm(IPlugin *plugIn, QWidget *parent) : IModuleForm(plugIn, parent)
{
    _plugin = plugIn;
    setupUI();
    this->setWindowTitle("BarcodeView");
    this->setWindowFlags(Qt::Widget | Qt::WindowCloseButtonHint);
}

BarcodeViewForm::~BarcodeViewForm()
{

}

//垂直布局
QVBoxLayout* BarcodeViewForm::createBarcodeEditsGroup(const QString& text)
{
    QVBoxLayout* vLayout1 = new QVBoxLayout;//1个垂直布局
    QLabel* title = new QLabel();
    title->setText(text);
    title->setAlignment(Qt::AlignHCenter);
    title->setStyleSheet("color: rgb(31, 131, 19);");
    title->setFont(QFont( "Bodoni 72" , 30 ));
    //title->setFont(QFont( "Bodoni 72" , 30 ,  QFont::Bold) );

    QLineEdit* lineEdit1 = new QLineEdit();
//    lineEdit1->setStyleSheet("font-size : 50px");
    lineEdit1->setFont(QFont( "Timers" , 50 ,  QFont::Bold));

    QLineEdit* lineEdit2 = new QLineEdit();
//    lineEdit2->setStyleSheet("font-size : 50px");
    lineEdit2->setFont(QFont( "Timers" , 50 ,  QFont::Bold));

    QLineEdit* lineEdit3 = new QLineEdit();
//    lineEdit3->setStyleSheet("font-size : 50px");
    lineEdit3->setFont(QFont( "Timers" , 50 ,  QFont::Bold));

    QLineEdit* lineEdit4 = new QLineEdit();
//    lineEdit4->setStyleSheet("font-size : 50px");
    lineEdit4->setFont(QFont( "Timers" , 50 ,  QFont::Bold));

    vLayout1->addStretch(1);
    vLayout1->addWidget(title);
    vLayout1->addWidget(lineEdit1);
    vLayout1->addWidget(lineEdit2);
    vLayout1->addWidget(lineEdit3);
    vLayout1->addWidget(lineEdit4);

    return vLayout1;
}

void BarcodeViewForm::setupUI(int m,int n)//M行，N列的显示控件(QTextBox)
{
    if(m < 1 || n < 1)
    {
        return;//
    }
}

void BarcodeViewForm::setupUI()//4行2列的显示控件(QTextBox)
{
    _showFormAct = UIUtil::createWidgetWithName<QAction>(Barcode_PANNEL);
    connect(_showFormAct, SIGNAL(triggered()), this, SLOT(onShowForm()));
    connect(cancelBtn, SIGNAL(clicked()), this, SLOT(on_cancelBtn_clicked()));

    QHBoxLayout* hLayout1 = new QHBoxLayout;//1个水平布局
    QVBoxLayout* vLayout1 = new QVBoxLayout;//1个垂直布局
    QHBoxLayout* hLayout2 = new QHBoxLayout;//1个水平布局

    QVBoxLayout* v1 = createBarcodeEditsGroup("MLB#");
    QVBoxLayout* v2 = createBarcodeEditsGroup("CFG#");
    //
    cancelBtn = new QPushButton();
    cancelBtn->setText("Cancel");
    cancelBtn->setFont(QFont( "" , 50 ,  QFont::Normal));
    cancelBtn->setStyleSheet("color: Black");
    //
    hLayout1->addStretch(1);
    hLayout1->addLayout(v1);
    hLayout1->addLayout(v2);
    hLayout1->addStretch(1);
    //
    hLayout2->addStretch(1);
    hLayout2->addWidget(cancelBtn);
    hLayout2->addStretch(1);
    //
//    vLayout1->addStretch(1);
    vLayout1->addLayout(hLayout1);
    vLayout1->addLayout(hLayout2);
//    vLayout1->addStretch(1);

//    this->resize(600,400);
    this->setFixedSize(600,400);
    this->setLayout(vLayout1);
}

void BarcodeViewForm::on_cancelBtn_clicked()
{
    close();
}

void BarcodeViewForm::onStop()
{

}

bool BarcodeViewForm::init()
{
    return true;
}

void BarcodeViewForm::clear()
{

}

QVector<QAction*> BarcodeViewForm::getActions()
{
    return QVector<QAction*>() << _showFormAct;
}

void BarcodeViewForm::onShowForm()
{
    QDialog* dlg = NULL;
    if (_ownerWgt != NULL)
        dlg = new QDialog(_ownerWgt);
    else
        dlg = new QDialog();

    dlg->setWindowTitle("扫描码显示调试板");  
    QHBoxLayout* h1 = new QHBoxLayout();
    h1->addWidget(this);
    h1->setContentsMargins(0,0,0,0);
    dlg->setLayout(h1);
    dlg->resize(600, 400);
    dlg->show();

    //dlg 内存需要处理，暂时先放着
}

