#ifndef CONFIRMISSUEBOOK_H
#define CONFIRMISSUEBOOK_H
#include <QDialog>

namespace Ui {
class confirmIssueBook;
}

class confirmIssueBook : public QDialog
{
    Q_OBJECT

public:
    explicit confirmIssueBook(QWidget *parent = 0);
    ~confirmIssueBook();

private slots:

    void on_clickConfirm_clicked();

    void on_clickCancel_clicked();

private:
    Ui::confirmIssueBook *ui;

};

#endif // CONFIRMISSUEBOOK_H
