#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <QString>
#include <iostream>
#include <QImage>
#include <QtCore/QCoreApplication>
#include <QtGui/QImage>
#include <fstream>
#include <bitset>
#include <cstdlib>
#include <cstdio>
#include <stdio.h>
#include <string.h>
using namespace std;
int cadena[384];
bool sel1=false,sel2=false;
QString name2;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btorigen_clicked()
{

QString name=ui->txtorigen->text();
QImage *img = new QImage(name);
int x=img->width(), y=img->height();
int Blue,Green,Red;

//cout<<x<<" "<<y<<endl<<Red<<" "<<Green<<" "<<Blue<<" "<<endl;
if (x>8&&y>8){
    int contx=x/16,conty=y/16,salida[8][8][3];
    for(int cont=0,cont2=0,p=0;cont2!=8;contx=contx+(x/8),cont++,p=p+6){
        if (cont==8){
            cont=0;
            cont2++;
            conty=conty+(y/8);
            contx=contx/16;
        }
        if(cont2==8){
            break;
        }
        QRgb k=img->pixel(contx,conty);
        Blue=qBlue(k),Green=qGreen(k),Red=qRed(k);
        salida[cont2][cont][0]=Red;
        salida[cont2][cont][1]=Green;
        salida[cont2][cont][2]=Blue;
        cadena[p]=Red;
        cadena[p+1]=-2;
        cadena[p+2]=Green;
        cadena[p+3]=-2;
        cadena[p+4]=Blue;
        cadena[p+5]=-2;


    }

    cout<<endl;
    ui->seleccioncorrecta->setText("Archivo seleccionado correctamente");
    sel1=true;


}else{
    ui->seleccioncorrecta->setText("El archivo no se ha podido seleccionar");
}


}


void MainWindow::on_btdestino_clicked()
{
name2=ui->txtsalida->text();
ui->seleccioncorrecta_2->setText("Archivo seleccionado correctamente");
sel2=true;
}


void MainWindow::on_btempezar_clicked()
{if(sel1&&sel2){
    FILE *fichero;
    char salida[name2.length()];
    for(int h=0;name2.length()!=h;h++){
        salida[h]=name2.toStdString()[h];
    }
    fichero = fopen(salida,"w+");
    fwrite(cadena, sizeof(int), sizeof(cadena), fichero );
    fclose(fichero);
    ui->seleccioncorrecta_3->setText("Archivo generado con exito");
}else{
    ui->seleccioncorrecta_3->setText("No ha seleccionado alguna ubicacion del archivo");
    }
    }

