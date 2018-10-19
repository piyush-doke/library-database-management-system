#ifndef ISSUEBOOK_H
#define ISSUEBOOK_H

#include <QDialog>

                                //Header for Confirmation Window
//-----------------------------------------------------------------------------
#include <confirmissuebook.h>
/*-----------------------------------------------------------------------------*/

namespace Ui {
class issueBook;
}

class issueBook : public QDialog
{
    Q_OBJECT

public:
    explicit issueBook(QWidget *parent = 0);
    ~issueBook();

private slots:    
    void on_clickNext_clicked();

private:
    Ui::issueBook *ui;

                        //Confirmation Section - Defining pointers
//-----------------------------------------------------------------------------
    confirmIssueBook *cBook;
/*-----------------------------------------------------------------------------*/
};

#endif // ISSUEBOOK_H
