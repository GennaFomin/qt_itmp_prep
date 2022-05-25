//
// Created by Геннадий Фомин on 25.05.2022.
//

#ifndef UNTITLED_MAINWINDOW_H
#define UNTITLED_MAINWINDOW_H

#include <QMainWindow>

#include "storage.h"

namespace Ui {
    QT_BEGIN_NAMESPACE
    namespace Ui { class MainWindow; }
    QT_END_NAMESPACE

    class MainWindow : public QMainWindow
    {
        Q_OBJECT

    public:
        explicit MainWindow(QWidget *parent = nullptr);

        ~MainWindow() override;

    private slots:

        void on_actionOpen_triggered();

        void on_actionExit_triggered();

        void on_actionClose_triggered();

    protected:

        Storage* _storage;

    private:
        Ui::MainWindow *ui;
    };
} // Ui

#endif //UNTITLED_MAINWINDOW_H
