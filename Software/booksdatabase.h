#ifndef BOOKSDATABASE_H
#define BOOKSDATABASE_H

#include <QDialog>

namespace Ui {
class booksDatabase;
}

class booksDatabase : public QDialog
{
    Q_OBJECT

public:
    explicit booksDatabase(QWidget *parent = 0);
    ~booksDatabase();

private slots:
    void on_click_addBook_clicked();

private:
    Ui::booksDatabase *ui;
};

#endif // BOOKSDATABASE_H
