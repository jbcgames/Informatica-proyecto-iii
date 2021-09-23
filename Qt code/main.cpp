#include <iostream>
#include <QImage>
#include <QtCore/QCoreApplication>
#include <QtGui/QImage>
#include <fstream>
#include <bitset>
#include <cstdlib>
#include <cstdio>
#include <string.h>
using namespace std;

int main()
{
    QImage *img = new QImage("image.jpg");
    int x=img->width(), y=img->height();
    int Blue,Green,Red;
    int cadena[384];
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
        for(int h=0;h!=383;h++){
            cout<<cadena[h];
        }
        cout<<endl;


    }



    return 0;

}
