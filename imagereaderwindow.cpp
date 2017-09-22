#include "imagereaderwindow.h"

ImageReaderWindow::ImageReaderWindow(QWidget *parent)
    : QWidget(parent)
{
    QHBoxLayout* hLayout = new QHBoxLayout();
    QVBoxLayout* vLayout = new QVBoxLayout();

    this->loading = new QPushButton ("Load");
    this->ligne = new QLineEdit();
    this->text = new QTextEdit();
    this->file = new QFileDialog();

    this->text->setFontFamily("Courier");

    hLayout->addWidget(this->ligne);
    hLayout->addWidget(this->loading);
    vLayout->addLayout(hLayout);
    vLayout->addWidget(this->text);

    this->setLayout(vLayout);


    connect(this->loading,SIGNAL(released()), this, SLOT(load()));
    connect(this->ligne,SIGNAL(selectionChanged()), this->file, SLOT(exec()));
    connect(this->file, SIGNAL(fileSelected(QString)), this, SLOT(openmonfichierpd(QString)));
}

ImageReaderWindow::~ImageReaderWindow() {}

void  ImageReaderWindow::load() {
     ImageReader* reader = ImageReaderFactory::createImageReader(ligne->text());

     vector<QString> data = reader->readFile();
     this->text->clear();

     for (auto line: data)
        this->text->append(line);
}

void ImageReaderWindow::openmonfichierpd(QString path) {
    this->ligne->setText(path);
}
