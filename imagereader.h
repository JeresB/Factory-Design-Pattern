#ifndef IMAGEREADER_H
#define IMAGEREADER_H

#include <QFile>
#include <QTextStream>
#include "vector"
#include <QDebug>

using namespace std;

class ImageReader
{

public:
    ImageReader(QString path);
    virtual ~ImageReader();

    virtual vector<QString> readFile() = 0;

protected:
    void openfile();

    QFile* file;
    QTextStream* textStream;
    QString path;
};

#endif // IMAGEREADER_H
