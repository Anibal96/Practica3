#include "tiempos.h"
#include "ui_tiempos.h"

tiempos::tiempos(vector<double> times, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::tiempos)
{
    double aux = (times[0]+times[1]+times[2]+times[3]+times[4])/5;
    ui->tiempo1LE->setText(std::to_string(times[0]).c_str());
    ui->tiempo2LE->setText(std::to_string(times[1]).c_str());
    ui->tiempo3LE->setText(std::to_string(times[2]).c_str());
    ui->tiempo4LE->setText(std::to_string(times[3]).c_str());
    ui->tiempo5LE->setText(std::to_string(times[4]).c_str());
    ui->tiempoMediaLE->setText(std::to_string(aux).c_str());
    ui->setupUi(this);
}

tiempos::~tiempos()
{
    delete ui;
}
