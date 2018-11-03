#pragma once
#include "car.h"
#include <fstream> 
#include <string>
#include <QString>
#include <iostream>
class Stend :
	private Car
{
	
public:
	Stend();
	Stend(float rAdd, QString nameAdd, Car carAdd[], int n);
	Stend(const Stend & addData);
	~Stend();
	float getR() const;
	QString getName() const;
	float getCoord(int i) const;
	int getCount() const;

	void addElement(const Car element);
	void deleteElement(int i);
	void deleteAll();
	//void printToFile(std::string f) const;
	Car operator[](int c) const;


private:
	Car *_head, *_tail;
	int _grr = 0;
	float _r;
	float _coord[2];
	QString _name;

	void grow10(int zn = 1);
	bool checkCar(const Car carToCheck);
	float linear(float x[2], float a[2], float b[2]);
	int countDots(float a[2], float b[2], float rec[][2]);
	bool dots(float dots1[][2], float dots2[][2]);
	bool checkGabarits(float dots1[][2]);
};
