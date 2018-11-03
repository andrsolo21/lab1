#include "stend.h"
#include <fstream> 
#include <string>
#include <QString>
#include <iostream>

Stend::Stend()
{
	_head = NULL;
	_tail = NULL;
	_name = "noName";
	_r = 4;
	_coord[0] = 5;
	_coord[1] = 5;
	_grr = 0;
}

Stend::Stend(float rAdd, QString nameAdd, Car carAdd[], int n) {
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

Stend::Stend(const Stend & addData) {
	_grr = 0;
	_head = NULL;
	_tail = NULL;
	_r = addData.getR();
	_name = addData.getName();;

	for (int i = 0; i < addData.getCount(); i++) {
		addElement(addData[i]);
	}
}

float Stend::getR() const {
	return _r;
}

QString Stend::getName() const {
	return _name;
}

float Stend::getCoord(int i) const {
	return _coord[i % 2];
}

int Stend::getCount() const {
	return (_tail - _head);
}

Car Stend::operator [](int c) const
{
	if (c < (_tail - _head) && c >= 0) {
		return *(_head + c);
	}
	else
		throw std::exception("index out of range");
}

void Stend::addElement(Car  element) {
	if (element.isInit() && checkCar(element)) {
		grow10();
		Car * tempCar = new Car(element);
		*(_tail) = *(tempCar);
		delete tempCar;
		_tail = _tail + 1;
	}
}

void Stend::deleteElement(int c) {
	if (c < (_tail - _head) && c >= 0) {
		for (auto i = _head + c; i < _tail - 1; i++)
			*i = *(i + 1);
		_tail--;
	}
}

void Stend::deleteAll() {
	_tail = _head;
}

/*void Stend::printToFile(std::string f) const {
	ofstream fout(f, ios_base::out | ios_base::trunc);
	fout << getCount() << endl;
	Car * tempCar;
	for (auto i = _head; i < _tail; i++) {
		fout << endl << i->getName() << endl;
		fout << i->getSize(0) << ' ' << i->getSize(1) << ' ' << i->getAngle() <<
			' ' << i->getCoord(0) << ' ' << i->getCoord(1);
	}
	fout.close();
}*/

void Stend::grow10(int zn) {
	if (_grr == 0 || _tail - _head >= 10 * _grr - zn) {
		int startNum = 0;

		bool first = false;
		if (_grr == 0)
			first = true;

		if (zn % 10)
			_grr++;
		_grr += zn / 10;

		Car * add = new Car[10 * _grr];
		if (first) {
			_head = add;
			_tail = add;
		}
		else {
			int count = _tail - _head;
			for (auto i = 0; i < _tail - _head; i++) {
				*(add + i) = *(_head + i);
				delete (_head + i);
			}
			_head = add;
			_tail = add + count;
		}
	}
}

bool Stend::checkCar(const Car carToCheck) {
	float d;
	bool flag1, flag2, flag = true;
	float dots1[4][2], right, top;
	for (int j = 0; j < 2; j++) {
		dots1[0][j] = carToCheck.getA(j);
		dots1[1][j] = carToCheck.getB(j);
		dots1[2][j] = carToCheck.getC(j);
		dots1[3][j] = carToCheck.getD(j);
	}
	flag = checkGabarits(dots1);
	if (!flag)
		return false;
	if (_name != carToCheck.getName())
		return false;
	for (Car * i = _head; i < _tail; i++) {
		d = sqrt((i->getCoord(0) - carToCheck.getCoord(0)) * (i->getCoord(0) - carToCheck.getCoord(0)) +
			(i->getCoord(1) - carToCheck.getCoord(1)) * (i->getCoord(1) - carToCheck.getCoord(1)));
		if (i->getRSmall() + carToCheck.getRSmall() > d)
			return false;
		else {
			if (i->getRBig() + carToCheck.getRBig() < d) {
				flag = true;
			}
			else
			{
				flag = true;
				float dots2[4][2];
				for (int j = 0; j < 2; j++) {
					dots2[0][j] = i->getA(j);
					dots2[1][j] = i->getB(j);
					dots2[2][j] = i->getC(j);
					dots2[3][j] = i->getD(j);
				}
				flag1 = dots(dots1, dots2);
				flag2 = dots(dots2, dots1);
				if (flag1 == false && flag2 == false)
					return false;
			}
		}
	}
	return flag;
}

bool Stend::checkGabarits(float dots1[][2]) {
	for (int j = 0; j < 4; j++) {
		float rr = sqrt(pow(dots1[j][0], 2) + pow(dots1[j][1], 2));
		if (rr > _r)
			return false;
	}
	return true;
}

float Stend::linear(float c[2], float a[2], float b[2]) {
	int mn = 1, x = 0, y = 0;
	if (b[0] != a[0])
		x = (c[0] - a[0]) / (b[0] - a[0]);
	else {
		x = 0;
		mn = 0;
	}
	if (b[1] != a[1])
		y = (c[1] - a[1]) / (b[1] - a[1]);
	else {
		y = 0;
		mn = 0;
	}
	return mn * (x - y);
}

int Stend::countDots(float a[2], float b[2], float rec[][2]) {
	int n = 0;
	float x;
	for (int i = 0; i < 4; i++) {
		x = linear(a, b, rec[i]);
		if (x < 0)
			n = n - 1;
		else
			n = n + 1;
	}
	return n;
}

bool Stend::dots(float dots11[][2], float dots12[][2]) {
	int n1, n2, m1, m2;
	n1 = countDots(dots11[0], dots11[1], dots12);
	n2 = countDots(dots11[3], dots11[2], dots12);
	m1 = countDots(dots11[0], dots11[3], dots12);
	m2 = countDots(dots11[1], dots11[2], dots12);
	if ((n1 == -4 && n2 == -4) || (n1 == 4 && n2 == 4) || (m1 == -4 && m2 == -4) || (m1 == 4 && m2 == 4))
		return true;
	return false;
}

Stend::~Stend()
{
}
