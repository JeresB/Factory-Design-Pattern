#include "imagereaderfactory.h"

ImageReaderFactory::ImageReaderFactory() {}

ImageReader* ImageReaderFactory::createImageReader(QString path){
    if (path.endsWith(".fm1"))
        return new Format1ImageReader(path);

    if (path.endsWith(".fm2"))
        return new Format2ImageReader(path);
}
