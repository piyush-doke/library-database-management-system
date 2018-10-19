#include "returnbook.h"
#include "ui_returnbook.h"
#include <QMessageBox>
#include "./Library Management/handle.h"

extern Taskmanager allTask;

returnBook::returnBook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::returnBook)
{
    ui->setupUi(this);
}

returnBook::~returnBook()
{
    delete ui;
}

                            //Entering the details and clicking return
//-----------------------------------------------------------------------------
void returnBook::on_clickReturn_clicked()                                   /*-Return button inside the return window is clicked-*/
{
    QString rollReturn = ui->lineEdit_return_roll->text();                //Stores the roll number entered

    if (rollReturn.toStdString() == "") return;


    //Input your code here
    //And the output string of your code should be stored in the below string "rollReturnCheck"


                            //Displaying whether the book was sucessfully returned or not
    //-----------------------------------------------------------------------------

    //The rollReturnCheck contains bool value - true if the search is successful
    bool rollReturnCheck = allTask.return_book(rollReturn.toStdString());                                            //Contains the ouput of the search

    //If the return action is unsuccessful
    if(rollReturnCheck == false){

        QMessageBox::warning(this,"Error","No book is issued under this roll number");
    }

    //If the return action is successful
    else{

        QMessageBox::information(this,"Success","The book is sucessfully returned");
    }
    //-----------------------------------------------------------------------------*/

    //Clear the text box
    close();
    ui->lineEdit_return_roll->setText("");
}
/*-----------------------------------------------------------------------------*/
