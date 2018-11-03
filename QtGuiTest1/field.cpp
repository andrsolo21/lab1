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

}

float Field::getGabarits(int i) const {
	return _gabarits[i % 2];
}

Car Field::operator [](int c) const
{
	if (c < (_tail - _head) && c >= 0) {
		return *(_head + c);
	}
	else
		throw std::exception("index out of range");
}

void Field::grow5P() {
	if (_grrP == 0 || _tailP - _headP >= 5 * _grrP - 1) {
		int startNum = 0;

		bool first = false;
		if (_grr == 0)
			first = true;


		Pres * add = new Pres[5 * _grr];
		if (first) {
			_headP = add;
			_tailP = add;
		}
		else {
			int count = _tailP - _headP;
			for (auto i = 0; i < _tailP - _headP; i++) {
				*(add + i) = *(_headP + i);
				delete (_head + i);
			}
			delete[] _headP;
			_headP = add;
			_tailP = add + count;
		}
	}
}

int Field::getCount() const {
	return (_tail - _head);
}

Pres Field::getPres(int c) const {
	if (c < (_tailP - _headP) && c >= 0) {
		return *(_headP + c);
	}
	else
		throw std::exception("index out of range");
}

void Field::addPres(std::string f) {
	Pres element(f);
	if ( checkPres(element)) {
		grow5P();
		*(_tailP) = element;
		_tailP = _tailP + 1;
	}
}

void Field::addPres(float rAdd, QString nameAdd, Car carAdd[], int n) {
	Pres element(rAdd, nameAdd, carAdd, n);
	if ( checkPres(element)) {
		grow5P();
		*(_tailP) = element;
		_tailP = _tailP + 1;
	}
}

void Field::addPres(const Pres addData) {
	Pres element(addData);
	if ( checkPres(element)) {
		grow5P();
		*(_tailP) = element;
		_tailP = _tailP + 1;
	}
}

int Field::getCountP() {
	return (_tailP - _headP);
}

void Field::deletePres(int c) {
	if (c < (_tailP - _headP) && c >= 0) {
		for (auto i = _headP + c; i < _tailP - 1; i++)
			*i = *(i + 1);
		_tailP--;
	}
}

bool Field::checkPres(Pres element) {
	return true;
}

void Field::deleteAllPres() {
	_tailP = _headP;
	delete[] _headP;
}