#pragma once
#include "MotorShow.h"
#include <QString>
class Presentation :
	private MotorShow
{

public:
	Presentation();
	Presentation(float rAdd, QString nameAdd, Car carAdd[],int n);
	Presentation(const Presentation & addData);
	~Presentation();
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

