#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
                                //Headers for Database Management
//-------------------------------------------------------------------------------------------
#include "booksdatabase.h"                      //header of the "Books database" window
#include "studentsdatabase.h"                   //header of the "Students database" window
/*-------------------------------------------------------------------------------------------*/

                                //Headers for Issue & Return Section
//-------------------------------------------------------------------------------------------
#include "issuebook.h"                          //header of the "Issue a book" window
#include "returnbook.h"                         //header of the "Return a book" window
#include "listofbooks.h"                        //header of the "List of books" window
/*-------------------------------------------------------------------------------------------*/

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

//Buttons on the main screen
    void on_books_clicked();

    void on_students_clicked();

    void on_issue_clicked();

    void on_returnBook_clicked();

//Buttons in the menu bar
    void on_actionCredits_triggered();

    void on_actionClose_triggered();

    void on_actionHelp_triggered();

    void on_actionPublish_triggered();

    void on_actionSave_triggered();

    void on_pushButton_clicked();

private:

    Ui::MainWindow *ui;
                                //Database Section - Defining pointers
//--------------------------------------------------------------------------------------------
    booksDatabase *bDatabase;                   //pointer of type - booksDatabase
    studentsDatabase *sDatabase;                //pointer of type - studentsDatabase
/*--------------------------------------------------------------------------------------------*/

                                //Issue & Return Section - Defining pointers
//--------------------------------------------------------------------------------------------
    issueBook *iBook;                           //pointer of type - issueBook
    returnBook *rBook;                          //pointer of type - returnBook
    listOfBooks *myList;                        //pointer of type - listOfBooks
/*--------------------------------------------------------------------------------------------*/
};

#endif // MAINWINDOW_H
