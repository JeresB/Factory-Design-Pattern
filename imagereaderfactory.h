#ifndef IMAGEREADERFACTORY_H
#define IMAGEREADERFACTORY_H

#include "format1imagereader.h"
#include "format2imagereader.h"

class ImageReaderFactory
{
public:
    ImageReaderFactory();
    static ImageReader* createImageReader(QString path);
};

#endif // IMAGEREADERFACTORY_H
