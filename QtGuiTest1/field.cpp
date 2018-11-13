#include "field.h"


Field::Field()
{
	_head = NULL;
	_tail = NULL;
	_grr = 0;
	_headP = NULL;
	_tailP = NULL;
	_grrP = 0;
	_gabarits[0] = 10;
	_gabarits[1] = 10;
	_add = nullptr;
}

Field::Field(Car * addData[], int addCount, float addGabarits[]) {
	_head = NULL;
	_tail = NULL;
	_grr = 0;

	_headP = NULL;
	_tailP = NULL;
	_grrP = 0;
	if (addGabarits[0] > 0 && addGabarits[1] > 0) {
		_gabarits[0] = addGabarits[0];
		_gabarits[1] = addGabarits[1];
	}

	grow10(addCount);
	for (int i = 0; i < addCount; i++) {
		addElement(*addData[i]);
	}
	_add = nullptr;
}

Field::Field(const Field & addData) {
	_head = NULL;
	_tail = NULL;
	_grr = 0;
	_headP = NULL;
	_tailP = NULL;
	_grrP = 0;
	_gabarits[0] = addData.getGabarits(0);
	_gabarits[1] = addData.getGabarits(1);
	grow10(addData.getCount());
	for (int i = 0; i < addData.getCount(); i++) {
		addElement(addData[i]);
	}
	_add = nullptr;
}

