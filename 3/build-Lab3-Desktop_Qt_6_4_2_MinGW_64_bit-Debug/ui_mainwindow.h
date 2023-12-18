/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *openFile;
    QLabel *curFile;
    QPushButton *histogram;
    QPushButton *linearContrast;
    QPushButton *segmentation;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *original;
    QLabel *transformed;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1200, 650);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        openFile = new QPushButton(centralwidget);
        openFile->setObjectName("openFile");
        openFile->setGeometry(QRect(20, 20, 93, 29));
        curFile = new QLabel(centralwidget);
        curFile->setObjectName("curFile");
        curFile->setGeometry(QRect(150, 19, 651, 31));
        histogram = new QPushButton(centralwidget);
        histogram->setObjectName("histogram");
        histogram->setGeometry(QRect(20, 90, 191, 29));
        linearContrast = new QPushButton(centralwidget);
        linearContrast->setObjectName("linearContrast");
        linearContrast->setGeometry(QRect(270, 90, 121, 29));
        segmentation = new QPushButton(centralwidget);
        segmentation->setObjectName("segmentation");
        segmentation->setGeometry(QRect(460, 90, 101, 29));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 140, 63, 20));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(810, 140, 121, 20));
        original = new QLabel(centralwidget);
        original->setObjectName("original");
        original->setGeometry(QRect(20, 180, 500, 400));
        transformed = new QLabel(centralwidget);
        transformed->setObjectName("transformed");
        transformed->setGeometry(QRect(610, 180, 500, 400));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1200, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "ProcessingImages", nullptr));
        openFile->setText(QCoreApplication::translate("MainWindow", "Open File", nullptr));
        curFile->setText(QCoreApplication::translate("MainWindow", "Cur File: ", nullptr));
        histogram->setText(QCoreApplication::translate("MainWindow", "Histogram equalization", nullptr));
        linearContrast->setText(QCoreApplication::translate("MainWindow", "Linear Contrast", nullptr));
        segmentation->setText(QCoreApplication::translate("MainWindow", "Segmentation", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Original", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Transformed", nullptr));
        original->setText(QString());
        transformed->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
