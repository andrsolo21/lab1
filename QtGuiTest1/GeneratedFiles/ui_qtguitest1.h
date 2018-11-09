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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtGuiTest1Class
{
public:
    QAction *actionAdd;
    QWidget *centralWidget;
    QGroupBox *groupCar;
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
    QHBoxLayout *horizontalLayout_6;
    QPushButton *but5;
    QPushButton *but2;
    QGroupBox *groupField;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_8;
    QLineEdit *lineEdit;
    QPushButton *but;
    QPushButton *delAllCars;
    QPushButton *delAll;
    QPushButton *delAllPres;
    QLabel *label_11;
    QLineEdit *strToFile;
    QPushButton *printBtn;
    QGroupBox *groupPres;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QComboBox *comboBox3;
    QLineEdit *namePresLine;
    QLabel *label_5;
    QLineEdit *radiusPresLine;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *coordPresX;
    QLineEdit *coordPresY;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *but4;
    QPushButton *but3;
    QGroupBox *btnGroup;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QPushButton *addFieldBut;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *addCarBut;
    QPushButton *pushButton_2;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *addPresBut;
    QPushButton *pushButton_4;
    QPushButton *reduceBut;

    void setupUi(QMainWindow *QtGuiTest1Class)
    {
        if (QtGuiTest1Class->objectName().isEmpty())
            QtGuiTest1Class->setObjectName(QStringLiteral("QtGuiTest1Class"));
        QtGuiTest1Class->resize(759, 565);
        actionAdd = new QAction(QtGuiTest1Class);
        actionAdd->setObjectName(QStringLiteral("actionAdd"));
        centralWidget = new QWidget(QtGuiTest1Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupCar = new QGroupBox(centralWidget);
        groupCar->setObjectName(QStringLiteral("groupCar"));
        groupCar->setGeometry(QRect(50, 20, 181, 341));
        verticalLayoutWidget_2 = new QWidget(groupCar);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(10, 20, 168, 269));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetNoConstraint);
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

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        but5 = new QPushButton(verticalLayoutWidget_2);
        but5->setObjectName(QStringLiteral("but5"));

        horizontalLayout_6->addWidget(but5);

        but2 = new QPushButton(verticalLayoutWidget_2);
        but2->setObjectName(QStringLiteral("but2"));

        horizontalLayout_6->addWidget(but2);


        verticalLayout_2->addLayout(horizontalLayout_6);

        groupField = new QGroupBox(centralWidget);
        groupField->setObjectName(QStringLiteral("groupField"));
        groupField->setGeometry(QRect(260, 50, 221, 461));
        verticalLayoutWidget = new QWidget(groupField);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 20, 211, 231));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(verticalLayoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout->addWidget(label_8);

        lineEdit = new QLineEdit(verticalLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        but = new QPushButton(verticalLayoutWidget);
        but->setObjectName(QStringLiteral("but"));

        verticalLayout->addWidget(but);

        delAllCars = new QPushButton(verticalLayoutWidget);
        delAllCars->setObjectName(QStringLiteral("delAllCars"));

        verticalLayout->addWidget(delAllCars);

        delAll = new QPushButton(verticalLayoutWidget);
        delAll->setObjectName(QStringLiteral("delAll"));

        verticalLayout->addWidget(delAll);

        delAllPres = new QPushButton(verticalLayoutWidget);
        delAllPres->setObjectName(QStringLiteral("delAllPres"));

        verticalLayout->addWidget(delAllPres);

        label_11 = new QLabel(verticalLayoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        verticalLayout->addWidget(label_11);

        strToFile = new QLineEdit(verticalLayoutWidget);
        strToFile->setObjectName(QStringLiteral("strToFile"));

        verticalLayout->addWidget(strToFile);

        printBtn = new QPushButton(verticalLayoutWidget);
        printBtn->setObjectName(QStringLiteral("printBtn"));

        verticalLayout->addWidget(printBtn);

        groupPres = new QGroupBox(centralWidget);
        groupPres->setObjectName(QStringLiteral("groupPres"));
        groupPres->setGeometry(QRect(530, 270, 201, 241));
        verticalLayoutWidget_3 = new QWidget(groupPres);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(10, 20, 160, 216));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(verticalLayoutWidget_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_3->addWidget(label_4);

        comboBox3 = new QComboBox(verticalLayoutWidget_3);
        comboBox3->setObjectName(QStringLiteral("comboBox3"));

        verticalLayout_3->addWidget(comboBox3);

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

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        but4 = new QPushButton(verticalLayoutWidget_3);
        but4->setObjectName(QStringLiteral("but4"));

        horizontalLayout_5->addWidget(but4);

        but3 = new QPushButton(verticalLayoutWidget_3);
        but3->setObjectName(QStringLiteral("but3"));

        horizontalLayout_5->addWidget(but3);


        verticalLayout_3->addLayout(horizontalLayout_5);

        btnGroup = new QGroupBox(centralWidget);
        btnGroup->setObjectName(QStringLiteral("btnGroup"));
        btnGroup->setGeometry(QRect(560, 30, 161, 211));
        verticalLayoutWidget_4 = new QWidget(btnGroup);
        verticalLayoutWidget_4->setObjectName(QStringLiteral("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(0, 40, 161, 141));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        addFieldBut = new QPushButton(verticalLayoutWidget_4);
        addFieldBut->setObjectName(QStringLiteral("addFieldBut"));

        verticalLayout_4->addWidget(addFieldBut);

        label_9 = new QLabel(verticalLayoutWidget_4);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_4->addWidget(label_9);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        addCarBut = new QPushButton(verticalLayoutWidget_4);
        addCarBut->setObjectName(QStringLiteral("addCarBut"));

        horizontalLayout_2->addWidget(addCarBut);

        pushButton_2 = new QPushButton(verticalLayoutWidget_4);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout_4->addLayout(horizontalLayout_2);

        label_10 = new QLabel(verticalLayoutWidget_4);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout_4->addWidget(label_10);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        addPresBut = new QPushButton(verticalLayoutWidget_4);
        addPresBut->setObjectName(QStringLiteral("addPresBut"));

        horizontalLayout_8->addWidget(addPresBut);

        pushButton_4 = new QPushButton(verticalLayoutWidget_4);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        horizontalLayout_8->addWidget(pushButton_4);


        verticalLayout_4->addLayout(horizontalLayout_8);

        reduceBut = new QPushButton(centralWidget);
        reduceBut->setObjectName(QStringLiteral("reduceBut"));
        reduceBut->setGeometry(QRect(0, 0, 31, 16));
        QtGuiTest1Class->setCentralWidget(centralWidget);

        retranslateUi(QtGuiTest1Class);

        QMetaObject::connectSlotsByName(QtGuiTest1Class);
    } // setupUi

    void retranslateUi(QMainWindow *QtGuiTest1Class)
    {
        QtGuiTest1Class->setWindowTitle(QApplication::translate("QtGuiTest1Class", "QtGuiTest1", Q_NULLPTR));
        actionAdd->setText(QApplication::translate("QtGuiTest1Class", "add", Q_NULLPTR));
        groupCar->setTitle(QApplication::translate("QtGuiTest1Class", "\320\234\320\260\321\210\320\270\320\275\320\260", Q_NULLPTR));
        label_7->setText(QApplication::translate("QtGuiTest1Class", "name", Q_NULLPTR));
        nameAddLine->setText(QString());
        label->setText(QApplication::translate("QtGuiTest1Class", "Coord", Q_NULLPTR));
        coordXLine->setText(QString());
        coordYLine->setText(QString());
        label_2->setText(QApplication::translate("QtGuiTest1Class", "Gabarites", Q_NULLPTR));
        gabXLine->setText(QString());
        gabYLine->setText(QString());
        label_3->setText(QApplication::translate("QtGuiTest1Class", "Angle", Q_NULLPTR));
        angleLine->setText(QString());
        but5->setText(QApplication::translate("QtGuiTest1Class", "PushButton", Q_NULLPTR));
        but2->setText(QApplication::translate("QtGuiTest1Class", "PushButton", Q_NULLPTR));
        groupField->setTitle(QApplication::translate("QtGuiTest1Class", "\320\237\320\276\320\273\320\265", Q_NULLPTR));
        label_8->setText(QApplication::translate("QtGuiTest1Class", "\321\201\321\207\320\270\321\202\320\260\321\202\321\214 \320\270\320\267 \321\204\320\260\320\271\320\273\320\260", Q_NULLPTR));
        lineEdit->setText(QApplication::translate("QtGuiTest1Class", "input.txt", Q_NULLPTR));
        but->setText(QApplication::translate("QtGuiTest1Class", "\321\201\320\276\320\267\320\264\320\260\321\202\321\214", Q_NULLPTR));
        delAllCars->setText(QApplication::translate("QtGuiTest1Class", "\321\203\320\264\320\260\320\273\320\270\321\202\321\214 \320\262\321\201\320\265 \320\274\320\260\321\210\320\270\320\275\321\213", Q_NULLPTR));
        delAll->setText(QApplication::translate("QtGuiTest1Class", "\321\203\320\264\320\260\320\273\320\270\321\202\321\214 \320\262\321\201\320\265", Q_NULLPTR));
        delAllPres->setText(QApplication::translate("QtGuiTest1Class", "\321\203\320\264\320\260\320\273\320\270\321\202\321\214 \320\262\321\201\320\265 \321\201\321\202\320\265\320\275\320\264\321\213", Q_NULLPTR));
        label_11->setText(QApplication::translate("QtGuiTest1Class", "\320\277\320\265\321\207\320\260\321\202\321\214 \320\262 \321\204\320\260\320\271\320\273", Q_NULLPTR));
        printBtn->setText(QApplication::translate("QtGuiTest1Class", "\320\277\320\265\321\207\320\260\321\202\321\214", Q_NULLPTR));
        groupPres->setTitle(QApplication::translate("QtGuiTest1Class", "\320\241\321\202\320\265\320\275\320\264", Q_NULLPTR));
        label_4->setText(QApplication::translate("QtGuiTest1Class", "name", Q_NULLPTR));
        namePresLine->setText(QString());
        label_5->setText(QApplication::translate("QtGuiTest1Class", "radius", Q_NULLPTR));
        radiusPresLine->setText(QString());
        label_6->setText(QApplication::translate("QtGuiTest1Class", "coord", Q_NULLPTR));
        coordPresX->setText(QString());
        coordPresY->setText(QString());
        but4->setText(QApplication::translate("QtGuiTest1Class", "PushButton", Q_NULLPTR));
        but3->setText(QApplication::translate("QtGuiTest1Class", "PushButton", Q_NULLPTR));
        btnGroup->setTitle(QApplication::translate("QtGuiTest1Class", "GroupBox", Q_NULLPTR));
        addFieldBut->setText(QApplication::translate("QtGuiTest1Class", "\320\237\320\276\320\273\320\265", Q_NULLPTR));
        label_9->setText(QApplication::translate("QtGuiTest1Class", "\320\234\320\260\321\210\320\270\320\275\320\260", Q_NULLPTR));
        addCarBut->setText(QApplication::translate("QtGuiTest1Class", "\320\264\320\276\320\261\320\260\320\262\320\270\321\202\321\214", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("QtGuiTest1Class", "\320\270\320\267\320\274\320\265\320\275\320\270\321\202\321\214", Q_NULLPTR));
        label_10->setText(QApplication::translate("QtGuiTest1Class", "\320\241\321\202\320\265\320\275\320\264", Q_NULLPTR));
        addPresBut->setText(QApplication::translate("QtGuiTest1Class", "\320\264\320\276\320\261\320\260\320\262\320\270\321\202\321\214", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("QtGuiTest1Class", "\320\270\320\267\320\274\320\265\320\275\320\270\321\202\321\214", Q_NULLPTR));
        reduceBut->setText(QApplication::translate("QtGuiTest1Class", "...", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QtGuiTest1Class: public Ui_QtGuiTest1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTGUITEST1_H
