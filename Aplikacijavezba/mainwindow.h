#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_br0_clicked();

    void on_pushButton_br1_clicked();

    void on_pushButton_br2_clicked();

    void on_pushButton_br3_clicked();

    void on_pushButton_br4_clicked();

    void on_pushButton_br5_clicked();

    void on_pushButton_br6_clicked();

    void on_pushButton_br7_clicked();

    void on_pushButton_br8_clicked();

    void on_pushButton_br9_clicked();

    void on_pushButton_C_clicked();

    void on_pushButton_sabiranje_clicked();

    void on_pushButton_oduzimanje_clicked();

    void on_pushButton_mnozenje_clicked();

    void on_pushButton_deljenje_clicked();

    void on_pushButton_procenat_clicked();

    void on_pushButton_predznak_clicked();

    void on_pushButton_jednako_clicked();

    void on_pushButton_decimala_clicked();

private:
    Ui::MainWindow *ui;
public:
    double x,x1,x2,broj;
    QString temp,temp1;
};

#endif // MAINWINDOW_H
