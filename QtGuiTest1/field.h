#pragma once
#include "MotorShow.h"
#include "pres.h"
class Field :
	public MotorShow
{
public:
	Field();
	~Field();
	Field(Car * addData[], int addCount, float addGabarits[]);
	Field(const Field & addData);
	Field(std::string name);

	float getGabarits(int i) const;
	Pres getPres(int c) const;
	void addPres(const std::string& f);
	void addPres(float rAdd, QString nameAdd, float coord[], Car carAdd[] = {}, int n = 0);
	void addPres(const Pres&  addData);
	int getCountP();
	void deletePres(int i);
	void deleteAllPres();
	void deleteAll() override;
	QString difClass() override;
	void printToFile(const std::string& f) const;

private:


	Pres *_headP, *_tailP, *_add;
	int _grrP = 0;

	void grow5P();

	bool checkPres(const Pres& element);
	bool checkWithElipse(float dots1[][2]) override;
	float  roLineDot(float dot1[], float dot2[], float o[], int i);
	bool checkElRe(float dots1[][2], const Pres& Circle);
};

