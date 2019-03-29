#ifndef TIEMPOS_H
#define TIEMPOS_H
#include <string>
#include <vector>

#include <QMainWindow>

using namespace std;

namespace Ui {
class tiempos;
}

class tiempos : public QMainWindow
{
    Q_OBJECT

public:
    explicit tiempos(vector<double> times, QWidget *parent = nullptr);
    ~tiempos();

private:
    double tiempo1;
    double tiempo2;
    double tiempo3;
    double tiempo4;
    double tiempo5;
    double media;
    Ui::tiempos *ui;
};

#endif // TIEMPOS_H
