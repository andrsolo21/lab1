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
#include <QtWidgets/QSpacerItem>
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
    QComboBox *comboBoxCar;
    QLabel *label_7;
    QLineEdit *nameAddLine;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLineEdit *coordXLine;
    QLineEdit *coordYLine;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *gabXLine;
    QLineEdit *gabYLine;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_3;
    QLineEdit *angleLine;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *but5;
    QPushButton *but2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *but7;
    QGroupBox *groupField;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_8;
    QLineEdit *lineEdit;
    QPushButton *but;
    QGroupBox *groupPres;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QComboBox *comboPress;
    QLineEdit *namePresLine;
    QLabel *label_5;
    QLineEdit *radiusPresLine;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *coordPresX;
    QLineEdit *coordPresY;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *but4;
    QPushButton *but3;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *but8;
    QGroupBox *btnGroup;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *addFieldBut;
    QPushButton *changeFieldBut;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *addCarBut;
    QPushButton *changeCarBut;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *addPresBut;
    QPushButton *changePressBut;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *reduceBut;
    QGroupBox *changeField;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_5;
    QPushButton *delAll;
    QPushButton *delAllCars;
    QPushButton *delAllPres;
    QLabel *label_11;
    QLineEdit *strToFile;
    QPushButton *printBtn;

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
        groupCar->setGeometry(QRect(30, 90, 291, 341));
        verticalLayoutWidget_2 = new QWidget(groupCar);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(10, 20, 271, 301));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetMinAndMaxSize);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        comboBox = new QComboBox(verticalLayoutWidget_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        verticalLayout_2->addWidget(comboBox);

        comboBoxCar = new QComboBox(verticalLayoutWidget_2);
        comboBoxCar->setObjectName(QStringLiteral("comboBoxCar"));

        verticalLayout_2->addWidget(comboBoxCar);

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
        horizontalLayout->setSizeConstraint(QLayout::SetMinAndMaxSize);
        coordXLine = new QLineEdit(verticalLayoutWidget_2);
        coordXLine->setObjectName(QStringLiteral("coordXLine"));

        horizontalLayout->addWidget(coordXLine);

        coordYLine = new QLineEdit(verticalLayoutWidget_2);
        coordYLine->setObjectName(QStringLiteral("coordYLine"));

        horizontalLayout->addWidget(coordYLine);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetMinAndMaxSize);
        gabXLine = new QLineEdit(verticalLayoutWidget_2);
        gabXLine->setObjectName(QStringLiteral("gabXLine"));

        horizontalLayout_3->addWidget(gabXLine);

        gabYLine = new QLineEdit(verticalLayoutWidget_2);
        gabYLine->setObjectName(QStringLiteral("gabYLine"));

        horizontalLayout_3->addWidget(gabYLine);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_3);

        label_3 = new QLabel(verticalLayoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        angleLine = new QLineEdit(verticalLayoutWidget_2);
        angleLine->setObjectName(QStringLiteral("angleLine"));

        verticalLayout_2->addWidget(angleLine);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setSizeConstraint(QLayout::SetMinAndMaxSize);
        but5 = new QPushButton(verticalLayoutWidget_2);
        but5->setObjectName(QStringLiteral("but5"));

        horizontalLayout_5->addWidget(but5);

        but2 = new QPushButton(verticalLayoutWidget_2);
        but2->setObjectName(QStringLiteral("but2"));

        horizontalLayout_5->addWidget(but2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout_5);

        but7 = new QPushButton(verticalLayoutWidget_2);
        but7->setObjectName(QStringLiteral("but7"));

        verticalLayout_2->addWidget(but7);

        groupField = new QGroupBox(centralWidget);
        groupField->setObjectName(QStringLiteral("groupField"));
        groupField->setGeometry(QRect(230, 20, 221, 271));
        verticalLayoutWidget = new QWidget(groupField);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 20, 281, 71));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinAndMaxSize);
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

        verticalLayoutWidget->raise();
        groupPres = new QGroupBox(centralWidget);
        groupPres->setObjectName(QStringLiteral("groupPres"));
        groupPres->setGeometry(QRect(460, 290, 281, 281));
        verticalLayoutWidget_3 = new QWidget(groupPres);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(10, 20, 211, 254));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(verticalLayoutWidget_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_3->addWidget(label_4);

        comboPress = new QComboBox(verticalLayoutWidget_3);
        comboPress->setObjectName(QStringLiteral("comboPress"));

        verticalLayout_3->addWidget(comboPress);

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
        horizontalLayout_4->setSizeConstraint(QLayout::SetMinAndMaxSize);
        coordPresX = new QLineEdit(verticalLayoutWidget_3);
        coordPresX->setObjectName(QStringLiteral("coordPresX"));

        horizontalLayout_4->addWidget(coordPresX);

        coordPresY = new QLineEdit(verticalLayoutWidget_3);
        coordPresY->setObjectName(QStringLiteral("coordPresY"));

        horizontalLayout_4->addWidget(coordPresY);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setSizeConstraint(QLayout::SetMinAndMaxSize);
        but4 = new QPushButton(verticalLayoutWidget_3);
        but4->setObjectName(QStringLiteral("but4"));

        horizontalLayout_9->addWidget(but4);

        but3 = new QPushButton(verticalLayoutWidget_3);
        but3->setObjectName(QStringLiteral("but3"));

        horizontalLayout_9->addWidget(but3);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_8);


        verticalLayout_3->addLayout(horizontalLayout_9);

        but8 = new QPushButton(verticalLayoutWidget_3);
        but8->setObjectName(QStringLiteral("but8"));

        verticalLayout_3->addWidget(but8);

        btnGroup = new QGroupBox(centralWidget);
        btnGroup->setObjectName(QStringLiteral("btnGroup"));
        btnGroup->setGeometry(QRect(490, 30, 271, 211));
        verticalLayoutWidget_4 = new QWidget(btnGroup);
        verticalLayoutWidget_4->setObjectName(QStringLiteral("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(10, 20, 211, 141));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setSizeConstraint(QLayout::SetMinAndMaxSize);
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setSizeConstraint(QLayout::SetMinAndMaxSize);
        addFieldBut = new QPushButton(verticalLayoutWidget_4);
        addFieldBut->setObjectName(QStringLiteral("addFieldBut"));

        horizontalLayout_7->addWidget(addFieldBut);

        changeFieldBut = new QPushButton(verticalLayoutWidget_4);
        changeFieldBut->setObjectName(QStringLiteral("changeFieldBut"));

        horizontalLayout_7->addWidget(changeFieldBut);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_6);


        verticalLayout_4->addLayout(horizontalLayout_7);

        label_9 = new QLabel(verticalLayoutWidget_4);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_4->addWidget(label_9);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetMinAndMaxSize);
        addCarBut = new QPushButton(verticalLayoutWidget_4);
        addCarBut->setObjectName(QStringLiteral("addCarBut"));

        horizontalLayout_2->addWidget(addCarBut);

        changeCarBut = new QPushButton(verticalLayoutWidget_4);
        changeCarBut->setObjectName(QStringLiteral("changeCarBut"));

        horizontalLayout_2->addWidget(changeCarBut);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout_4->addLayout(horizontalLayout_2);

        label_10 = new QLabel(verticalLayoutWidget_4);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout_4->addWidget(label_10);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setSizeConstraint(QLayout::SetMinAndMaxSize);
        addPresBut = new QPushButton(verticalLayoutWidget_4);
        addPresBut->setObjectName(QStringLiteral("addPresBut"));

        horizontalLayout_8->addWidget(addPresBut);

        changePressBut = new QPushButton(verticalLayoutWidget_4);
        changePressBut->setObjectName(QStringLiteral("changePressBut"));

        horizontalLayout_8->addWidget(changePressBut);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_4);


        verticalLayout_4->addLayout(horizontalLayout_8);

        reduceBut = new QPushButton(centralWidget);
        reduceBut->setObjectName(QStringLiteral("reduceBut"));
        reduceBut->setGeometry(QRect(0, 0, 31, 16));
        changeField = new QGroupBox(centralWidget);
        changeField->setObjectName(QStringLiteral("changeField"));
        changeField->setGeometry(QRect(10, 430, 201, 271));
        verticalLayoutWidget_5 = new QWidget(changeField);
        verticalLayoutWidget_5->setObjectName(QStringLiteral("verticalLayoutWidget_5"));
        verticalLayoutWidget_5->setGeometry(QRect(10, 30, 261, 157));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setSizeConstraint(QLayout::SetMinAndMaxSize);
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        delAll = new QPushButton(verticalLayoutWidget_5);
        delAll->setObjectName(QStringLiteral("delAll"));

        verticalLayout_5->addWidget(delAll);

        delAllCars = new QPushButton(verticalLayoutWidget_5);
        delAllCars->setObjectName(QStringLiteral("delAllCars"));

        verticalLayout_5->addWidget(delAllCars);

        delAllPres = new QPushButton(verticalLayoutWidget_5);
        delAllPres->setObjectName(QStringLiteral("delAllPres"));

        verticalLayout_5->addWidget(delAllPres);

        label_11 = new QLabel(verticalLayoutWidget_5);
        label_11->setObjectName(QStringLiteral("label_11"));

        verticalLayout_5->addWidget(label_11);

        strToFile = new QLineEdit(verticalLayoutWidget_5);
        strToFile->setObjectName(QStringLiteral("strToFile"));

        verticalLayout_5->addWidget(strToFile);

        printBtn = new QPushButton(verticalLayoutWidget_5);
        printBtn->setObjectName(QStringLiteral("printBtn"));

        verticalLayout_5->addWidget(printBtn);

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
        but5->setText(QApplication::translate("QtGuiTest1Class", "\320\276\321\202\320\274\320\265\320\275\320\260", Q_NULLPTR));
        but2->setText(QApplication::translate("QtGuiTest1Class", "\320\264\320\276\320\261\320\260\320\262\320\270\321\202\321\214", Q_NULLPTR));
        but7->setText(QApplication::translate("QtGuiTest1Class", "\321\203\320\264\320\260\320\273\320\270\321\202\321\214", Q_NULLPTR));
        groupField->setTitle(QApplication::translate("QtGuiTest1Class", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\277\320\276\320\273\320\265", Q_NULLPTR));
        label_8->setText(QApplication::translate("QtGuiTest1Class", "\321\201\321\207\320\270\321\202\320\260\321\202\321\214 \320\270\320\267 \321\204\320\260\320\271\320\273\320\260", Q_NULLPTR));
        lineEdit->setText(QApplication::translate("QtGuiTest1Class", "input.txt", Q_NULLPTR));
        but->setText(QApplication::translate("QtGuiTest1Class", "\321\201\320\276\320\267\320\264\320\260\321\202\321\214", Q_NULLPTR));
        groupPres->setTitle(QApplication::translate("QtGuiTest1Class", "\320\241\321\202\320\265\320\275\320\264", Q_NULLPTR));
        label_4->setText(QApplication::translate("QtGuiTest1Class", "name", Q_NULLPTR));
        namePresLine->setText(QString());
        label_5->setText(QApplication::translate("QtGuiTest1Class", "radius", Q_NULLPTR));
        radiusPresLine->setText(QString());
        label_6->setText(QApplication::translate("QtGuiTest1Class", "coord", Q_NULLPTR));
        coordPresX->setText(QString());
        coordPresY->setText(QString());
        but4->setText(QApplication::translate("QtGuiTest1Class", "\320\276\321\202\320\274\320\265\320\275\320\260", Q_NULLPTR));
        but3->setText(QApplication::translate("QtGuiTest1Class", "\320\264\320\276\320\261\320\260\320\262\320\270\321\202\321\214", Q_NULLPTR));
        but8->setText(QApplication::translate("QtGuiTest1Class", "\321\203\320\264\320\260\320\273\320\270\321\202\321\214", Q_NULLPTR));
        btnGroup->setTitle(QApplication::translate("QtGuiTest1Class", "\320\234\320\265\320\275\321\216", Q_NULLPTR));
        addFieldBut->setText(QApplication::translate("QtGuiTest1Class", "\321\201\320\276\320\267\320\264\320\260\321\202\321\214", Q_NULLPTR));
        changeFieldBut->setText(QApplication::translate("QtGuiTest1Class", "\320\270\320\267\320\274\320\265\320\275\320\270\321\202\321\214", Q_NULLPTR));
        label_9->setText(QApplication::translate("QtGuiTest1Class", "\320\234\320\260\321\210\320\270\320\275\320\260", Q_NULLPTR));
        addCarBut->setText(QApplication::translate("QtGuiTest1Class", "\320\264\320\276\320\261\320\260\320\262\320\270\321\202\321\214", Q_NULLPTR));
        changeCarBut->setText(QApplication::translate("QtGuiTest1Class", "\320\270\320\267\320\274\320\265\320\275\320\270\321\202\321\214", Q_NULLPTR));
        label_10->setText(QApplication::translate("QtGuiTest1Class", "\320\241\321\202\320\265\320\275\320\264", Q_NULLPTR));
        addPresBut->setText(QApplication::translate("QtGuiTest1Class", "\320\264\320\276\320\261\320\260\320\262\320\270\321\202\321\214", Q_NULLPTR));
        changePressBut->setText(QApplication::translate("QtGuiTest1Class", "\320\270\320\267\320\274\320\265\320\275\320\270\321\202\321\214", Q_NULLPTR));
        reduceBut->setText(QApplication::translate("QtGuiTest1Class", "...", Q_NULLPTR));
        changeField->setTitle(QApplication::translate("QtGuiTest1Class", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\277\320\276\320\273\320\265", Q_NULLPTR));
        delAll->setText(QApplication::translate("QtGuiTest1Class", "\321\203\320\264\320\260\320\273\320\270\321\202\321\214 \320\262\321\201\320\265", Q_NULLPTR));
        delAllCars->setText(QApplication::translate("QtGuiTest1Class", "\321\203\320\264\320\260\320\273\320\270\321\202\321\214 \320\262\321\201\320\265 \320\274\320\260\321\210\320\270\320\275\321\213", Q_NULLPTR));
        delAllPres->setText(QApplication::translate("QtGuiTest1Class", "\321\203\320\264\320\260\320\273\320\270\321\202\321\214 \320\262\321\201\320\265 \321\201\321\202\320\265\320\275\320\264\321\213", Q_NULLPTR));
        label_11->setText(QApplication::translate("QtGuiTest1Class", "\320\277\320\265\321\207\320\260\321\202\321\214 \320\262 \321\204\320\260\320\271\320\273", Q_NULLPTR));
        printBtn->setText(QApplication::translate("QtGuiTest1Class", "\320\277\320\265\321\207\320\260\321\202\321\214", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QtGuiTest1Class: public Ui_QtGuiTest1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTGUITEST1_H
