#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton_sabiranje->setCheckable(true);
    ui->pushButton_oduzimanje->setCheckable(true);
    ui->pushButton_deljenje->setCheckable(true);
    ui->pushButton_mnozenje->setCheckable(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_br0_clicked()
{

    x=(ui->label->text()+"0").toDouble();
    temp=QString::number(x,'g',15);
    ui->label->setText(temp);

}

void MainWindow::on_pushButton_br1_clicked()
{

    x=(ui->label->text()+"1").toDouble();
    temp=QString::number(x,'g',15);
    ui->label->setText(temp);
}

void MainWindow::on_pushButton_br2_clicked()
{

    x=(ui->label->text()+"2").toDouble();
    temp=QString::number(x,'g',15);
    ui->label->setText(temp);
}

void MainWindow::on_pushButton_br3_clicked()
{

    x=(ui->label->text()+"3").toDouble();
    temp=QString::number(x,'g',15);
    ui->label->setText(temp);
}

void MainWindow::on_pushButton_br4_clicked()
{
    x=(ui->label->text()+"4").toDouble();
    temp=QString::number(x,'g',15);
    ui->label->setText(temp);
}

void MainWindow::on_pushButton_br5_clicked()
{

    x=(ui->label->text()+"5").toDouble();
    temp=QString::number(x,'g',15);
    ui->label->setText(temp);
}

void MainWindow::on_pushButton_br6_clicked()
{

    x=(ui->label->text()+"6").toDouble();
    temp=QString::number(x,'g',15);
    ui->label->setText(temp);
}

void MainWindow::on_pushButton_br7_clicked()
{

    x=(ui->label->text()+"7").toDouble();
    temp=QString::number(x,'g',15);
    ui->label->setText(temp);
}

void MainWindow::on_pushButton_br8_clicked()
{

    x=(ui->label->text()+"8").toDouble();
    temp=QString::number(x,'g',15);
    ui->label->setText(temp);
}

void MainWindow::on_pushButton_br9_clicked()
{

    x=(ui->label->text()+"9").toDouble();
    temp=QString::number(x,'g',15);
    ui->label->setText(temp);
}

void MainWindow::on_pushButton_C_clicked()
{
    ui->label->setText("0");
    ui->label_2->setText("0");
}

void MainWindow::on_pushButton_sabiranje_clicked()
{
    x1=ui->label->text().toDouble();
    ui->label->setText("");

    temp=QString::number(x1);
    ui->label_2->setText(temp+"+");
}

void MainWindow::on_pushButton_oduzimanje_clicked()
{
    x1=ui->label->text().toDouble();
    ui->label->setText("");

    temp=QString::number(x1);
    ui->label_2->setText(temp+"-");
}

void MainWindow::on_pushButton_mnozenje_clicked()
{
    x1=ui->label->text().toDouble();
    ui->label->setText("");

    temp=QString::number(x1);
    ui->label_2->setText(temp+"*");
}

void MainWindow::on_pushButton_deljenje_clicked()
{
    x1=ui->label->text().toDouble();
    ui->label->setText("");

    temp=QString::number(x1);
    ui->label_2->setText(temp+"/");
}

void MainWindow::on_pushButton_procenat_clicked()
{
    x=ui->label->text().toDouble();
    x=x*0.01;
    temp=QString::number(x);
    ui->label->setText(temp);
}

void MainWindow::on_pushButton_predznak_clicked()
{
    x=ui->label->text().toDouble();
    x=x*-1;
    temp=QString::number(x);
    ui->label->setText(temp);
}

void MainWindow::on_pushButton_jednako_clicked()
{
    x2=ui->label->text().toDouble();
    temp=QString::number(x2);
    temp1=ui->label_2->text();
    ui->label_2->setText(temp1+temp+"=");\


    if(ui->pushButton_sabiranje->isChecked()){
        x2=ui->label->text().toDouble();
        broj=x1+x2;
        temp=QString::number(broj);
        ui->label->setText(temp);
        ui->pushButton_sabiranje->setChecked(false);

    }else if(ui->pushButton_oduzimanje->isChecked()){
        x2=ui->label->text().toDouble();
        broj=x1-x2;
        temp=QString::number(broj);
        ui->label->setText(temp);
        ui->pushButton_oduzimanje->setChecked(false);
}
    else if(ui->pushButton_mnozenje->isChecked()){
        x2=ui->label->text().toDouble();
        broj=x1*x2;
        temp=QString::number(broj);
        ui->label->setText(temp);
        ui->pushButton_mnozenje->setChecked(false);
}

    else if(ui->pushButton_deljenje->isChecked()){
        x2=ui->label->text().toDouble();
        broj=x1/x2;
        temp=QString::number(broj);
        ui->label->setText(temp);
        ui->pushButton_deljenje->setChecked(false);
    }

}

void MainWindow::on_pushButton_decimala_clicked()
{

    if(ui->pushButton_decimala->isChecked()){
        ui->label->setText("0");
    } else {
      x=ui->label->text().toDouble();
      temp=QString::number(x);
      ui->label->setText(temp+".");
    }
}
