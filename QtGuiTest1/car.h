#pragma once
#include <iostream>
#include <cmath>   
class Car
{
public:
	Car();
	Car(std::string nameAdd, float angleAdd,float sizeAdd[], float coordAdd[]);
	Car(const Car &car);
	~Car();

	std::string getName() const;
	float getAngle() const;
	float getSize(int i) const;
	float getCoord(int i) const;
	float getA(int i) const;
	float getB(int i) const;
	float getC(int i) const;
	float getD(int i) const;
	//float getDots() const;
	float getRBig() const;
	float getRSmall() const;
	bool isInit() const;
	void setName(std::string nameAdd);
	void setAngle(float angleAdd);
	void setSize(float sizeAdd[]);
	void setCoord(float coordAdd[]);

	void calculate();
private:
	std::string _name;
	float _size[2], _angle, _coord[2];
	float _A[2], _B[2], _C[2], _D[2], _O[2],_R,_r,_dots[4][2];
	bool _initCar = true;
};

