#include <QWidget>
#include <QApplication>
#include "plusminus.h"
#include "absolute.h"
#include "vertical_box.h"
#include "buttons.h"
#include "nesting.h"
#include "move.h"
#include "timer.h"
#include "ledit.h"
#include "lines.h"
#include "application.h"
#include "snake.h"

int main(int argc, char* argv[]){
    QApplication app(argc,argv);

//    plusminus window;
//    window.resize(300,190);
//    window.setWindowTitle("Plus minus");
//    window.show();

//    Absolute window;

//    window.setWindowTitle("Absolute");
//    window.show();

//    Vertical_box window;

//    window.setWindowTitle("VerticalBox");
//    window.show();

//    Buttons window;

//    window.setWindowTitle("Buttons");
//    window.show();

//    Nesting window;

//    window.setWindowTitle("Nesting");
//    window.show();

//    Move window;

//    window.resize(250, 150);
//    window.setWindowTitle("Move");
//    window.show();

//    Timer window;

//    window.resize(250, 150);
//    window.setWindowTitle("Timer");
//    window.show();

//    Ledit window;

//    window.setWindowTitle("QLineEdit");
//    window.show();

//    Lines window;

//    window.resize(280, 400);
//    window.setWindowTitle("Lines");
//    window.show();

//    Application window;

//    window.resize(370, 200);
//     window.setWindowTitle("The Burning widget");
//     window.show();

    Snake window;

     window.setWindowTitle("Snake");
     window.show();

    return app.exec();
}
