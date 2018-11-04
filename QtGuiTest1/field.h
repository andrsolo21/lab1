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
	void addPres(std::string f);
	void addPres(float rAdd, QString nameAdd, Car carAdd[] = {}, int n = 0);
	void addPres(const Pres  addData);
	int getCountP();
	void deletePres(int i);
	void deleteAllPres();
	void deleteAll() override;
	//Car operator[](int c) const;
	QString difClass() override;
	bool checkName(QString s1) override;
	//int getCount() const;
private:

	Pres *_headP, *_tailP;
	int _grrP = 0;

	void grow5P();

	bool checkPres(Pres element);


};