Field::Field(std::string name) {
	_head = NULL;
	_tail = NULL;
	_grr = 0;

	_headP = NULL;
	_tailP = NULL;
	_grrP = 0;
	int n;
	ifstream file(name);
	if (file.is_open())
	{
		file >> n;
		grow10(n);
		file >> _gabarits[0];
		file >> _gabarits[1];
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
	_add = nullptr;

}

void Field::printToFile(const std::string& f) const {
	ofstream fout(f, ios_base::out | ios_base::trunc);
	fout << (_tail - _head) << endl;
	fout << _gabarits[0] << ' ';
	fout << _gabarits[1];
	Car * tempCar;
	for (auto i = _head; i < _tail; i++) {
		fout << endl << (i->getName()).toStdString() << endl;
		fout << i->getSize(0) << ' ' << i->getSize(1) << ' ' << i->getAngle() <<
			' ' << i->getCoord(0) << ' ' << i->getCoord(1);
	}
	fout.close();
}

float Field::getGabarits(int i) const {
	return _gabarits[i % 2];
}

void Field::grow5P() {
	if (_grrP == 0 || _tailP - _headP >= 5 * _grrP - 1) {
		int startNum = 0;

		bool first = false;
		if (_grrP == 0)
			first = true;

		_grrP++;
		_add = new Pres[5 * _grrP];
		if (first) {
			_headP = _add;
			_tailP = _add;
		}
		else {
			int count = _tailP - _headP;
			for (auto i = 0; i < _tailP - _headP; i++) {
				*(_add + i) = *(_headP + i);
				//delete (_headP + i);
			}
			delete[] _headP;
			_headP = _add;
			_tailP = _add + count;
		}
	}
}

QString Field::difClass() {
	return "field";
}

Pres Field::getPres(int c) const {
	if (c < (_tailP - _headP) && c >= 0) {
		return *(_headP + c);
	}
	else
		throw std::exception("index out of range");
}

void Field::addPres(const std::string& f) {
	Pres * element = new Pres(f);
	if (checkPres(*element)) {

		grow5P();
		*_tailP = *element;
		_tailP = _tailP + 1;
	}
	delete element;
}

void Field::addPres(float rAdd, QString nameAdd, float coord[], Car carAdd[], int n) {
	Pres element(rAdd, nameAdd, coord, carAdd, n);
	if (checkPres(element)) {
		grow5P();
		*(_tailP) = element;
		_tailP = _tailP + 1;
	}
}

void Field::addPres(const Pres& addData) {
	if (checkPres(addData)) {
		grow5P();
		*(_tailP) = addData;
		_tailP = _tailP + 1;
	}
}

int Field::getCountP() {
	return (_tailP - _headP);
}

bool Field::checkWithElipse(float dots1[][2]) {

	for (auto i = _headP; i < _tailP; i++) {
		if (!checkElRe(dots1, *i))
			return false;
	}
	return true;
}

bool Field::checkElRe(float dots1[][2], const Pres& circle) {
	float center[2], rr, mass[2];
	center[0] = circle.getCoord(0);
	center[1] = circle.getCoord(1);
	for (int j = 0; j < 4; j++) {
		if (circle.getR() >=
			sqrt(pow(dots1[j][0] - circle.getCoord(0), 2) + pow(dots1[j][1] - circle.getCoord(1), 2)))
			return false;
	}

	for (int j = 0; j < 3; j++) {

		mass[0] = roLineDot(dots1[j], dots1[j + 1], center, 0);
		mass[1] = roLineDot(dots1[j], dots1[j + 1], center, 1);
		rr = sqrt(pow(mass[0] - circle.getCoord(0), 2) + pow(mass[1] - circle.getCoord(1), 2));
		if (rr <= circle.getR() && (
			(mass[0] > dots1[j][0]) && (mass[0] < dots1[j + 1][0]) ||
			(mass[0] < dots1[j][0]) && (mass[0] > dots1[j + 1][0]) ||
			(mass[1] > dots1[j][1]) && (mass[1] < dots1[j + 1][1]) ||
			(mass[1] < dots1[j][1]) && (mass[1] > dots1[j + 1][1])
			))
			return false;
	}

	mass[0] = roLineDot(dots1[3], dots1[0], center, 0);
	mass[1] = roLineDot(dots1[3], dots1[0], center, 1);
	rr = sqrt(pow(mass[0] - circle.getCoord(0), 2) + pow(mass[1] - circle.getCoord(1), 2));
	if (rr <= circle.getR() && (
		(mass[0] > dots1[3][0]) && (mass[0] < dots1[0][0]) ||
		(mass[0] < dots1[3][0]) && (mass[0] > dots1[0][0]) ||
		(mass[1] > dots1[3][1]) && (mass[1] < dots1[0][1]) ||
		(mass[1] < dots1[3][1]) && (mass[1] > dots1[0][1])
		))
		return false;
	return true;
}

float  Field::roLineDot(float dot1[], float dot2[], float o[], int i) {
	float a, b, c, mass[2];
	if (dot1[0] != dot2[0])
		a = 1 / (dot2[0] - dot1[0]);
	else {
		mass[0] = dot1[0];
		mass[1] = o[1];
		return mass[i];
	}
	if (dot1[1] != dot2[1])
		b = 1 / (dot1[1] - dot2[1]);
	else
	{
		mass[1] = dot1[1];
		mass[0] = o[0];
		return mass[i];
	}

	c = dot1[0] / (dot2[0] - dot1[0]) - dot1[1] / (dot2[1] - dot1[1]);
	mass[1] = (b*a*o[0] + a * a*o[1] - c * b) / (a*a + b * b);
	mass[0] = a * (mass[1] - o[1]) / b - o[0];

	return mass[i];
}

bool Field::checkPres(const Pres& element) {
	for (auto i = _head; i < _tail; i++) {
		float dots1[4][2];
		for (int j = 0; j < 2; j++) {
			dots1[0][j] = i->getA(j);
			dots1[1][j] = i->getB(j);
			dots1[2][j] = i->getC(j);
			dots1[3][j] = i->getD(j);
		}
		if (!checkElRe(dots1, element))
			return false;
	}
	for (auto i = _headP; i < _tailP; i++) {
		if ((i->getR() + element.getR()) >=
			sqrt(pow(i->getCoord(0) - element.getCoord(0), 2) + pow(i->getCoord(1) - element.getCoord(1), 2)))
			return false;
	}
	if (element.getCoord(0) + element.getR() > _gabarits[0])
		return false;

	if (element.getCoord(1) + element.getR() > _gabarits[1])
		return false;

	if (element.getCoord(0) - element.getR() < 0)
		return false;

	if (element.getCoord(1) - element.getR() < 0)
		return false;


	return true;
}

void Field::deletePres(int c) {
	if (c < (_tailP - _headP) && c >= 0) {
		for (auto i = _headP + c; i < _tailP - 1; i++)
			*i = *(i + 1);
		_tailP--;
	}
}

void Field::deleteAllPres() {
	/*for (auto i = _headP; i < _tailP; i++)
		delete i;
	delete[] _headP;
	_tailP = NULL;
	_headP = NULL;
	_grrP = 0;*/
	_tailP = _headP;

}

void Field::deleteAll() {
	for (auto i = _head; i < _tail; i++)
		delete i;
	delete[] _head;
	_tail = NULL;
	_head = NULL;
	_grr = 0;

	//_tail = _head;

	for (auto i = _headP; i < _tailP; i++)
		delete i;
	delete[] _headP;
	_tailP = NULL;
	_headP = NULL;
	_grrP = 0;

	//_tailP = _headP;
}

Field::~Field()
{
	//deleteAll();
}
