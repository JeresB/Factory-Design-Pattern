#include "imagereader.h"

ImageReader::ImageReader(QString path) {
    this->path = path;
    this->file = NULL;
    this->textStream = NULL;
}

ImageReader::~ImageReader() {}

void ImageReader::openfile() {
    this->file = new QFile(this->path);
    qDebug() << "Chemin : " + this->path;
    if(file->open(QIODevice::ReadOnly | QIODevice::Text))
        textStream = new QTextStream(*&this->file);
    else {
        qDebug() << "Erreur lors de l'ouverture du fichier";
        return;
    }
}
