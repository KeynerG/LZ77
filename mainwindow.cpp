#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "LZ77.h"

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


void MainWindow::on_btnComprimir_clicked()
{
    LZ77 lz77 = LZ77();
    string textoComprimido = lz77.A_LZ77(ui->inputTextEdit->toPlainText().toStdString(),1);
    ui->outputTextEdit->setText(QString::fromStdString(textoComprimido));

}


void MainWindow::on_btnDescomprimir_clicked()
{
    LZ77 lz77 = LZ77();
    string textoDesomprimido = lz77.A_LZ77(ui->inputTextEdit->toPlainText().toStdString(),2);
    ui->outputTextEdit->setText(QString::fromStdString(textoDesomprimido));
}

