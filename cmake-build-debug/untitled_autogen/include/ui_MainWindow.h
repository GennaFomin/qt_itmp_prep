/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QWidget>

namespace Ui {

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionClose;
    QAction *actionExit;
    QWidget *centralwidget;
    QMenuBar *menuBar;
    QMenu *menuFile;

    void setupUi(QMainWindow *Ui__MainWindow)
    {
        if (Ui__MainWindow->objectName().isEmpty())
            Ui__MainWindow->setObjectName(QString::fromUtf8("Ui__MainWindow"));
        Ui__MainWindow->resize(574, 364);
        actionOpen = new QAction(Ui__MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionClose = new QAction(Ui__MainWindow);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        actionExit = new QAction(Ui__MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralwidget = new QWidget(Ui__MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        Ui__MainWindow->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(Ui__MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 574, 37));
        menuBar->setNativeMenuBar(false);
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        Ui__MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionClose);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);

        retranslateUi(Ui__MainWindow);

        QMetaObject::connectSlotsByName(Ui__MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *Ui__MainWindow)
    {
        Ui__MainWindow->setWindowTitle(QCoreApplication::translate("Ui::MainWindow", "MainWindow", nullptr));
        actionOpen->setText(QCoreApplication::translate("Ui::MainWindow", "Open...", nullptr));
        actionClose->setText(QCoreApplication::translate("Ui::MainWindow", "Close...", nullptr));
        actionExit->setText(QCoreApplication::translate("Ui::MainWindow", "Exit", nullptr));
#if QT_CONFIG(shortcut)
        actionExit->setShortcut(QCoreApplication::translate("Ui::MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        menuFile->setTitle(QCoreApplication::translate("Ui::MainWindow", "File", nullptr));
    } // retranslateUi

};

} // namespace Ui

namespace Ui {
namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui
} // namespace Ui

#endif // UI_MAINWINDOW_H
