/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_StartQuiz;
    QLabel *label_Time;
    QLabel *label_Question;
    QLabel *label_Category;
    QLabel *label_Answer;
    QPushButton *pushButton_NextQuestion;
    QPushButton *pushButton_ShowAnswer;
    QTextEdit *textEdit;
    QLabel *label_QuestionNumber;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(686, 311);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        pushButton_StartQuiz = new QPushButton(centralwidget);
        pushButton_StartQuiz->setObjectName("pushButton_StartQuiz");
        pushButton_StartQuiz->setGeometry(QRect(280, 200, 88, 26));
        label_Time = new QLabel(centralwidget);
        label_Time->setObjectName("label_Time");
        label_Time->setGeometry(QRect(40, 20, 66, 18));
        label_Question = new QLabel(centralwidget);
        label_Question->setObjectName("label_Question");
        label_Question->setEnabled(true);
        label_Question->setGeometry(QRect(40, 50, 591, 111));
        label_Category = new QLabel(centralwidget);
        label_Category->setObjectName("label_Category");
        label_Category->setGeometry(QRect(470, 20, 66, 18));
        label_Answer = new QLabel(centralwidget);
        label_Answer->setObjectName("label_Answer");
        label_Answer->setGeometry(QRect(60, 180, 171, 41));
        pushButton_NextQuestion = new QPushButton(centralwidget);
        pushButton_NextQuestion->setObjectName("pushButton_NextQuestion");
        pushButton_NextQuestion->setGeometry(QRect(530, 200, 111, 26));
        pushButton_ShowAnswer = new QPushButton(centralwidget);
        pushButton_ShowAnswer->setObjectName("pushButton_ShowAnswer");
        pushButton_ShowAnswer->setGeometry(QRect(390, 200, 121, 26));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(180, 90, 104, 31));
        label_QuestionNumber = new QLabel(centralwidget);
        label_QuestionNumber->setObjectName("label_QuestionNumber");
        label_QuestionNumber->setGeometry(QRect(180, 20, 121, 18));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 686, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_StartQuiz->setText(QCoreApplication::translate("MainWindow", "Start Quiz", nullptr));
        label_Time->setText(QCoreApplication::translate("MainWindow", "Time", nullptr));
        label_Question->setText(QCoreApplication::translate("MainWindow", "Question", nullptr));
        label_Category->setText(QCoreApplication::translate("MainWindow", "Category", nullptr));
        label_Answer->setText(QCoreApplication::translate("MainWindow", "Answer", nullptr));
        pushButton_NextQuestion->setText(QCoreApplication::translate("MainWindow", "Next Question", nullptr));
        pushButton_ShowAnswer->setText(QCoreApplication::translate("MainWindow", "Show Answer", nullptr));
        label_QuestionNumber->setText(QCoreApplication::translate("MainWindow", "Question Number", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
