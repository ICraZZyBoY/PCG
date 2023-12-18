#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_redEdit_textChanged(const QString &arg1);

    void on_greenEdit_textChanged(const QString &arg1);

    void on_blueEdit_textChanged(const QString &arg1);

    void on_LSlider_sliderReleased();

    void on_LSlider_sliderMoved(int position);

    void on_aSlider_sliderMoved(int position);

    void on_aSlider_sliderReleased();

    void on_bSlider_sliderReleased();

    void on_LEdit_editingFinished();

    void on_aEdit_editingFinished();

    void on_bEdit_editingFinished();

    void on_redSlider_sliderMoved(int position);

    void on_greenSlider_sliderMoved(int position);

    void on_blueSlider_sliderMoved(int position);

    void on_redSlider_sliderReleased();

    void on_greenSlider_sliderReleased();

    void on_blueSlider_sliderReleased();

    void on_hueSlider_sliderMoved(int position);

    void on_saturationSlider_sliderMoved(int position);

    void on_valueSlider_sliderMoved(int position);

    void on_hueSlider_sliderReleased();

    void on_saturationSlider_sliderReleased();

    void on_valueSlider_sliderReleased();

    void on_hueEdit_editingFinished();

    void on_saturationEdit_editingFinished();

    void on_valueEdit_editingFinished();

private:
    QColor color;
    void updateColor();
    void updateRGB();
    void updateHSV();
    void updateLAB();
    void updateLABcolor();
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
