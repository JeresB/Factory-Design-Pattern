#ifndef FORMAT2IMAGEREADER_H
#define FORMAT2IMAGEREADER_H

#include "imagereader.h"

class Format2ImageReader : public ImageReader
{
public:
    Format2ImageReader(QString path);
    virtual vector<QString> readFile();
};

#endif // FORMAT2IMAGEREADER_H
