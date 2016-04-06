#ifndef PROGRESSCIRCLE_H
#define PROGRESSCIRCLE_H

#include <QWidget>
#include <QLabel>
#include <QString>
#include <QMovie>


class ProgressCircle : public QLabel
{
    Q_OBJECT

public:
    explicit ProgressCircle(QWidget* parent = 0);

    ~ProgressCircle();

signals:


public slots:
    //启动动画显示
    void startGif();

    //停止动画显示
    void stopGif();

    //设置加载的GIF文件路径
    bool configGifFilePath(QString & path);

    //显示Gif
    void dispGif();

    //隐藏Gif
    void hideGif();

private:
    //初始化
    void setupUi(QString & gifPath);

private:
    QMovie* gifMovie;
    QString gifPath = ":/Resources/progressCircle.gif";

};




#endif // PROGRESSCIRCLE_H
