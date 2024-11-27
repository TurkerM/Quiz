#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QMessageBox"
#include "QDir"
#include <QFile>
#include <QTextStream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    countdown = 5;
    connect(&Timer, &QTimer::timeout, this, &MainWindow::UpdateCountdown);
    Timer.start(1000);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::OpenTextFile(const QString &filePath) {
    QFile file(filePath);

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Dosya açılamadı!";
        return;
    }
    QTextStream in(&file);
    QString content = in.readAll();  // Dosyadaki tüm içeriği oku
    qDebug() << content;  // İçeriği ekrana yazdır
}

void MainWindow::UpdateCountdown()
{
    if(bCountdownUpdated)
    {
        if(!bTimerStarted)
        {
            Timer.start(1000);
            bTimerStarted = true;
        }
        if(countdown > 0)
        {
            ui->label_Time->setText(QString::number(countdown));
            countdown--;
        }
        else
        {
            ui->label_Time->setText("Time's Up!");
            Timer.stop();
        }
    }
}

void MainWindow::NextQuestion()
{
    numberOfQuestion++;
    QString line = ReadFile();
    qDebug() << ReadFile();
    QStringList values = line.split(";");
    ui->label_Question->setText(values.at(0)); //Changes question
    ui->label_Answer->setText(values.at(1));
    ui->label_QuestionNumber->setText(QString::number(numberOfQuestion));
    countdown = values.at(2).toInt();
}

QString MainWindow::ReadFile()
{
    QFile file("asd.csv"); // CSV dosyasını aç
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Dosya açılamadı!";
        return "";
    }

    QTextStream in(&file);
    int row = 0;

    // Satır satır oku
    while (!in.atEnd()) {
        QString line = in.readLine();  // Bir satırı oku
        QStringList values = line.split(",");  // Virgülle sütunlara ayır
        if(row == numberOfQuestion){
            return line;
            // Sütunları yazdır
            for (int col = 0; col < values.size(); ++col) {
                qDebug() << "Satır" << row << "Sütun" << (col + 1) << ":" << values.at(col);
            }
        }
        else{
            row++;
        }
    }
    file.close();
     return "";
}

void MainWindow::on_pushButton_StartQuiz_clicked()
{
    //QMessageBox::information(nullptr,"asd", "asd");
    //qDebug() << "Çalışma dizini:" << QDir::currentPath();
    //openTextFile("questionsFile.xlsx");
    //QMessageBox::information(nullptr, "asd", QString::number(countdown));
    //ReadFile();
}

void MainWindow::on_textEdit_textChanged()
{
    numberOfQuestion = ui->textEdit->toPlainText().toInt();
    qDebug() << ReadFile();
}

void MainWindow::on_pushButton_NextQuestion_clicked()
{
    NextQuestion();
}
