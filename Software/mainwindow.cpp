#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "./Library Management/handle.h"

extern Taskmanager allTask;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{   cout<<"saving"<<endl;
    allTask.save_image();
    delete ui;
}


                                    //Menu-bar Buttons
//---------------------------------------------------------------------------------------
void MainWindow::on_actionCredits_triggered()               /*-Credits button from the menu bar is clicked-*/
{
    QMessageBox::information(this,"About","This application is developed by Abhishek, Shivam and Piyush. The implementation of this program is basically book-keeping. The program keeps the track of the books that have been issued with the help of databases for students and books.");
}

void MainWindow::on_actionClose_triggered()                 /*-Close button from the menu bar is clicked-*/
{
    close();
}

void MainWindow::on_actionHelp_triggered()                  /*-Help button from the menu bar is clicked-*/
{   system("cat ../\"More info.txt\"");
    //Implement the function of the help button form here
    //Type your code here
}

void MainWindow::on_actionPublish_triggered()               /*-Publish button from the menu bar clicked-*/
{   allTask.publish();
    //Implement the function of the publish button from here
    //Type your code here
}

void MainWindow::on_actionSave_triggered()                  /*-Save button form the menu bar clicked-*/
{   allTask.save_image();
    //Implement the function of the publish button from here
    //Type your code here
}
/*---------------------------------------------------------------------------------------*/



                                    //Database Section
//----------------------------------------------------------------------------------------
void MainWindow::on_books_clicked()                         /*-Books button is clicked-*/
{
    bDatabase = new booksDatabase(this);
    bDatabase->show();
}

void MainWindow::on_students_clicked()                      /*-Students button is clicked-*/
{
    sDatabase = new studentsDatabase(this);
    sDatabase->show();
}
/*-----------------------------------------------------------------------------------------*/



                                    //Issue and Return Section
//-----------------------------------------------------------------------------------------
void MainWindow::on_issue_clicked()                         /*-Issue button is clicked-*/
{
    iBook = new issueBook(this);
    iBook->show();
}

void MainWindow::on_returnBook_clicked()                    /*-Return button is clicked-*/
{
    rBook = new returnBook(this);
    rBook->show();
}

void MainWindow::on_pushButton_clicked()
{
    myList  = new listOfBooks(this);
    myList->show();
}
/*-----------------------------------------------------------------------------------------*/


