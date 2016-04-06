#ifndef LOOPTESTVIEWFORM_H
#define LOOPTESTVIEWFORM_H

#include <QWidget>
#include <QVector>
#include "plugin_global.h"

class QPushButton;
class QLabel;
class QLineEdit;
class QTextEdit;
class QPushButton;
class QHBoxLayout;
class QVBoxLayout;
class IPugin;
//
class QToolBar;
class QToolButton;
//
class LoopTestViewForm : public IModuleForm
{
    Q_OBJECT

public:
    explicit LoopTestViewForm(IPlugin* plugIn, QWidget* parent = 0);
    ~LoopTestViewForm();

    virtual bool init();
    virtual void clear();
    virtual QVector<QAction*> getActions();

private:
    void setupUi();

private slots:
    void onShowForm();
    void progressCircleStop();
    void progressCircleStart();

private:
    IPlugin* _plugin;
    QVector<QTextEdit*> _msgList;
    QAction* _showFormAct;
    //
    QLabel* label1;//
    QLabel* label2;//
    QLabel* label3;
    QLabel* label4;
    QLabel* label5;
    //
    QLineEdit* lineEditLoopCount;
    QLineEdit* lineEditInterval;
    //
    QMovie* progressCircle;//用来显示进度圈的
    //
    QPushButton* btnLoopIn;//
    QPushButton* btnLoopOut;//

};


#endif // LOOPTESTVIEWFORM_H
