#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void OpenTextFile(const QString &filePath);
    void UpdateCountdown();
    void NextQuestion();
    QString ReadFile();
    QTimer Timer;
    int countdown;
    int numberOfQuestion = 0;
    int currentQuestionNumber;
    bool bCountdownUpdated = true;
    bool bTimerStarted = true;


private slots:
    void on_pushButton_StartQuiz_clicked();

    void on_textEdit_textChanged();

    void on_pushButton_NextQuestion_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
