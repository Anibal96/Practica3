#include <iostream>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QFileDialog"
#include "QDir"
#include "QString"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->btnFibonacci, SIGNAL (released()),this, SLOT (btnFibonacci()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::btnFibonacci(){
    QString ruta = openFile();
    ofstream archivo;
    archivo.open(ruta.toLocal8Bit().constData());
    for(int i = 0; i < 5; i++){
        clock_t c1 = clock();
        fibonacci(archivo);
        //Mirar
        cout << (clock()-c1)*1000/CLOCKS_PER_SEC << endl;
    }
    archivo.close();
}

    void MainWindow::fibonacci(ofstream &archivo){
        unsigned long long int numero1 = 0;
        unsigned long long int numero2 = 1;
        for(int j = 0; j < 75; j++){
            unsigned long long int aux = numero2;
            numero2 = numero1+numero2;
            numero1 = aux;
            //Guardar en un documento de text numero2
            archivo << numero2 <<endl;
    }
}

void MainWindow::btnImagenes(){
    //TO DO
}
void MainWindow::btnTiempos(){
    //TO DO
}


QString MainWindow::openFile(){
    QString filename = QFileDialog::getSaveFileName(this,tr("Open Document"),QDir::currentPath(),tr("Document files (*.doc *.rtf);;All files (*.*)") );
    if( !filename.isNull() )
    {
      qDebug( filename.toUtf8() );
    }
    return filename;
  }
