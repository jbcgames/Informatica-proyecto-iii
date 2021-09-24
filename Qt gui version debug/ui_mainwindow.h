/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *btorigen;
    QPushButton *btdestino;
    QPushButton *btempezar;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *txtorigen;
    QLineEdit *txtsalida;
    QLabel *seleccioncorrecta;
    QLabel *seleccioncorrecta_2;
    QLabel *seleccioncorrecta_3;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(541, 244);
        MainWindow->setMinimumSize(QSize(540, 244));
        MainWindow->setMaximumSize(QSize(541, 245));
        MainWindow->setTabletTracking(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        btorigen = new QPushButton(centralwidget);
        btorigen->setObjectName(QString::fromUtf8("btorigen"));
        btorigen->setGeometry(QRect(460, 40, 75, 23));
        btdestino = new QPushButton(centralwidget);
        btdestino->setObjectName(QString::fromUtf8("btdestino"));
        btdestino->setGeometry(QRect(460, 110, 75, 23));
        btempezar = new QPushButton(centralwidget);
        btempezar->setObjectName(QString::fromUtf8("btempezar"));
        btempezar->setGeometry(QRect(230, 170, 75, 23));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 40, 91, 21));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 110, 91, 16));
        txtorigen = new QLineEdit(centralwidget);
        txtorigen->setObjectName(QString::fromUtf8("txtorigen"));
        txtorigen->setGeometry(QRect(130, 40, 311, 31));
        txtsalida = new QLineEdit(centralwidget);
        txtsalida->setObjectName(QString::fromUtf8("txtsalida"));
        txtsalida->setGeometry(QRect(130, 110, 311, 31));
        seleccioncorrecta = new QLabel(centralwidget);
        seleccioncorrecta->setObjectName(QString::fromUtf8("seleccioncorrecta"));
        seleccioncorrecta->setGeometry(QRect(130, 80, 301, 16));
        seleccioncorrecta_2 = new QLabel(centralwidget);
        seleccioncorrecta_2->setObjectName(QString::fromUtf8("seleccioncorrecta_2"));
        seleccioncorrecta_2->setGeometry(QRect(130, 150, 301, 16));
        seleccioncorrecta_3 = new QLabel(centralwidget);
        seleccioncorrecta_3->setObjectName(QString::fromUtf8("seleccioncorrecta_3"));
        seleccioncorrecta_3->setGeometry(QRect(140, 200, 301, 16));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Redimensionar", nullptr));
        btorigen->setText(QCoreApplication::translate("MainWindow", "Seleccionar", nullptr));
        btdestino->setText(QCoreApplication::translate("MainWindow", "Seleccionar", nullptr));
        btempezar->setText(QCoreApplication::translate("MainWindow", "Empezar", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Archivo Origen", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Archivo Destino", nullptr));
        seleccioncorrecta->setText(QString());
        seleccioncorrecta_2->setText(QString());
        seleccioncorrecta_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
