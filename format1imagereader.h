#ifndef FORMAT1IMAGEREADER_H
#define FORMAT1IMAGEREADER_H

#include "imagereader.h"

class Format1ImageReader : public ImageReader {

public:
    Format1ImageReader(QString path);
    virtual vector<QString> readFile();
};

#endif // FORMAT1IMAGEREADER_H
