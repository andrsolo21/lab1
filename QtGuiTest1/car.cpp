#include "car.h"
//#include <cstring>
//#include <iostream>
//#include <cstdio>
using namespace std;

Car::Car()
{
	_name = "newCar";
	_angle = 0;
	_size[0] = 1.5;
	_size[1] = 3;
	_coord[0] = 0;
	_coord[1] = 0;
	_initCar = false;
}
Car::Car(string nameAdd, float angleAdd, float sizeAdd[], float coordAdd[]) {
	if (nameAdd != "")
		_name = nameAdd;
	else {
		_initCar = false;
		_name = "newCar";
	}
	int toAngle = int(angleAdd);
	_angle = (toAngle % 360 + 360) % 360 + angleAdd - toAngle;
	if (sizeAdd[0] > 0)
		_size[0] = sizeAdd[0];
	else {
		_initCar = false;
		_size[0] = 1.5;
	}
	if (sizeAdd[1] > 0)
		_size[1] = sizeAdd[1];
	else {
		_initCar = false;
		_size[1] = 3; 
	}
	if (coordAdd[0] > 0)
		_coord[0] = coordAdd[0];
	else {
		_initCar = false;
		_coord[0] = 1;
	}
	if (coordAdd[1] > 0)
		_coord[1] = coordAdd[1];
	else {
		_initCar = false;
		_coord[1] = 1;
	}
	if (_initCar)
		calculate();
}
Car::Car(const Car &car) {
	_name = car._name;
	_angle = car._angle;
	_size[0] = car._size[0];
	_size[1] = car._size[1];
	_coord[0] = car._coord[0];
	_coord[1] = car._coord[1];
	calculate();
}
void Car::setName(string nameAdd) {
	if (nameAdd != "")
		_name = nameAdd;
}
void Car::setAngle(float angleAdd) {
	int toAngle = int(angleAdd);
	_angle = (toAngle % 360 + 360) % 360 + angleAdd - toAngle;
}
void Car::setCoord(float coordAdd[]) {
	if (_coord[0] > 0 && _coord[1] > 0) {
		_coord[0] = coordAdd[0];
		_coord[1] = coordAdd[1];
	}
}
void Car::setSize(float sizeAdd[]) {
	if (sizeAdd[0] > 0 && sizeAdd[1] > 0) {
		_size[0] = sizeAdd[0];
		_size[1] = sizeAdd[1];
	}
}
string Car::getName() const {
	return _name;
}
float Car::getAngle() const {
	return _angle;
}
float Car::getSize(int i) const {
	return _size[i % 2];
}
float Car::getCoord(int i) const {
	return _coord[i % 2];
}
float Car::getA(int i) const {
	return _A[i % 2];
}
float Car::getB(int i) const {
	return _B[i % 2];
}
float Car::getC(int i) const {
	return _C[i % 2];
}
float Car::getD(int i) const {
	return _D[i % 2];
}
float Car::getRBig() const {
	return _R;
}
float Car::getRSmall() const {
	return _r;
}
void Car::calculate() {
	float fi = atan(_size[1] / _size[0]);
	_R = sqrt(((_size[0]) / 2) * ((_size[0]) / 2) + ((_size[1]) / 2) * ((_size[1]) / 2));
	if (_size[0] / 2 > _size[1] / 2)
		_r = _size[1] / 2;
	else
		_r = _size[0] / 2;

	_C[0] = _R * sin(fi) + _coord[0];
	_D[0] = _R * sin(90 + fi) + _coord[0];
	_A[0] = _R * sin(-1 * fi) + _coord[0];
	_B[0] = _R * sin(fi - 90) + _coord[0];

	_C[1] = _R * cos(fi) + _coord[1];
	_D[1] = _R * cos(90 + fi) + _coord[1];
	_A[1] = _R * cos(-1 * fi) + _coord[1];
	_B[1] = _R * cos(fi - 90) + _coord[1];
}
bool Car::isInit() const {
	return _initCar;
}
Car::~Car()
{
	
}