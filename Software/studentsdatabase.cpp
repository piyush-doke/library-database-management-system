#include "studentsdatabase.h"
#include "ui_studentsdatabase.h"
#include <QMessageBox>
#include "./Library Management/handle.h"

extern Taskmanager allTask;


studentsDatabase::studentsDatabase(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::studentsDatabase)
{
    ui->setupUi(this);
}

studentsDatabase::~studentsDatabase()
{
    delete ui;
}

                                //On clicking the "Add Student" button in the Students Data-base Section
//-----------------------------------------------------------------------------
void studentsDatabase::on_click_addStudent_clicked()
{
    QString studentRoll = ui->lineEdit_roll->text();                //Stores the roll no of the student
    QString studentName = ui->lineEdit_name->text();                //Stores the name of the student

    if ( studentRoll.toStdString()=="" or  studentName.toStdString() == "" ) return;

    //Add your code here
    //The name and code of the book are stored in the above QStrings

    //Message on successful addition of student details

    bool check  = allTask.write_st_records( studentRoll.toStdString(), studentName.toStdString() );

    if (check){
        QMessageBox::information(this,"Success","The student details have been successfully added to the database!");
    }
    else QMessageBox::information(this,"Success","This student's details already exists in the database!");
    
    close();

    //Clear the strings entered in the text boxes
    ui->lineEdit_name->setText("");
    ui->lineEdit_roll->setText("");
}
/*-----------------------------------------------------------------------------*/
