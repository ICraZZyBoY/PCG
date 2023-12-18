#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QDirIterator>
#include <QFile>

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

void MainWindow::on_pushButton_clicked()
{
    QFileDialog *fileDialog = new QFileDialog(this);
    fileDialog->setFileMode(QFileDialog::Directory);
    QString path = fileDialog->getExistingDirectory(this, tr("Choose directory"), "C:/");
    QDirIterator it(path, {"*.png",  "*.jpg",  "*.bmp", "*.gif",  "*.tiff", "*.pcx"} , QDir::Files);
    info.clear();
    ui->label->setText("Cur dir: " + it.path());
    while (it.hasNext())
    {
        QString filePath = it.next();
        pictureInfo curPictureInfo;
        curPictureInfo.fileName = it.fileName();
        QImage image(it.path() + "/" + it.fileName());
        curPictureInfo.colorDepth = QString::number(image.depth());
        curPictureInfo.size = QString::number(image.size().width()) + "x"
                              + QString::number(image.size().height());
        curPictureInfo.resolution = QString::number(int(image.dotsPerMeterX() * 0.0254)) + "x"
                + QString::number(int(image.dotsPerMeterY() * 0.0254));
        double mustSize = double(image.size().width()) * image.size().height() * image.depth();
        mustSize /= 8.0;
        QFile file(it.path() + "/" + it.fileName());
        double compression = ((mustSize - file.size()) / mustSize) * 100;
        curPictureInfo.compression = QString::number(compression) + "%";
        info.push_back(curPictureInfo);
    }
    updateTable();
}

void MainWindow::updateTable()
{
    while(ui->tableWidget->rowCount())
            ui->tableWidget->removeRow(0);
    for (int i = 0; i < info.size(); i++)
    {
        ui->tableWidget->insertRow(ui->tableWidget->rowCount());
        ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 0, new QTableWidgetItem(info[i].fileName));
        ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 1, new QTableWidgetItem(info[i].size));
        ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 2, new QTableWidgetItem(info[i].resolution));
        ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 3, new QTableWidgetItem(info[i].colorDepth));
        ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 4, new QTableWidgetItem(info[i].compression));
    }
}
