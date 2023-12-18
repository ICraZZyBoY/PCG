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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *color;
    QPushButton *pushButton;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *redEdit;
    QLineEdit *greenEdit;
    QSlider *redSlider;
    QLabel *redLabel;
    QLabel *greenLabel;
    QLabel *redLabel2;
    QLineEdit *blueEdit;
    QLabel *blueLabel2;
    QLabel *blueLabel;
    QLabel *greenLabel2;
    QSlider *greenSlider;
    QSlider *blueSlider;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLineEdit *LEdit;
    QLineEdit *aEdit;
    QSlider *LSlider;
    QLabel *aLabel;
    QLabel *LLabel2;
    QLineEdit *bEdit;
    QLabel *bLabel2;
    QLabel *bLabel;
    QLabel *aLabel2;
    QSlider *aSlider;
    QSlider *bSlider;
    QLabel *LLabel;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QLineEdit *hueEdit;
    QLineEdit *saturationEdit;
    QSlider *hueSlider;
    QLabel *hueLabel;
    QLabel *saturationLabel;
    QLabel *hueLabel2;
    QLineEdit *valueEdit;
    QLabel *valueLabel2;
    QLabel *valueLabel;
    QLabel *saturationLabel2;
    QSlider *saturationSlider;
    QSlider *valueSlider;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        color = new QLabel(centralwidget);
        color->setObjectName("color");
        color->setGeometry(QRect(270, 10, 261, 221));
        color->setStyleSheet(QString::fromUtf8("background-color: black;"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(330, 240, 131, 29));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(30, 310, 197, 196));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        redEdit = new QLineEdit(gridLayoutWidget);
        redEdit->setObjectName("redEdit");

        gridLayout->addWidget(redEdit, 3, 0, 1, 1);

        greenEdit = new QLineEdit(gridLayoutWidget);
        greenEdit->setObjectName("greenEdit");

        gridLayout->addWidget(greenEdit, 4, 0, 1, 1);

        redSlider = new QSlider(gridLayoutWidget);
        redSlider->setObjectName("redSlider");
        redSlider->setAcceptDrops(false);
        redSlider->setMaximum(255);
        redSlider->setValue(0);
        redSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(redSlider, 0, 0, 1, 1);

        redLabel = new QLabel(gridLayoutWidget);
        redLabel->setObjectName("redLabel");

        gridLayout->addWidget(redLabel, 0, 1, 1, 1);

        greenLabel = new QLabel(gridLayoutWidget);
        greenLabel->setObjectName("greenLabel");

        gridLayout->addWidget(greenLabel, 1, 1, 1, 1);

        redLabel2 = new QLabel(gridLayoutWidget);
        redLabel2->setObjectName("redLabel2");

        gridLayout->addWidget(redLabel2, 3, 1, 1, 1);

        blueEdit = new QLineEdit(gridLayoutWidget);
        blueEdit->setObjectName("blueEdit");

        gridLayout->addWidget(blueEdit, 5, 0, 1, 1);

        blueLabel2 = new QLabel(gridLayoutWidget);
        blueLabel2->setObjectName("blueLabel2");

        gridLayout->addWidget(blueLabel2, 5, 1, 1, 1);

        blueLabel = new QLabel(gridLayoutWidget);
        blueLabel->setObjectName("blueLabel");

        gridLayout->addWidget(blueLabel, 2, 1, 1, 1);

        greenLabel2 = new QLabel(gridLayoutWidget);
        greenLabel2->setObjectName("greenLabel2");

        gridLayout->addWidget(greenLabel2, 4, 1, 1, 1);

        greenSlider = new QSlider(gridLayoutWidget);
        greenSlider->setObjectName("greenSlider");
        greenSlider->setAcceptDrops(false);
        greenSlider->setMaximum(255);
        greenSlider->setValue(0);
        greenSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(greenSlider, 1, 0, 1, 1);

        blueSlider = new QSlider(gridLayoutWidget);
        blueSlider->setObjectName("blueSlider");
        blueSlider->setAcceptDrops(false);
        blueSlider->setMaximum(255);
        blueSlider->setPageStep(10);
        blueSlider->setValue(0);
        blueSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(blueSlider, 2, 0, 1, 1);

        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(290, 310, 197, 196));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        LEdit = new QLineEdit(gridLayoutWidget_2);
        LEdit->setObjectName("LEdit");

        gridLayout_2->addWidget(LEdit, 3, 0, 1, 1);

        aEdit = new QLineEdit(gridLayoutWidget_2);
        aEdit->setObjectName("aEdit");

        gridLayout_2->addWidget(aEdit, 4, 0, 1, 1);

        LSlider = new QSlider(gridLayoutWidget_2);
        LSlider->setObjectName("LSlider");
        LSlider->setAcceptDrops(false);
        LSlider->setMaximum(100);
        LSlider->setValue(0);
        LSlider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(LSlider, 0, 0, 1, 1);

        aLabel = new QLabel(gridLayoutWidget_2);
        aLabel->setObjectName("aLabel");

        gridLayout_2->addWidget(aLabel, 1, 1, 1, 1);

        LLabel2 = new QLabel(gridLayoutWidget_2);
        LLabel2->setObjectName("LLabel2");

        gridLayout_2->addWidget(LLabel2, 3, 1, 1, 1);

        bEdit = new QLineEdit(gridLayoutWidget_2);
        bEdit->setObjectName("bEdit");

        gridLayout_2->addWidget(bEdit, 5, 0, 1, 1);

        bLabel2 = new QLabel(gridLayoutWidget_2);
        bLabel2->setObjectName("bLabel2");

        gridLayout_2->addWidget(bLabel2, 5, 1, 1, 1);

        bLabel = new QLabel(gridLayoutWidget_2);
        bLabel->setObjectName("bLabel");

        gridLayout_2->addWidget(bLabel, 2, 1, 1, 1);

        aLabel2 = new QLabel(gridLayoutWidget_2);
        aLabel2->setObjectName("aLabel2");

        gridLayout_2->addWidget(aLabel2, 4, 1, 1, 1);

        aSlider = new QSlider(gridLayoutWidget_2);
        aSlider->setObjectName("aSlider");
        aSlider->setAcceptDrops(false);
        aSlider->setMinimum(-128);
        aSlider->setMaximum(127);
        aSlider->setValue(-128);
        aSlider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(aSlider, 1, 0, 1, 1);

        bSlider = new QSlider(gridLayoutWidget_2);
        bSlider->setObjectName("bSlider");
        bSlider->setAcceptDrops(false);
        bSlider->setMinimum(-128);
        bSlider->setMaximum(127);
        bSlider->setPageStep(10);
        bSlider->setValue(-128);
        bSlider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(bSlider, 2, 0, 1, 1);

        LLabel = new QLabel(gridLayoutWidget_2);
        LLabel->setObjectName("LLabel");

        gridLayout_2->addWidget(LLabel, 0, 1, 1, 1);

        gridLayoutWidget_3 = new QWidget(centralwidget);
        gridLayoutWidget_3->setObjectName("gridLayoutWidget_3");
        gridLayoutWidget_3->setGeometry(QRect(560, 310, 197, 196));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        hueEdit = new QLineEdit(gridLayoutWidget_3);
        hueEdit->setObjectName("hueEdit");

        gridLayout_3->addWidget(hueEdit, 3, 0, 1, 1);

        saturationEdit = new QLineEdit(gridLayoutWidget_3);
        saturationEdit->setObjectName("saturationEdit");

        gridLayout_3->addWidget(saturationEdit, 4, 0, 1, 1);

        hueSlider = new QSlider(gridLayoutWidget_3);
        hueSlider->setObjectName("hueSlider");
        hueSlider->setAcceptDrops(false);
        hueSlider->setMaximum(359);
        hueSlider->setValue(0);
        hueSlider->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(hueSlider, 0, 0, 1, 1);

        hueLabel = new QLabel(gridLayoutWidget_3);
        hueLabel->setObjectName("hueLabel");

        gridLayout_3->addWidget(hueLabel, 0, 1, 1, 1);

        saturationLabel = new QLabel(gridLayoutWidget_3);
        saturationLabel->setObjectName("saturationLabel");

        gridLayout_3->addWidget(saturationLabel, 1, 1, 1, 1);

        hueLabel2 = new QLabel(gridLayoutWidget_3);
        hueLabel2->setObjectName("hueLabel2");

        gridLayout_3->addWidget(hueLabel2, 3, 1, 1, 1);

        valueEdit = new QLineEdit(gridLayoutWidget_3);
        valueEdit->setObjectName("valueEdit");

        gridLayout_3->addWidget(valueEdit, 5, 0, 1, 1);

        valueLabel2 = new QLabel(gridLayoutWidget_3);
        valueLabel2->setObjectName("valueLabel2");

        gridLayout_3->addWidget(valueLabel2, 5, 1, 1, 1);

        valueLabel = new QLabel(gridLayoutWidget_3);
        valueLabel->setObjectName("valueLabel");

        gridLayout_3->addWidget(valueLabel, 2, 1, 1, 1);

        saturationLabel2 = new QLabel(gridLayoutWidget_3);
        saturationLabel2->setObjectName("saturationLabel2");

        gridLayout_3->addWidget(saturationLabel2, 4, 1, 1, 1);

        saturationSlider = new QSlider(gridLayoutWidget_3);
        saturationSlider->setObjectName("saturationSlider");
        saturationSlider->setAcceptDrops(false);
        saturationSlider->setMaximum(255);
        saturationSlider->setValue(0);
        saturationSlider->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(saturationSlider, 1, 0, 1, 1);

        valueSlider = new QSlider(gridLayoutWidget_3);
        valueSlider->setObjectName("valueSlider");
        valueSlider->setAcceptDrops(false);
        valueSlider->setMaximum(255);
        valueSlider->setPageStep(10);
        valueSlider->setValue(0);
        valueSlider->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(valueSlider, 2, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Colors", nullptr));
        color->setText(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \321\206\320\262\320\265\321\202", nullptr));
        redEdit->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        greenEdit->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        redLabel->setText(QCoreApplication::translate("MainWindow", "Red", nullptr));
        greenLabel->setText(QCoreApplication::translate("MainWindow", "Green", nullptr));
        redLabel2->setText(QCoreApplication::translate("MainWindow", "Red", nullptr));
        blueEdit->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        blueLabel2->setText(QCoreApplication::translate("MainWindow", "Blue", nullptr));
        blueLabel->setText(QCoreApplication::translate("MainWindow", "Blue", nullptr));
        greenLabel2->setText(QCoreApplication::translate("MainWindow", "Green", nullptr));
        LEdit->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        aEdit->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        aLabel->setText(QCoreApplication::translate("MainWindow", "a", nullptr));
        LLabel2->setText(QCoreApplication::translate("MainWindow", "L", nullptr));
        bEdit->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        bLabel2->setText(QCoreApplication::translate("MainWindow", "b", nullptr));
        bLabel->setText(QCoreApplication::translate("MainWindow", "b", nullptr));
        aLabel2->setText(QCoreApplication::translate("MainWindow", "a", nullptr));
        LLabel->setText(QCoreApplication::translate("MainWindow", "L", nullptr));
        hueEdit->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        saturationEdit->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        hueLabel->setText(QCoreApplication::translate("MainWindow", "Hue", nullptr));
        saturationLabel->setText(QCoreApplication::translate("MainWindow", "Saturation", nullptr));
        hueLabel2->setText(QCoreApplication::translate("MainWindow", "Hue", nullptr));
        valueEdit->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        valueLabel2->setText(QCoreApplication::translate("MainWindow", "Value", nullptr));
        valueLabel->setText(QCoreApplication::translate("MainWindow", "Value", nullptr));
        saturationLabel2->setText(QCoreApplication::translate("MainWindow", "Saturation", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
