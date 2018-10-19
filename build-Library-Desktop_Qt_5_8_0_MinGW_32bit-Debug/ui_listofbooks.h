/********************************************************************************
** Form generated from reading UI file 'listofbooks.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTOFBOOKS_H
#define UI_LISTOFBOOKS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

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
            listOfBooks->setObjectName(QStringLiteral("listOfBooks"));
        listOfBooks->resize(400, 300);
        QFont font;
        font.setPointSize(1);
        listOfBooks->setFont(font);
        horizontalLayout_2 = new QHBoxLayout(listOfBooks);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(listOfBooks);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setFamily(QStringLiteral("Ebrima"));
        font1.setPointSize(11);
        label->setFont(font1);

        verticalLayout->addWidget(label);

        textBrowser = new QTextBrowser(listOfBooks);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        QFont font2;
        font2.setPointSize(12);
        textBrowser->setFont(font2);

        verticalLayout->addWidget(textBrowser);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(listOfBooks);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QFont font3;
        font3.setFamily(QStringLiteral("Ebrima"));
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
        listOfBooks->setWindowTitle(QApplication::translate("listOfBooks", "List", Q_NULLPTR));
        label->setText(QApplication::translate("listOfBooks", "List of the unreturned books", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("listOfBooks", "Close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class listOfBooks: public Ui_listOfBooks {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTOFBOOKS_H
