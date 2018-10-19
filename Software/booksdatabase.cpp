#include "booksdatabase.h"
#include "ui_booksdatabase.h"
#include <QMessageBox>
#include "./Library Management/handle.h"

extern Taskmanager allTask;

booksDatabase::booksDatabase(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::booksDatabase)
{
    ui->setupUi(this);
}

booksDatabase::~booksDatabase()
{
    delete ui;
}

                                //On clicking the "Add Book" button in the Books Data-base Section
//-----------------------------------------------------------------------------
void booksDatabase::on_click_addBook_clicked()
{
    QString bookCode = ui->lineEdit_code->text();                   //Stores the code of the book
    QString bookName = ui->lineEdit_name->text();                   //Stores the name of the book

    //Add your code here
    //The name and code of the book are stored in the above QStrings
    if ( bookCode.toStdString()=="" or  bookName.toStdString() == "" ) return;

    //Message of successful addition of book details
    bool check  = allTask.write_book_records( bookCode.toStdString(), bookName.toStdString() );

    if (check){
        QMessageBox::information(this,"Success","The Book details have been successfully added to the database!");
    }
    else QMessageBox::information(this,"Success","This Book's details already exists in the database!");

    close();

    //Clear the strings entered in the text boxes
    ui->lineEdit_code->setText("");
    ui->lineEdit_name->setText("");
}
/*-----------------------------------------------------------------------------*/
