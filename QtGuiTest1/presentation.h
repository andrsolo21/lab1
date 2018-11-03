#pragma once
#include "MotorShow.h"
#include <QString>
class Presentation :
	protected MotorShow
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
	float _r;
	float _coord[2];
	QString _name;
	bool checkGabarits(float dots1[][2]) ;
	
};

