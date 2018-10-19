/********************************************************************************
** Form generated from reading UI file 'listofbooks.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTOFBOOKS_H
#define UI_LISTOFBOOKS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_listOfBooks
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextBrowser *textBrowser;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;

    void setupUi(QDialog *listOfBooks)
    {
        if (listOfBooks->objectName().isEmpty())
            listOfBooks->setObjectName(QString::fromUtf8("listOfBooks"));
        listOfBooks->resize(400, 300);
        QFont font;
        font.setPointSize(1);
        listOfBooks->setFont(font);
        horizontalLayout_2 = new QHBoxLayout(listOfBooks);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(listOfBooks);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Ebrima"));
        font1.setPointSize(11);
        label->setFont(font1);

        verticalLayout->addWidget(label);

        textBrowser = new QTextBrowser(listOfBooks);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        QFont font2;
        font2.setPointSize(12);
        textBrowser->setFont(font2);

        verticalLayout->addWidget(textBrowser);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(listOfBooks);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Ebrima"));
        font3.setPointSize(9);
        pushButton_2->setFont(font3);

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout);


        retranslateUi(listOfBooks);
        QObject::connect(pushButton_2, SIGNAL(clicked()), listOfBooks, SLOT(close()));

        QMetaObject::connectSlotsByName(listOfBooks);
    } // setupUi

    void retranslateUi(QDialog *listOfBooks)
    {
        listOfBooks->setWindowTitle(QApplication::translate("listOfBooks", "List", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("listOfBooks", "List of the unreturned books", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("listOfBooks", "Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class listOfBooks: public Ui_listOfBooks {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTOFBOOKS_H
