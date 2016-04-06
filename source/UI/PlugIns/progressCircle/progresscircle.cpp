#include "progresscircle.h"


ProgressCircle::ProgressCircle(QWidget *parent)
{
    gifMovie = new QMovie(gifPath);
    this->setMovie(gifMovie);
}

ProgressCircle::~ProgressCircle(){}

void ProgressCircle::startGif()
{
    gifMovie->start();
}

void ProgressCircle::stopGif()
{
    gifMovie->stop();
}

bool ProgressCircle::configGifFilePath(QString &path)
{
    gifMovie = new QMovie(path);
}

void ProgressCircle::dispGif()
{

}

void ProgressCircle::hideGif()
{

}

void ProgressCircle::setupUi(QString & gifFilePath)
{
    gifMovie = new QMovie(gifFilePath);

};

