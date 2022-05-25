//
// Created by Геннадий Фомин on 25.05.2022.
//

#ifndef UNTITLED_STORAGE_H
#define UNTITLED_STORAGE_H

#include <QObject>

class Storage : public QObject
{
    Q_OBJECT
public:
    explicit Storage(QObject *parent = nullptr);
public:

    void loadFile(const QString& fileName);

    signals:
            void onLoad();

};


#endif //UNTITLED_STORAGE_H
