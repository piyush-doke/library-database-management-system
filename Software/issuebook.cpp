#include "issuebook.h"
#include "ui_issuebook.h"
#include <QMessageBox>

#include "./Library Management/handle.h"



extern Taskmanager allTask;


                            //Globally defined Qstring variables - To store the student and book details
//-----------------------------------------------------------------------------
QString studentDetails;
QString bookDetails;
QString rollIssue;                          //Import the QString "studentDetails"
QString bookCode; 
/*-----------------------------------------------------------------------------*/


issueBook::issueBook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::issueBook)
{
    ui->setupUi(this);
}

issueBook::~issueBook()
{
    delete ui;
}

                            //Entering the details of students & books and clicking issue button
//-----------------------------------------------------------------------------
void issueBook::on_clickNext_clicked()                                      /*-Next button inside the issue window is clicked-*/
{
    rollIssue = ui->lineEdit_issue_roll->text();                    //Stores the roll number entered
    bookCode = ui->lineEdit_bookCode->text();                      //Stores the book code entered

    if(rollIssue.toStdString() == "" or bookCode.toStdString() == ""){
        return;
    }
    //Enter your code here
    //And the output string should be inserted in the globally defined QStrings "studentDetails" and "bookDetails"


                            //Displaying "confirmation" window
    //-----------------------------------------------------------------------------

    //Output of the function is inserted into these strings, these strings will be displayed in the confirmation window
    //For now garbage value is stored
    studentDetails = QString::fromStdString(allTask.get_stud_info( rollIssue.toStdString()) );                                                 //Student details returned by Abhishek's code
    bookDetails = QString::fromStdString(allTask.get_book_info( bookCode.toStdString()) );                                                    //Book details returned by Abhishek's code


    //Close the "issue a book" window
    close();

    //Open a confirmation window
    cBook = new confirmIssueBook(this);
    cBook->show();
    /*-----------------------------------------------------------------------------*/
}
/*-----------------------------------------------------------------------------*/
