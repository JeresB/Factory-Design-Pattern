#include "format1imagereader.h"

Format1ImageReader::Format1ImageReader(QString path):ImageReader(path) {}

vector<QString> Format1ImageReader::readFile() {
    vector<QString> data;
    QString line;

    openfile();

    int width = this->textStream->readLine().toInt();
    int height = this->textStream->readLine().toInt();

    for (auto i = 0; i < height; i++) {
        line = "";
        for (auto j = 0; j < width; j++)
            line += this->textStream->readLine();
        data.push_back(line);
    }

    return data;
}
