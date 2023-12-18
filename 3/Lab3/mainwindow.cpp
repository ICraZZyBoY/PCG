#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>

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

void MainWindow::updateImages(const cv::Mat& original, const cv::Mat& transformed)
{
    QImage originalImage((uchar*) original.data, original.cols, original.rows,
                         original.step, QImage::Format_Grayscale8);
    QPixmap originalPixmap;
    originalPixmap.convertFromImage(originalImage.scaled(500, 400));
    ui->original->setPixmap(originalPixmap);
    QImage transformedImage((uchar*) transformed.data, transformed.cols, transformed.rows,
                            transformed.step, QImage::Format_Grayscale8);
    QPixmap transformedPixmap;
    transformedPixmap.convertFromImage(transformedImage.scaled(500, 400));
    ui->transformed->setPixmap(transformedPixmap);
}

void MainWindow::on_openFile_clicked()
{
    QFileDialog *fileDialog = new QFileDialog(this);
    fileDialog->setFileMode(QFileDialog::AnyFile);
    QString fileName = fileDialog->getOpenFileName(this, tr("Open Image"),
                        "C:/", tr("Image Files (*.png *.jpg *.bmp *.gif *.tiff *.pcx)"));
    ui->curFile->setText("Cur File: " + fileName);
    image = cv::imread(fileName.toStdString(), cv::IMREAD_ANYDEPTH);
    updateImages(image, cv::Mat());
}

void MainWindow::on_histogram_clicked()
{
    cv::Mat equalizedImage;
    cv::equalizeHist(image, equalizedImage);
    updateImages(image, equalizedImage);
}


void MainWindow::on_linearContrast_clicked()
{
    double alpha = 1.5; // коэффициент контрастности
    int beta = 50; // смещение яркости
    cv::Mat contrastedImage = alpha * image + beta;
    updateImages(image, contrastedImage);
}



void MainWindow::on_segmentation_clicked()
{
    cv::Mat canny_output;
    Canny(image, canny_output, 100, 200);

    std::vector<std::vector<cv::Point> > contours;
    std::vector<cv::Vec4i> hierarchy;
    findContours( canny_output, contours, hierarchy, cv::RETR_TREE, cv::CHAIN_APPROX_SIMPLE );

    cv::Mat drawing = cv::Mat::zeros( image.size(), CV_8UC3 );
    cv::RNG rng(12345);
    for( size_t i = 0; i< contours.size(); i++ )
    {
        cv::Scalar color = cv::Scalar( rng.uniform(0, 256), rng.uniform(0,256), rng.uniform(0,256) );
        drawContours( drawing, contours, (int)i, color, 2, cv::LINE_8, hierarchy, 0 );
    }
    updateImages(image, drawing);
    cv::imshow("Segmentation",drawing);
}

