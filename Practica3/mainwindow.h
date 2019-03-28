#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <string>
#include <fstream>
using namespace std;
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void btnFibonacci();
    void btnImagenes();
    void btnTiempos();
    QString openFile();
    void fibonacci(ofstream &archivo);
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
