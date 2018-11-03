#pragma once
#include "MotorShow.h"
class Pres :
	protected MotorShow

{
public:
	Pres();
	Pres(float rAdd, QString nameAdd, Car carAdd[], int n);
	Pres(const Pres & addData);
	~Pres();
	float getR() const;
	QString getName() const;
	float getCoord(int i) const;

private:
	bool checkGabarits(float dots1[][2]);
private:
	float _r;
	float _coord[2];
	QString _name;

	QString _type = "Pres";
};

