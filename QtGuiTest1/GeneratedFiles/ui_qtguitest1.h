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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtGuiTest1Class
{
public:
    QAction *actionAdd;
    QWidget *centralWidget;
    QToolBox *toolBox;
    QWidget *page;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton;
    QLineEdit *lineEdit;
    QPushButton *but;
    QWidget *page_2;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_5;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QWidget *page_3;
    QWidget *page_4;
    QPushButton *pushButton;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QLineEdit *namePresLine;
    QLabel *label_5;
    QLineEdit *radiusPresLine;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *coordPresX;
    QLineEdit *coordPresY;
    QPushButton *but3;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QComboBox *comboBox;
    QLabel *label_7;
    QLineEdit *nameAddLine;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLineEdit *coordXLine;
    QLineEdit *coordYLine;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *gabXLine;
    QLineEdit *gabYLine;
    QLabel *label_3;
    QLineEdit *angleLine;
    QPushButton *but2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;
    QToolBar *toolBar_2;

    void setupUi(QMainWindow *QtGuiTest1Class)
    {
        if (QtGuiTest1Class->objectName().isEmpty())
            QtGuiTest1Class->setObjectName(QStringLiteral("QtGuiTest1Class"));
        QtGuiTest1Class->resize(679, 420);
        actionAdd = new QAction(QtGuiTest1Class);
        actionAdd->setObjectName(QStringLiteral("actionAdd"));
        centralWidget = new QWidget(QtGuiTest1Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        toolBox = new QToolBox(centralWidget);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setGeometry(QRect(420, 10, 171, 351));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setGeometry(QRect(0, 0, 171, 243));
        verticalLayoutWidget = new QWidget(page);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 10, 160, 80));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(verticalLayoutWidget);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        verticalLayout->addWidget(radioButton);

        lineEdit = new QLineEdit(verticalLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        but = new QPushButton(verticalLayoutWidget);
        but->setObjectName(QStringLiteral("but"));

        verticalLayout->addWidget(but);

        toolBox->addItem(page, QStringLiteral("Page 1"));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setGeometry(QRect(0, 0, 171, 243));
        horizontalLayoutWidget_4 = new QWidget(page_2);
        horizontalLayoutWidget_4->setObjectName(QStringLiteral("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(0, 10, 160, 80));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(horizontalLayoutWidget_4);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());

        horizontalLayout_5->addWidget(tabWidget);

        toolBox->addItem(page_2, QStringLiteral("Page 2"));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        toolBox->addItem(page_3, QString::fromUtf8("\320\241\321\202\321\200\320\260\320\275\320\270\321\206\320\260"));
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        pushButton = new QPushButton(page_4);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(40, 90, 75, 23));
        toolBox->addItem(page_4, QString::fromUtf8("\320\241\321\202\321\200\320\260\320\275\320\270\321\206\320\260"));
        verticalLayoutWidget_3 = new QWidget(centralWidget);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(20, 10, 160, 162));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(verticalLayoutWidget_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_3->addWidget(label_4);

        namePresLine = new QLineEdit(verticalLayoutWidget_3);
        namePresLine->setObjectName(QStringLiteral("namePresLine"));

        verticalLayout_3->addWidget(namePresLine);

        label_5 = new QLabel(verticalLayoutWidget_3);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_3->addWidget(label_5);

        radiusPresLine = new QLineEdit(verticalLayoutWidget_3);
        radiusPresLine->setObjectName(QStringLiteral("radiusPresLine"));

        verticalLayout_3->addWidget(radiusPresLine);

        label_6 = new QLabel(verticalLayoutWidget_3);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_3->addWidget(label_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        coordPresX = new QLineEdit(verticalLayoutWidget_3);
        coordPresX->setObjectName(QStringLiteral("coordPresX"));

        horizontalLayout_4->addWidget(coordPresX);

        coordPresY = new QLineEdit(verticalLayoutWidget_3);
        coordPresY->setObjectName(QStringLiteral("coordPresY"));

        horizontalLayout_4->addWidget(coordPresY);


        verticalLayout_3->addLayout(horizontalLayout_4);

        but3 = new QPushButton(verticalLayoutWidget_3);
        but3->setObjectName(QStringLiteral("but3"));

        verticalLayout_3->addWidget(but3);

        verticalLayoutWidget_2 = new QWidget(centralWidget);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(200, 110, 160, 235));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        comboBox = new QComboBox(verticalLayoutWidget_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        verticalLayout_2->addWidget(comboBox);

        label_7 = new QLabel(verticalLayoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_2->addWidget(label_7);

        nameAddLine = new QLineEdit(verticalLayoutWidget_2);
        nameAddLine->setObjectName(QStringLiteral("nameAddLine"));

        verticalLayout_2->addWidget(nameAddLine);

        label = new QLabel(verticalLayoutWidget_2);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        coordXLine = new QLineEdit(verticalLayoutWidget_2);
        coordXLine->setObjectName(QStringLiteral("coordXLine"));

        horizontalLayout->addWidget(coordXLine);

        coordYLine = new QLineEdit(verticalLayoutWidget_2);
        coordYLine->setObjectName(QStringLiteral("coordYLine"));

        horizontalLayout->addWidget(coordYLine);


        verticalLayout_2->addLayout(horizontalLayout);

        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        gabXLine = new QLineEdit(verticalLayoutWidget_2);
        gabXLine->setObjectName(QStringLiteral("gabXLine"));

        horizontalLayout_3->addWidget(gabXLine);

        gabYLine = new QLineEdit(verticalLayoutWidget_2);
        gabYLine->setObjectName(QStringLiteral("gabYLine"));

        horizontalLayout_3->addWidget(gabYLine);


        verticalLayout_2->addLayout(horizontalLayout_3);

        label_3 = new QLabel(verticalLayoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        angleLine = new QLineEdit(verticalLayoutWidget_2);
        angleLine->setObjectName(QStringLiteral("angleLine"));

        verticalLayout_2->addWidget(angleLine);

        but2 = new QPushButton(verticalLayoutWidget_2);
        but2->setObjectName(QStringLiteral("but2"));

        verticalLayout_2->addWidget(but2);

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
        toolBar_2 = new QToolBar(QtGuiTest1Class);
        toolBar_2->setObjectName(QStringLiteral("toolBar_2"));
        QtGuiTest1Class->addToolBar(Qt::TopToolBarArea, toolBar_2);

        retranslateUi(QtGuiTest1Class);

        toolBox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(QtGuiTest1Class);
    } // setupUi

    void retranslateUi(QMainWindow *QtGuiTest1Class)
    {
        QtGuiTest1Class->setWindowTitle(QApplication::translate("QtGuiTest1Class", "QtGuiTest1", Q_NULLPTR));
        actionAdd->setText(QApplication::translate("QtGuiTest1Class", "add", Q_NULLPTR));
        radioButton->setText(QApplication::translate("QtGuiTest1Class", "RadioButton", Q_NULLPTR));
        lineEdit->setText(QString());
        but->setText(QApplication::translate("QtGuiTest1Class", "PushButton", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("QtGuiTest1Class", "Page 1", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("QtGuiTest1Class", "Tab 1", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("QtGuiTest1Class", "Tab 2", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("QtGuiTest1Class", "Page 2", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_3), QApplication::translate("QtGuiTest1Class", "\320\241\321\202\321\200\320\260\320\275\320\270\321\206\320\260", Q_NULLPTR));
        pushButton->setText(QApplication::translate("QtGuiTest1Class", "PushButton", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_4), QApplication::translate("QtGuiTest1Class", "\320\241\321\202\321\200\320\260\320\275\320\270\321\206\320\260", Q_NULLPTR));
        label_4->setText(QApplication::translate("QtGuiTest1Class", "name", Q_NULLPTR));
        namePresLine->setText(QApplication::translate("QtGuiTest1Class", "qwerty", Q_NULLPTR));
        label_5->setText(QApplication::translate("QtGuiTest1Class", "radius", Q_NULLPTR));
        radiusPresLine->setText(QApplication::translate("QtGuiTest1Class", "1.5", Q_NULLPTR));
        label_6->setText(QApplication::translate("QtGuiTest1Class", "coord", Q_NULLPTR));
        coordPresX->setText(QApplication::translate("QtGuiTest1Class", "7", Q_NULLPTR));
        coordPresY->setText(QApplication::translate("QtGuiTest1Class", "7", Q_NULLPTR));
        but3->setText(QApplication::translate("QtGuiTest1Class", "PushButton", Q_NULLPTR));
        label_7->setText(QApplication::translate("QtGuiTest1Class", "name", Q_NULLPTR));
        nameAddLine->setText(QApplication::translate("QtGuiTest1Class", "carrr", Q_NULLPTR));
        label->setText(QApplication::translate("QtGuiTest1Class", "Coord", Q_NULLPTR));
        coordXLine->setText(QApplication::translate("QtGuiTest1Class", "1", Q_NULLPTR));
        coordYLine->setText(QApplication::translate("QtGuiTest1Class", "1", Q_NULLPTR));
        label_2->setText(QApplication::translate("QtGuiTest1Class", "Gabarites", Q_NULLPTR));
        gabXLine->setText(QApplication::translate("QtGuiTest1Class", "1", Q_NULLPTR));
        gabYLine->setText(QApplication::translate("QtGuiTest1Class", "1", Q_NULLPTR));
        label_3->setText(QApplication::translate("QtGuiTest1Class", "Angle", Q_NULLPTR));
        angleLine->setText(QApplication::translate("QtGuiTest1Class", "36", Q_NULLPTR));
        but2->setText(QApplication::translate("QtGuiTest1Class", "PushButton", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("QtGuiTest1Class", "toolBar", Q_NULLPTR));
        toolBar_2->setWindowTitle(QApplication::translate("QtGuiTest1Class", "toolBar_2", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QtGuiTest1Class: public Ui_QtGuiTest1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTGUITEST1_H
