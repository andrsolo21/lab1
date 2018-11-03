/********************************************************************************
** Form generated from reading UI file 'qtguitest1.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTGUITEST1_H
#define UI_QTGUITEST1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtGuiTest1Class
{
public:
    QAction *actionAdd;
    QWidget *centralWidget;
    QLineEdit *lineEdit;
    QPushButton *but;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *QtGuiTest1Class)
    {
        if (QtGuiTest1Class->objectName().isEmpty())
            QtGuiTest1Class->setObjectName(QStringLiteral("QtGuiTest1Class"));
        QtGuiTest1Class->resize(600, 400);
        actionAdd = new QAction(QtGuiTest1Class);
        actionAdd->setObjectName(QStringLiteral("actionAdd"));
        centralWidget = new QWidget(QtGuiTest1Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(450, 20, 141, 20));
        but = new QPushButton(centralWidget);
        but->setObjectName(QStringLiteral("but"));
        but->setGeometry(QRect(470, 50, 75, 23));
        QtGuiTest1Class->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(QtGuiTest1Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QtGuiTest1Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtGuiTest1Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtGuiTest1Class->setStatusBar(statusBar);
        toolBar = new QToolBar(QtGuiTest1Class);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        QtGuiTest1Class->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(QtGuiTest1Class);

        QMetaObject::connectSlotsByName(QtGuiTest1Class);
    } // setupUi

    void retranslateUi(QMainWindow *QtGuiTest1Class)
    {
        QtGuiTest1Class->setWindowTitle(QApplication::translate("QtGuiTest1Class", "QtGuiTest1", Q_NULLPTR));
        actionAdd->setText(QApplication::translate("QtGuiTest1Class", "add", Q_NULLPTR));
        lineEdit->setText(QString());
        but->setText(QApplication::translate("QtGuiTest1Class", "PushButton", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("QtGuiTest1Class", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QtGuiTest1Class: public Ui_QtGuiTest1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTGUITEST1_H
