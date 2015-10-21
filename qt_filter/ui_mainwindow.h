/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QCustomPlot *customPlot;
    QPushButton *Chebyshev;
    QPushButton *Elliptic;
    QPushButton *Butterworth;
    QLabel *order;
    QLabel *order_2;
    QLabel *ripple;
    QLabel *order_3;
    QLabel *order_4;
    QLabel *fc;
    QGroupBox *groupBox;
    QRadioButton *LowPass;
    QRadioButton *HighPass;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 450);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy1);
        customPlot = new QCustomPlot(centralWidget);
        customPlot->setObjectName(QString::fromUtf8("customPlot"));
        customPlot->setGeometry(QRect(200, 10, 581, 411));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(customPlot->sizePolicy().hasHeightForWidth());
        customPlot->setSizePolicy(sizePolicy2);
        Chebyshev = new QPushButton(centralWidget);
        Chebyshev->setObjectName(QString::fromUtf8("Chebyshev"));
        Chebyshev->setGeometry(QRect(10, 40, 181, 27));
        Chebyshev->setCheckable(true);
        Elliptic = new QPushButton(centralWidget);
        Elliptic->setObjectName(QString::fromUtf8("Elliptic"));
        Elliptic->setGeometry(QRect(10, 70, 181, 27));
        Elliptic->setCheckable(true);
        Butterworth = new QPushButton(centralWidget);
        Butterworth->setObjectName(QString::fromUtf8("Butterworth"));
        Butterworth->setGeometry(QRect(10, 10, 181, 27));
        Butterworth->setCheckable(true);
        order = new QLabel(centralWidget);
        order->setObjectName(QString::fromUtf8("order"));
        order->setGeometry(QRect(150, 120, 41, 21));
        order_2 = new QLabel(centralWidget);
        order_2->setObjectName(QString::fromUtf8("order_2"));
        order_2->setGeometry(QRect(20, 120, 111, 21));
        ripple = new QLabel(centralWidget);
        ripple->setObjectName(QString::fromUtf8("ripple"));
        ripple->setGeometry(QRect(150, 160, 41, 21));
        order_3 = new QLabel(centralWidget);
        order_3->setObjectName(QString::fromUtf8("order_3"));
        order_3->setGeometry(QRect(20, 160, 111, 31));
        order_3->setWordWrap(true);
        order_4 = new QLabel(centralWidget);
        order_4->setObjectName(QString::fromUtf8("order_4"));
        order_4->setGeometry(QRect(20, 210, 111, 21));
        fc = new QLabel(centralWidget);
        fc->setObjectName(QString::fromUtf8("fc"));
        fc->setGeometry(QRect(150, 210, 41, 21));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 240, 120, 111));
        LowPass = new QRadioButton(groupBox);
        LowPass->setObjectName(QString::fromUtf8("LowPass"));
        LowPass->setGeometry(QRect(10, 30, 97, 18));
        LowPass->setChecked(true);
        HighPass = new QRadioButton(groupBox);
        HighPass->setObjectName(QString::fromUtf8("HighPass"));
        HighPass->setGeometry(QRect(10, 70, 97, 18));
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "QCustomPlot simple demo", 0));
        Chebyshev->setText(QApplication::translate("MainWindow", "Chebyshev", 0));
        Elliptic->setText(QApplication::translate("MainWindow", "Elliptic", 0));
        Butterworth->setText(QApplication::translate("MainWindow", "Butterworth", 0));
        order->setText(QApplication::translate("MainWindow", "Order", 0));
        order_2->setText(QApplication::translate("MainWindow", "Active Filter Order", 0));
        ripple->setText(QApplication::translate("MainWindow", "ripple", 0));
        order_3->setText(QApplication::translate("MainWindow", "Chebyshev/Elliptic Ripple", 0));
        order_4->setText(QApplication::translate("MainWindow", "Cut-off/Edge", 0));
        fc->setText(QApplication::translate("MainWindow", "fc", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Filter Type", 0));
        LowPass->setText(QApplication::translate("MainWindow", "LowPass", 0));
        HighPass->setText(QApplication::translate("MainWindow", "High Pass", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
