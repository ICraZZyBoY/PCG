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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *firstYLabel;
    QLineEdit *secondX;
    QRadioButton *bline;
    QPushButton *draw;
    QRadioButton *wuline;
    QLineEdit *radius;
    QLabel *secondXLabel;
    QLabel *radiusLabel;
    QPushButton *changeScale;
    QLineEdit *firstX;
    QLineEdit *secondY;
    QLabel *firstXLabel;
    QRadioButton *nline;
    QRadioButton *bcircle;
    QLabel *secondYLabel;
    QRadioButton *ddaline;
    QLineEdit *firstY;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1000, 700);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        firstYLabel = new QLabel(centralwidget);
        firstYLabel->setObjectName("firstYLabel");
        firstYLabel->setGeometry(QRect(810, 220, 21, 21));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(firstYLabel->sizePolicy().hasHeightForWidth());
        firstYLabel->setSizePolicy(sizePolicy);
        secondX = new QLineEdit(centralwidget);
        secondX->setObjectName("secondX");
        secondX->setGeometry(QRect(680, 260, 113, 28));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(secondX->sizePolicy().hasHeightForWidth());
        secondX->setSizePolicy(sizePolicy1);
        secondX->setStyleSheet(QString::fromUtf8("color:black"));
        bline = new QRadioButton(centralwidget);
        bline->setObjectName("bline");
        bline->setGeometry(QRect(670, 20, 181, 27));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(bline->sizePolicy().hasHeightForWidth());
        bline->setSizePolicy(sizePolicy2);
        draw = new QPushButton(centralwidget);
        draw->setObjectName("draw");
        draw->setGeometry(QRect(625, 340, 106, 30));
        sizePolicy1.setHeightForWidth(draw->sizePolicy().hasHeightForWidth());
        draw->setSizePolicy(sizePolicy1);
        wuline = new QRadioButton(centralwidget);
        wuline->setObjectName("wuline");
        wuline->setGeometry(QRect(670, 170, 141, 27));
        sizePolicy2.setHeightForWidth(wuline->sizePolicy().hasHeightForWidth());
        wuline->setSizePolicy(sizePolicy2);
        radius = new QLineEdit(centralwidget);
        radius->setObjectName("radius");
        radius->setGeometry(QRect(680, 300, 113, 28));
        sizePolicy1.setHeightForWidth(radius->sizePolicy().hasHeightForWidth());
        radius->setSizePolicy(sizePolicy1);
        secondXLabel = new QLabel(centralwidget);
        secondXLabel->setObjectName("secondXLabel");
        secondXLabel->setGeometry(QRect(625, 270, 80, 21));
        sizePolicy.setHeightForWidth(secondXLabel->sizePolicy().hasHeightForWidth());
        secondXLabel->setSizePolicy(sizePolicy);
        radiusLabel = new QLabel(centralwidget);
        radiusLabel->setObjectName("radiusLabel");
        radiusLabel->setGeometry(QRect(625, 300, 80, 21));
        sizePolicy.setHeightForWidth(radiusLabel->sizePolicy().hasHeightForWidth());
        radiusLabel->setSizePolicy(sizePolicy);
        changeScale = new QPushButton(centralwidget);
        changeScale->setObjectName("changeScale");
        changeScale->setGeometry(QRect(770, 340, 211, 30));
        sizePolicy1.setHeightForWidth(changeScale->sizePolicy().hasHeightForWidth());
        changeScale->setSizePolicy(sizePolicy1);
        firstX = new QLineEdit(centralwidget);
        firstX->setObjectName("firstX");
        firstX->setGeometry(QRect(680, 220, 113, 28));
        sizePolicy1.setHeightForWidth(firstX->sizePolicy().hasHeightForWidth());
        firstX->setSizePolicy(sizePolicy1);
        secondY = new QLineEdit(centralwidget);
        secondY->setObjectName("secondY");
        secondY->setGeometry(QRect(850, 260, 113, 28));
        sizePolicy1.setHeightForWidth(secondY->sizePolicy().hasHeightForWidth());
        secondY->setSizePolicy(sizePolicy1);
        firstXLabel = new QLabel(centralwidget);
        firstXLabel->setObjectName("firstXLabel");
        firstXLabel->setGeometry(QRect(625, 220, 80, 21));
        sizePolicy.setHeightForWidth(firstXLabel->sizePolicy().hasHeightForWidth());
        firstXLabel->setSizePolicy(sizePolicy);
        nline = new QRadioButton(centralwidget);
        nline->setObjectName("nline");
        nline->setGeometry(QRect(670, 140, 201, 27));
        sizePolicy2.setHeightForWidth(nline->sizePolicy().hasHeightForWidth());
        nline->setSizePolicy(sizePolicy2);
        bcircle = new QRadioButton(centralwidget);
        bcircle->setObjectName("bcircle");
        bcircle->setGeometry(QRect(670, 100, 311, 27));
        sizePolicy2.setHeightForWidth(bcircle->sizePolicy().hasHeightForWidth());
        bcircle->setSizePolicy(sizePolicy2);
        secondYLabel = new QLabel(centralwidget);
        secondYLabel->setObjectName("secondYLabel");
        secondYLabel->setGeometry(QRect(810, 260, 21, 21));
        sizePolicy.setHeightForWidth(secondYLabel->sizePolicy().hasHeightForWidth());
        secondYLabel->setSizePolicy(sizePolicy);
        ddaline = new QRadioButton(centralwidget);
        ddaline->setObjectName("ddaline");
        ddaline->setGeometry(QRect(670, 60, 133, 27));
        sizePolicy2.setHeightForWidth(ddaline->sizePolicy().hasHeightForWidth());
        ddaline->setSizePolicy(sizePolicy2);
        firstY = new QLineEdit(centralwidget);
        firstY->setObjectName("firstY");
        firstY->setGeometry(QRect(850, 220, 113, 28));
        sizePolicy1.setHeightForWidth(firstY->sizePolicy().hasHeightForWidth());
        firstY->setSizePolicy(sizePolicy1);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1000, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\321\202\320\265\321\200\320\270\320\267\320\260\321\206\320\270\321\217", nullptr));
        firstYLabel->setText(QCoreApplication::translate("MainWindow", "y0:", nullptr));
        secondX->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        bline->setText(QCoreApplication::translate("MainWindow", "\320\220\320\273\320\263\320\276\321\200\320\270\321\202\320\274 \320\221\321\200\320\265\320\267\320\265\320\275\321\205\320\265\320\274\320\260", nullptr));
        draw->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\200\320\270\321\201\320\276\320\262\320\260\321\202\321\214", nullptr));
        wuline->setText(QCoreApplication::translate("MainWindow", "\320\220\320\273\320\263\320\276\321\200\320\270\321\202\320\274 \320\222\321\203", nullptr));
        radius->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        secondXLabel->setText(QCoreApplication::translate("MainWindow", "x1:", nullptr));
        radiusLabel->setText(QCoreApplication::translate("MainWindow", "radius:", nullptr));
        changeScale->setText(QCoreApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\274\320\260\321\201\321\210\321\202\320\260\320\261", nullptr));
        firstX->setInputMask(QString());
        firstX->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        secondY->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        firstXLabel->setText(QCoreApplication::translate("MainWindow", "x0:", nullptr));
        nline->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\321\210\320\260\320\263\320\276\320\262\321\213\320\271 \320\260\320\273\320\263\320\276\321\200\320\270\321\202\320\274", nullptr));
        bcircle->setText(QCoreApplication::translate("MainWindow", "\320\220\320\273\320\263\320\276\321\200\320\270\321\202\320\274 \320\221\321\200\320\265\320\267\320\265\320\275\321\205\320\265\320\274\320\260(\320\276\320\272\321\200\321\203\320\266\320\275\320\276\321\201\321\202\321\214)", nullptr));
        secondYLabel->setText(QCoreApplication::translate("MainWindow", "y1:", nullptr));
        ddaline->setText(QCoreApplication::translate("MainWindow", "\320\220\320\273\320\263\320\276\321\200\320\270\321\202\320\274 \320\246\320\224\320\220", nullptr));
        firstY->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
