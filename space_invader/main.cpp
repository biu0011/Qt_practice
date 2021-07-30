#include <QApplication>
#include <QGraphicsScene>
#include <QImage>
#include <QGraphicsView>
#include <QLabel>
#include <QMediaPlayer>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QGraphicsScene *scene = new QGraphicsScene();
    QImage *image = new QImage("./iamges/ship.png");
    QLabel *label = new QLabel();
    label -> show();

    QMediaPlayer* wvplayer = new QMediaPlayer();
    wvplayer->setMedia(QUrl::fromLocalFile("C:\\BCI2000.x64\\src\\custom\\AnnaRaymondStoryApp\\Audio\\Waking_Up_edited.wav"));
    wvplayer->play();



    return a.exec();
}
