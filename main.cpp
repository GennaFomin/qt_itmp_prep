#include <QApplication>
#include <QPushButton>

#include "mainwindow.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    Ui::MainWindow w;
    w.show();
    return QApplication::exec();
}
