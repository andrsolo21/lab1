#pragma once
#include "Car.h"
#include <fstream> 
#include <string>
#include <QString>
#include <iostream>
using namespace std;

class MotorShow
{

public:
	MotorShow();
	MotorShow(Car * addData[], int addCount, float addGabarits[]);
	MotorShow(const MotorShow & addData);
	MotorShow(std::string f);
	~MotorShow();
	virtual void deleteAll();

	int getCount() const;
	void addElement(const Car & element);
	void deleteElement(int i);

	Car operator[](int c) const;
	float getGabarits(int i) const;
	void deleteAllElements();
	virtual QString difClass() = 0;
	virtual bool checkName(QString s1);


protected:
	Car *_head, *_tail;
	int _grr = 0;

	void grow10(int zn = 1);
	bool checkCar(const Car & carToCheck);

	float linear(float x[2], float a[2], float b[2]);
	int countDots(float a[2], float b[2], float rec[][2]);
	bool dots(float dots1[][2], float dots2[][2]);
	virtual bool checkGabarits(float dots1[][2]);
	virtual bool checkWithElipse(float dots1[][2]);

	float _gabarits[2];

};

