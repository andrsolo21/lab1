#pragma once
#include "MotorShow.h"
class Pres :
	public MotorShow

{
public:
	Pres();
	Pres(float rAdd, QString nameAdd, float _coord[], Car carAdd[], int n);
	Pres(const Pres & addData);
	Pres(std::string s);
	~Pres();
	float getR() const;
	QString getName() const;
	float getCoord(int i) const;
	QString difClass() override;
	bool checkName(QString s1) override;
private:
	bool checkGabarits(float dots1[][2]) override;
	float _r;
	float _coord[2];
	QString _name;

};

