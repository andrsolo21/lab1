#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_qtguitest1.h"
#include <QPainter>
#include <QPushButton>
#include <QLineEdit>
#include <math.h>
#include "MotorShow.h"
#include "field.h"
# define M_PI           3.14159265358979323846

class QtGuiTest1 : public QMainWindow
{
	Q_OBJECT

public:
	QtGuiTest1(QWidget *parent = Q_NULLPTR);
	void paintEvent(QPaintEvent *event);
	void readObjects(std::string s);

	/*
signals:
	void signalFromButton();
	//void valueChanged(int newValue);*/


public slots:
	void slotBut();
	//void emitBut();
	//void setValue(int value);
	void setCar();
	//void changeCar();
	void setPres();
	//void comboSelectItem(int index);
	//void whatDoCarsSelectons(int index);
	//void iDoCars(int index);
	void reduce();
	void printToFile();
	void deleteAllElements() {
		_motors->deleteAllElements();
		update();
	}
	void deleteAllPres() {
		_motors->deleteAllPres();
		update();
	}
	void deleteAll() {
		_motors->deleteAll();
		update();
	}
	void doVisible1();
	void doVisible3();
	void doVisible2();
	void doVisible4();
	void doVisible5();
	void doVisible6();
	void iDo6(int k = 1);
	void iDo5(int k = 1);
	void iDo3();
	void iDo2();
	void changePres();
	void changeCar();
	void cancelPres();
	void cancelCar();
	void deleteThisPres();
	void deleteThisCar();
	void comboCar(int index);

private:
	Ui::QtGuiTest1Class ui;
	int _gabarits[2] = { 0 ,0 };
	float _otn = 1;
	Field *_motors = NULL;
	QLineEdit * lines;
	QPushButton * butt;
	QPolygonF rectMy(qreal a, qreal b, const QPointF& center, float alpha = 0);

	Pres * getPres();
	Car * getCar();
	void comboboxAdd();
	//void comboboxChange();

	//void whatDoCarsBox();
	void setSize(int ots);



	void coonections();
	bool _btns = true;

};
