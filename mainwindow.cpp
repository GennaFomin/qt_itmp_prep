//
// Created by Геннадий Фомин on 25.05.2022.
//

// You may need to build the project (run Qt uic code generator) to get "ui_MainWindow.h" resolved

#include "mainwindow.h"
#include "ui_MainWindow.h"

#include <QFileDialog>
#include <QString>

namespace Ui
{
    MainWindow::MainWindow(QWidget *parent)
    :   QMainWindow(parent)
    , ui(new Ui::MainWindow)
    {
        ui->setupUi(this);

        Storage* _storage = new Storage(this);

    }


    void MainWindow::on_actionOpen_triggered()
    {
        QString fileName = QFileDialog::getOpenFileName(
                this,
                "Open File",
                "",
                "Text files (*.txt);;All files (*.*)");

        if(fileName.isNull())
            return;


    }

    void MainWindow::on_actionClose_triggered()
    {
        return;
    }

    void MainWindow::on_actionExit_triggered()
    {
        close();
    }

    MainWindow::~MainWindow()
    {
        delete ui;
    }
}