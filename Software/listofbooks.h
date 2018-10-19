#ifndef LISTOFBOOKS_H
#define LISTOFBOOKS_H

#include <QDialog>

namespace Ui {
class listOfBooks;
}

class listOfBooks : public QDialog
{
    Q_OBJECT

public:
    explicit listOfBooks(QWidget *parent = 0);
    ~listOfBooks();

private:
    Ui::listOfBooks *ui;
};

#endif // LISTOFBOOKS_H
