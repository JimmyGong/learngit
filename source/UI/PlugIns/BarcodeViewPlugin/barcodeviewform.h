#ifndef BARCODEVIEWFORM_H
#define BARCODEVIEWFORM_H

#include <QWidget>
#include <QVector>
#include "plugin_global.h"

class UutButton;
class QPushButton;
class QCheckBox;
class QLabel;
class QLineEdit;
class QTextEdit;
class QHBoxLayout;
class QVBoxLayout;
class IPugin;
//
class QToolBar;
class QToolButton;
//
class BarcodeViewForm : public IModuleForm
{
    Q_OBJECT

public:
    explicit BarcodeViewForm(IPlugin* plugIn, QWidget* parent = 0);
    ~BarcodeViewForm();

    void onCancelDisp();//Todo    
    virtual bool init();
    virtual void clear();
    virtual QVector<QAction*> getActions();
//    QToolBar* createToolBar();
    void onChanelStateMsg(int index, int result);
    void onSeqStart(int index, const QString& data);
    void onSeqEnd(int index, const QString& data);

private:
    void setupUI(int x, int y);
    void setupUI();

    QVBoxLayout* createBarcodeEditsGroup(const QString& text);


private slots:
    void on_cancelBtn_clicked();
    void onStop();
    void onShowForm();


private:
    void connectBtnSingal(QPushButton* btn, bool isConnect);//Todo

private:
    IPlugin* _plugin;

    QLineEdit* _lineEdits1[4];
    QLineEdit* _lineEdits2[4];

    QLabel* _label1;
    QLabel* _label2;

    QPushButton* cancelBtn;

    QVector<QTextEdit*> _msgList;
    QAction* _showFormAct;

};

#endif // BARCODEVIEWFORM_H
