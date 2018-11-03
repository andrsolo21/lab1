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

Pres::Pres(std::string name) {
	_head = NULL;
	_tail = NULL;
	_grr = 0;

	int n;
	ifstream file(name);
	if (file.is_open())
	{
		file >> n;
		grow10(n);
		file >> _r;
		std::string s;
		float size[2], coord[2], angle;
		Car * tempCar;
		for (file >> s; !file.eof(); file >> s) {
			file >> size[0] >> size[1] >> angle >> coord[0] >> coord[1];
			tempCar = new Car(QString::fromStdString(s), angle, size, coord);
			addElement(*tempCar);
			delete tempCar;
		}
		file.close();
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
