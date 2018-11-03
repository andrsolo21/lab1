#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_qtguitest1.h"
#include <QPainter>
#include <QPushButton>
#include <QLineEdit>
#include <math.h>
#include "MotorShow.h"
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


private:
	Ui::QtGuiTest1Class ui;
	int _gabarits[2] = { 0,0};
	float _otn = 1;
	MotorShow *_motors = NULL;
	QLineEdit * lines;
	QPushButton * butt;
	QPolygonF rectMy(qreal a, qreal b, QPointF center, float alpha = 0);


	
};
