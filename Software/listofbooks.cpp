#include "listofbooks.h"
#include "ui_listofbooks.h"
#include "./Library Management/handle.h"

extern Taskmanager allTask;

listOfBooks::listOfBooks(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::listOfBooks)
{
    ui->setupUi(this);

                                //Set the text in the text Browser
//-------------------------------------------------------------------------
    //Garbage text is filled for demo
    //Implement this for your output string
    //Should display list of the unreturned books
    string text = allTask.get_unreturned_books();
    ui->textBrowser->setText( QString::fromStdString(text));
/*-------------------------------------------------------------------------*/
}

listOfBooks::~listOfBooks()
{
    delete ui;
}
