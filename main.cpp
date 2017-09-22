#include "imagereaderwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ImageReaderWindow w;
    w.show();

    return a.exec();
}
