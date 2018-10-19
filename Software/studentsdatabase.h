#ifndef STUDENTSDATABASE_H
#define STUDENTSDATABASE_H

#include <QDialog>

namespace Ui {
class studentsDatabase;
}

class studentsDatabase : public QDialog
{
    Q_OBJECT

public:
    explicit studentsDatabase(QWidget *parent = 0);
    ~studentsDatabase();

private slots:
    void on_click_addStudent_clicked();

private:
    Ui::studentsDatabase *ui;
};

#endif // STUDENTSDATABASE_H
