#ifndef IMAGEREADERWINDOW_H
#define IMAGEREADERWINDOW_H

#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QTextEdit>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QFileDialog>

#include "imagereader.h"
#include "imagereaderfactory.h"

class ImageReaderWindow : public QWidget
{
    Q_OBJECT

public:
    ImageReaderWindow(QWidget *parent = 0);
    ~ImageReaderWindow();

private :
    QPushButton* loading;
    QLineEdit* ligne;
    QTextEdit*  text;
    QFileDialog* file;

public slots :
    void load();
    void openmonfichierpd(QString path);
};

#endif // IMAGEREADERWINDOW_H
