#include "confirmissuebook.h"
#include "ui_confirmissuebook.h"
#include <QMessageBox>
#include "./Library Management/handle.h"



extern Taskmanager allTask;
extern QString studentDetails;                          //Import the QString "studentDetails"
extern QString bookDetails; 
extern QString rollIssue;                          //Import the QString "studentDetails"
extern QString bookCode;   

confirmIssueBook::confirmIssueBook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::confirmIssueBook)
{
    ui->setupUi(this);

                                //Set the text to the output of search function
//-----------------------------------------------------------------------------
                              //Import the QString "bookDetails"

    //Set the text of the label "label_Confirm"
    ui->label_Confirm->setText(studentDetails + "\n" + bookDetails);
/*-----------------------------------------------------------------------------*/
}

confirmIssueBook::~confirmIssueBook()
{
    delete ui;
}

                                //Buttons on the confirmation window
//-----------------------------------------------------------------------------
void confirmIssueBook::on_clickConfirm_clicked()
{

    //Type your code here

    //Output of the code should inserted in the bool
    //Set to true for evaluation
    bool confirmCheck = allTask.issue_book( rollIssue.toStdString(),bookCode.toStdString()) ;

                                //Success or fail dialog box
    //-------------------------------------------------------------------------
    if(confirmCheck == true){

        QMessageBox::information(this,"Success","The book has been sucessfully issued");
        close();
    }

    else{

        QMessageBox::warning(this,"Error","This roll number has already issued a book or \n the book is already issued");
        close();
    }
    /*-------------------------------------------------------------------------*/
}

void confirmIssueBook::on_clickCancel_clicked()
{
    close();                                                //Close the confirmation window
}
/*-----------------------------------------------------------------------------*/
