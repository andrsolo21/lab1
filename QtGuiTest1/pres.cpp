#include "pres.h"





Pres::Pres()
{
	_head = NULL;
	_tail = NULL;
	_name = "noName";
	_r = 4;
	_coord[0] = 5;
	_coord[1] = 5;
	_grr = 0;
}

Pres::Pres(float rAdd, QString nameAdd, Car carAdd[], int n) {
	_grr = 0;
	_head = NULL;
	_tail = NULL;
	if (rAdd > 0)
		_r = rAdd;
	else
		_r = 4;
	if (nameAdd != "")
		_name = nameAdd;
	else
		_name = "noName";
	for (int i = 0; i < n; i++) {
		addElement(carAdd[i]);
	}
}

Pres::Pres(const Pres & addData) {
	_grr = 0;
	_head = NULL;
	_tail = NULL;
	_r = addData.getR();
	_name = addData.getName();;

	for (int i = 0; i < addData.getCount(); i++) {
		addElement(addData[i]);
	}
}

float Pres::getR() const {
	return _r;
}

QString Pres::getName() const {
	return _name;
}

float Pres::getCoord(int i) const {
	return _coord[i % 2];
}

bool Pres::checkGabarits(float dots1[][2]) {
	for (int j = 0; j < 4; j++) {
		float rr = sqrt(pow(dots1[j][0], 2) + pow(dots1[j][1], 2));
		if (rr > _r)
			return false;
	}
	return true;
}

Pres::~Pres()
{
}
