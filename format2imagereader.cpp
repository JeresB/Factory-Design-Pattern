#include "format2imagereader.h"

Format2ImageReader::Format2ImageReader(QString path):ImageReader(path) {}

vector<QString> Format2ImageReader::readFile() {
    vector<QString> data;
    QString line = "";

    openfile();

    int width = this->textStream->readLine().toInt();
    QString temp = this->textStream->readLine();

    for (auto i =0; i < temp.size(); i++) {
        if (i%width == 0) {
            data.push_back(line);
            line = "";
        }
        line += temp[i];
    }

    data.push_back(line);

    return data;
}
