#include "qtguitest1.h"

bool fileIsExist(const std::string & filePath);

QtGuiTest1::QtGuiTest1(QWidget *parent)
	: QMainWindow(parent)
{


	ui.setupUi(this);
	ui.groupCar->setVisible(false);
	ui.groupPres->setVisible(false);
	ui.groupField->setVisible(false);
	ui.changeField->setVisible(false);
	ui.btnGroup->setVisible(true);
	coonections();
	slotBut();

}

void QtGuiTest1::paintEvent(QPaintEvent *event)
{
	QPainter painter(this);
	QPolygonF polygon, fon, fon1;
	int ots = 7;
	qreal gabs[2] = { 0,0 };
	if (width() < 30 || height() < min(30, 3 * ots + 1))
		return;

	//ui.toolBox->move(width() / 4 * 3,ots * 2);
	//ui.toolBox->(width() / 1 * 3, height() - ots * 3);
	setSize(ots);
	QPointF center, center2, center3;
	float w, h;

	//��������� ����
	if (_btns) {
		w = (double)width() / 4 * 3 - ots * 2;
		h = height() - ots * 2;

		fon1 << QPointF(0, 0);
		fon1 << QPointF(width() / 4 * 3, 0);
		fon1 << QPointF(width() / 4 * 3, height());
		fon1 << QPointF(0, height());
		painter.setBrush(QBrush(Qt::lightGray));
		painter.setPen(QPen(Qt::lightGray));
		painter.drawPolygon(fon1);
	}
	else {
		w = width() - ots * 2;
		h = height() - ots * 2;

		fon1 << QPointF(0, 0);
		fon1 << QPointF(width(), 0);
		fon1 << QPointF(width(), height());
		fon1 << QPointF(0, height());
		painter.setBrush(QBrush(Qt::lightGray));
		painter.setPen(QPen(Qt::lightGray));
		painter.drawPolygon(fon1);
	}


	//��������� ����
	if (_gabarits[1] == 0) {
		fon << QPointF(ots, ots);
		fon << QPointF(ots + w, ots);
		fon << QPointF(ots + w, ots + h);
		fon << QPointF(ots, ots + h);
		painter.setPen(QPen(Qt::gray));
	}
	else {
		float otn0 = w / _gabarits[0];
		float otn1 = h / _gabarits[1];
		center = QPointF(w / 2 + ots, h / 2 + ots);
		float alpha = 0;
		if (otn0 < otn1) {
			_otn = otn0;
			gabs[0] = w;
			gabs[1] = w / _gabarits[0] * _gabarits[1];
		}
		else {
			_otn = otn1;
			gabs[1] = h;
			gabs[0] = h / _gabarits[1] * _gabarits[0];
		}
		fon = rectMy(gabs[0], gabs[1], center, alpha);
		painter.setPen(QPen(Qt::black));
	}

	painter.setBrush(QBrush(Qt::white));

	painter.drawPolygon(fon);

	//�������� ������

	painter.setPen(QPen(Qt::black));
	if (_motors != NULL) {
		for (int i = 0; i < _motors->getCountP(); i++) {
			painter.setBrush(QBrush(Qt::blue));
			center2 = QPointF((_motors->getPres(i)).getCoord(0) * _otn + center.x() - gabs[0] / 2,
				(_motors->getPres(i)).getCoord(1)* _otn + center.y() - gabs[1] / 2);

			painter.drawEllipse(center2, (_motors->getPres(i)).getR() * _otn, (_motors->getPres(i)).getR() * _otn);

			painter.setBrush(QBrush(Qt::green));
			for (int j = 0; j < (_motors->getPres(i)).getCount(); j++) {

				center3 = QPointF((_motors->getPres(i))[j].getCoord(0) * _otn + center2.x(),
					(_motors->getPres(i))[j].getCoord(1)* _otn + center2.y());

				polygon = rectMy((_motors->getPres(i))[j].getSize(0) * _otn, (_motors->getPres(i))[j].getSize(1) * _otn,
					center3, (_motors->getPres(i))[j].getAngle());
				painter.drawPolygon(polygon);
			}
		}
	}

	//��������� �����
	painter.setBrush(QBrush(Qt::yellow));
	painter.setPen(QPen(Qt::black));
	if (_motors != NULL) {
		for (int i = 0; i < _motors->getCount(); i++) {

			center2 = QPointF((*_motors)[i].getCoord(0) * _otn + center.x() - gabs[0] / 2,
				(*_motors)[i].getCoord(1)* _otn + center.y() - gabs[1] / 2);

			polygon = rectMy((*_motors)[i].getSize(0) * _otn, (*_motors)[i].getSize(1) * _otn, center2,
				(*_motors)[i].getAngle());
			painter.drawPolygon(polygon);
		}
	}
	//painter.setBrush(QBrush(Qt::black));
	//painter.setPen(QPen(Qt::black));
}

void QtGuiTest1::coonections() {
	connect(ui.but, SIGNAL(clicked()), this, SLOT(slotBut()));
	connect(ui.printBtn, SIGNAL(clicked()), this, SLOT(printToFile()));
	connect(ui.reduceBut, SIGNAL(clicked()), this, SLOT(reduce()));

	connect(ui.addFieldBut, SIGNAL(clicked()), this, SLOT(doVisible1()));
	connect(ui.addCarBut, SIGNAL(clicked()), this, SLOT(doVisible2()));
	connect(ui.addPresBut, SIGNAL(clicked()), this, SLOT(doVisible3()));
	connect(ui.changeFieldBut, SIGNAL(clicked()), this, SLOT(doVisible4()));
	connect(ui.changeCarBut, SIGNAL(clicked()), this, SLOT(doVisible5()));
	connect(ui.changePressBut, SIGNAL(clicked()), this, SLOT(doVisible6()));

	connect(ui.but5, SIGNAL(clicked()), this, SLOT(cancelCar()));
	connect(ui.but7, SIGNAL(clicked()), this, SLOT(deleteThisCar()));

	connect(ui.but4, SIGNAL(clicked()), this, SLOT(cancelPres()));
	connect(ui.but8, SIGNAL(clicked()), this, SLOT(deleteThisPres()));

	connect(ui.comboPress, SIGNAL(currentIndexChanged(int)), this, SLOT(iDo6(int)));
	//connect(ui.comboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(comboSelectItem(int)));
	connect(ui.comboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(comboCar(int)));
	connect(ui.comboBoxCar, SIGNAL(currentIndexChanged(int)), this, SLOT(iDo5(int)));

	connect(ui.delAllCars, SIGNAL(clicked()), this, SLOT(deleteAllElements()));
	connect(ui.delAllPres, SIGNAL(clicked()), this, SLOT(deleteAllPres()));
	connect(ui.delAll, SIGNAL(clicked()), this, SLOT(deleteAll()));


	//connect(ui.comboBox, SIGNAL(activated(int)), this, SLOT(comboSelectItem(int)));
	//connect(ui.whatDoCars, SIGNAL(currentIndexChanged(int)), this, SLOT(iDoCars(int)));
}

void QtGuiTest1::comboboxAdd() {
	QString s = "MotorShow";
	ui.comboPress->setEnabled(true);
	//ui.comboBox->clear();removeItem
	int i = 0;
	for (; i < _motors->getCountP(); i++) {
		ui.comboBox->removeItem(i);
		ui.comboPress->removeItem(i);
	}
	ui.comboBox->removeItem(i);

	ui.comboBox->addItem(s, QVariant(-1));
	if (_motors->getCountP() > 0)
		for (int i = 0; i < _motors->getCountP(); i++) {
			ui.comboBox->addItem((_motors->getPres(i)).getName(), QVariant(i));
			ui.comboPress->addItem((_motors->getPres(i)).getName(), QVariant(i));
		}
	else
		ui.comboPress->setEnabled(false);

}

void QtGuiTest1::comboCar(int index) {
	ui.comboBoxCar->clear();
	index = index - 1;
	//int index = ui.comboBoxCar->currentData().toInt() - 1;
	ui.comboBoxCar->setEnabled(true);
	if (index == -1) {
		if (_motors->getCount() != 0)
			for (int i = 0; i < _motors->getCount(); i++) {
				ui.comboBoxCar->addItem(((*_motors)[i]).getName(), QVariant(i));
			}
		else
			ui.comboBoxCar->setEnabled(false);
	}
	else {
		if ((_motors->getPres(index)).getCount() != 0)
			for (int i = 0; i < (_motors->getPres(index)).getCount(); i++) {

				ui.comboBoxCar->addItem(((_motors->getPres(index))[i]).getName() + QString::number(i), QVariant(i));
			}
		else
			ui.comboBoxCar->setEnabled(false);
	}

}

void QtGuiTest1::printToFile() {
	std::string name = (ui.strToFile->text()).toStdString();
	ofstream fout(name, ios_base::out | ios_base::trunc);
	std::string mainFile = "file.txt";
	fout << _motors->getCountP() + 1 << endl;
	fout << mainFile;

	for (auto i = 0; _motors->getCountP(); i++) {
		fout << endl << (_motors->getPres(i).getName()).toStdString();
	}
	fout.close();
	_motors->printToFile(mainFile);
	for (auto i = 0; _motors->getCountP(); i++) {
		_motors->getPres(i).printToFile((_motors->getPres(i).getName()).toStdString());
	}

}

/*void QtGuiTest1::comboboxChange() {
	ui.comboBox->clear();
	for (int i = 0; i < _motors->getCount(); i++)
		ui.comboBox->addItem(((*_motors)[i]).getName(), QVariant(i));
}*/

/*void QtGuiTest1::whatDoCarsBox() {
	ui.whatDoCars->addItem("Add", QVariant(0));
	ui.whatDoCars->addItem("Change", QVariant(1));
	ui.whatDoCars->addItem("Delete", QVariant(2));

	ui.whatDoPres->addItem("Add", QVariant(0));
	ui.whatDoPres->addItem("Change", QVariant(1));
	ui.whatDoPres->addItem("Delete", QVariant(2));
}*/

/*void QtGuiTest1::setEnabledAddCar(bool dost) {
	ui.comboBox->setEnabled(dost);
	ui.nameAddLine->setEnabled(dost);
	ui.coordXLine->setEnabled(dost);
	ui.coordYLine->setEnabled(dost);
	ui.gabXLine->setEnabled(dost);
	ui.gabYLine->setEnabled(dost);
	ui.angleLine->setEnabled(dost);
	ui.but2->setEnabled(dost);

}*/

/*void QtGuiTest1::setEnabledAddPres(bool dost) {
	ui.namePresLine->setEnabled(dost);
	ui.radiusPresLine->setEnabled(dost);
	ui.coordPresX->setEnabled(dost);
	ui.coordPresY->setEnabled(dost);
	ui.but3->setEnabled(dost);
	ui.but4->setEnabled(dost);
}*/

void QtGuiTest1::setSize(int ots) {
	int w = width(), h = height();

	QRect a = { w / 4 * 3 + ots, h / 3 + ots,
		w / 4 - 2 * ots, h * 2 / 3 };
	QRect b = { w / 4 * 3 + ots, ots,
		w / 4 - 2 * ots, h / 3 };
	int hig = 23;

	ui.btnGroup->setGeometry(b);

	ui.groupField->setGeometry(a);
	ui.lineEdit->setFixedSize(width() / 4 - 4 * ots, hig);
	ui.but->setFixedSize(width() / 4 - 4 * ots, hig);
	ui.delAll->setFixedSize(width() / 4 - 4 * ots, hig);
	ui.delAllCars->setFixedSize(width() / 4 - 4 * ots, hig);
	ui.delAllPres->setFixedSize(width() / 4 - 4 * ots, hig);
	ui.strToFile->setFixedSize(width() / 4 - 4 * ots, hig);
	ui.printBtn->setFixedSize(width() / 4 - 4 * ots, hig);


	ui.changeField->setGeometry(a);
	ui.addFieldBut->setFixedSize((width() / 4 - 4 * ots) / 2 - ots / 2, hig);
	ui.changeFieldBut->setFixedSize((width() / 4 - 4 * ots) / 2 - ots / 2, hig);
	ui.addCarBut->setFixedSize((width() / 4 - 4 * ots) / 2 - ots / 2, hig);
	ui.changeCarBut->setFixedSize((width() / 4 - 4 * ots) / 2 - ots / 2, hig);
	ui.addPresBut->setFixedSize((width() / 4 - 4 * ots) / 2 - ots / 2, hig);
	ui.changePressBut->setFixedSize((width() / 4 - 4 * ots) / 2 - ots / 2, hig);

	ui.groupCar->setGeometry(a);

	ui.comboBox->setFixedSize(width() / 4 - 4 * ots, hig);
	ui.comboBoxCar->setFixedSize(width() / 4 - 4 * ots, hig);
	ui.nameAddLine->setFixedSize(width() / 4 - 4 * ots, hig);
	ui.angleLine->setFixedSize(width() / 4 - 4 * ots, hig);
	ui.coordXLine->setFixedSize((width() / 4 - 4 * ots) / 2 - ots / 2, hig);
	ui.coordYLine->setFixedSize((width() / 4 - 4 * ots) / 2 - ots / 2, hig);
	ui.gabXLine->setFixedSize((width() / 4 - 4 * ots) / 2 - ots / 2, hig);
	ui.gabYLine->setFixedSize((width() / 4 - 4 * ots) / 2 - ots / 2, hig);
	ui.but5->setFixedSize((width() / 4 - 4 * ots) / 2 - ots / 2, hig);
	ui.but2->setFixedSize((width() / 4 - 4 * ots) / 2 - ots / 2, hig);
	ui.but7->setFixedSize(width() / 4 - 4 * ots, hig);

	ui.groupPres->setGeometry(a);
	ui.comboPress->setFixedSize(width() / 4 - 4 * ots, hig);
	ui.namePresLine->setFixedSize(width() / 4 - 4 * ots, hig);
	ui.radiusPresLine->setFixedSize(width() / 4 - 4 * ots, hig);
	ui.coordPresX->setFixedSize((width() / 4 - 4 * ots) / 2 - ots / 2, hig);
	ui.coordPresY->setFixedSize((width() / 4 - 4 * ots) / 2 - ots / 2, hig);
	ui.but3->setFixedSize((width() / 4 - 4 * ots) / 2 - ots / 2, hig);
	ui.but4->setFixedSize((width() / 4 - 4 * ots) / 2 - ots / 2, hig);
	ui.but8->setFixedSize(width() / 4 - 4 * ots, hig);

	//ui.groupCar->setVisible(false);
	//ui.groupPres->setVisible(false);
	//ui.groupField->setVisible(false);
	//ui.btnGroup->setVisible(false);

	//ui.groupCar->setVisible(true);
	//ui.groupPres->setVisible(true);
	//ui.groupField->setVisible(true);
	//ui.btnGroup->setVisible(true);

	//ui.gabXLine->resize(width() / 4 - ots, height() - ots * 3);
	//ui.gabYLine->resize(width() / 4 - ots, height() - ots * 3);
	//ui.angleLine->resize();
}

Car * QtGuiTest1::getCar() {
	float coord[2], gabarites[2], angle;
	int index = ui.comboBox->currentData().toInt();
	bool ok[5];
	coord[0] = (ui.coordXLine->text()).toFloat(&ok[0]);
	coord[1] = (ui.coordYLine->text()).toFloat(&ok[1]);
	gabarites[0] = (ui.gabXLine->text()).toFloat(&ok[2]);
	gabarites[1] = (ui.gabYLine->text()).toFloat(&ok[3]);
	QString name = ui.nameAddLine->text();
	angle = (ui.angleLine->text()).toFloat(&ok[4]);
	Car * car = NULL;
	if ((coord[0] != 0) && (coord[1] != 0) && (gabarites[0] != 0)
		&& (gabarites[1] != 0) && (!name.isEmpty()) && (angle != 0)
		&& ok[0] && ok[1] && ok[2] && ok[3] && ok[4]) {
		car = new Car(name, angle, gabarites, coord);
	}
	return car;
}

/*void QtGuiTest1::changeCar() {
	float coord[2], gabarites[2], angle1;
	int index = ui.comboBox->currentData().toInt();

	QString coordX = ui.coordXLine->text();
	QString coordY = ui.coordYLine->text();
	QString gabX = ui.gabXLine->text();
	QString gabY = ui.gabYLine->text();
	QString name = ui.nameAddLine->text();
	QString angle = ui.angleLine->text();

	if ((coordX != "") && (coordY != "") && (gabX != "") && (gabY != "") && (name != "") && (angle != "")) {
		coord[0] = coordX.toFloat();
		coord[1] = coordY.toFloat();
		gabarites[0] = gabX.toFloat();
		gabarites[1] = gabY.toFloat();
		angle1 = angle.toFloat();
		Car addCar(name, angle1, gabarites, coord);
		if (index == -1)
		{
			_motors->addElement(addCar);
		}
		else
			_motors->getPres(index).addElement(addCar);
	}
	update();
}*/

Pres * QtGuiTest1::getPres() {
	float coord[2], radius;
	bool ok1, ok2, ok3;
	//int index = ui.comboBox->currentData().toInt();
	coord[0] = (ui.coordPresX->text()).toFloat(&ok1);
	coord[1] = (ui.coordPresY->text()).toFloat(&ok2);
	QString name = ui.namePresLine->text();
	radius = (ui.radiusPresLine->text()).toFloat(&ok3);
	Pres * pres = NULL;
	if ((coord[0] != 0) && (coord[1] != 0) && (!name.isEmpty()) && (radius != 0) && ok1 && ok2 && ok3) {
		pres = new Pres(radius, name, coord);
	}
	return pres;
}

void QtGuiTest1::slotBut() {
	if (fileIsExist((ui.lineEdit->text()).toStdString())) {
		std::string s = (ui.lineEdit->text()).toStdString();
		ui.lineEdit->setText("");
		readObjects(s);
		ui.comboBox->clear();
		comboboxAdd();
		update();
	}
}

void QtGuiTest1::readObjects(std::string name) {
	delete _motors;
	int n;
	ifstream file(name);
	if (file.is_open())
	{
		file >> n;
		std::string s;
		file >> s;
		_motors = new Field(s);
		//setEnabledAddCar(true);
		_gabarits[0] = _motors->getGabarits(0);
		_gabarits[1] = _motors->getGabarits(1);


		for (int i = 0; i < n - 1; i++) {
			file >> s;
			//Pres * tempPres = new Pres(s);
			_motors->addPres(s);
		}
		file.close();
	}



	//setEnabledAddCar(true);
	//setEnabledAddPres(true);
	/*ui.whatDoCars->setEnabled(true);
	ui.comboBox->setEnabled(true);
	ui.comboBox3->setEnabled(true);
	ui.whatDoPres->setEnabled(true);
	ui.delAllPres->setEnabled(true);
	ui.delAllCars->setEnabled(true);
	ui.delAll->setEnabled(true);*/
}

void QtGuiTest1::reduce() {
	if (_btns)
	{
		_btns = false;
		ui.groupCar->setVisible(false);
		ui.groupPres->setVisible(false);
		ui.groupField->setVisible(false);
		ui.btnGroup->setVisible(false);
	}
	else {

		ui.btnGroup->setVisible(true);
		_btns = true;
	}
	update();
}


void QtGuiTest1::doVisible1() {

	if (ui.groupField->isVisible())
		ui.groupField->setVisible(false);
	else {
		ui.groupCar->setVisible(false);
		ui.groupPres->setVisible(false);
		ui.groupField->setVisible(true);
		ui.changeField->setVisible(false);
	}
}

void QtGuiTest1::doVisible2() {

	if (ui.groupCar->isVisible() && !(ui.but7->isVisible()))
		ui.groupCar->setVisible(false);
	else {
		ui.groupCar->setVisible(true);
		ui.groupPres->setVisible(false);
		ui.groupField->setVisible(false);
		ui.changeField->setVisible(false);
		iDo2();
	}
}

void QtGuiTest1::doVisible3() {

	if (ui.groupPres->isVisible() && !(ui.comboPress->isVisible()))
		ui.groupPres->setVisible(false);
	else {
		ui.groupCar->setVisible(false);
		ui.groupPres->setVisible(true);
		ui.groupField->setVisible(false);
		ui.changeField->setVisible(false);
		iDo3();
	}
}

void QtGuiTest1::doVisible4() {

	if (ui.changeField->isVisible())
		ui.changeField->setVisible(false);
	else {
		ui.groupCar->setVisible(false);
		ui.groupPres->setVisible(false);
		ui.groupField->setVisible(false);
		ui.changeField->setVisible(true);
	}
}

void QtGuiTest1::doVisible5() {

	if (ui.groupCar->isVisible() && ui.but7->isVisible())
		ui.groupCar->setVisible(false);
	else {
		ui.groupCar->setVisible(true);
		ui.groupPres->setVisible(false);
		ui.groupField->setVisible(false);
		ui.changeField->setVisible(false);
		ui.but7->setVisible(true);
		ui.comboBoxCar->setVisible(true);
		iDo5();
		ui.but5->setText(QString::fromLocal8Bit("change"));
		disconnect(ui.but2, SIGNAL(clicked()), this, SLOT(setCar()));
		connect(ui.but2, SIGNAL(clicked()), this, SLOT(changeCar()));
	}
}

void QtGuiTest1::doVisible6() {

	if (ui.groupPres->isVisible() && ui.comboPress->isVisible())
		ui.groupPres->setVisible(false);
	else {
		ui.groupCar->setVisible(false);
		ui.groupPres->setVisible(true);
		ui.groupField->setVisible(false);
		ui.changeField->setVisible(false);
		ui.comboPress->setVisible(true);
		ui.but8->setVisible(true);
		iDo6();
		ui.but3->setText(QString::fromLocal8Bit("change"));
		disconnect(ui.but3, SIGNAL(clicked()), this, SLOT(setPres()));
		connect(ui.but3, SIGNAL(clicked()), this, SLOT(changePres()));
	}
}


void QtGuiTest1::iDo2() {
	ui.but7->setVisible(false);
	ui.comboBoxCar->setVisible(false);

	ui.nameAddLine->setEnabled(true);
	ui.angleLine->setEnabled(true);
	ui.coordXLine->setEnabled(true);
	ui.gabXLine->setEnabled(true);
	ui.coordYLine->setEnabled(true);
	ui.gabYLine->setEnabled(true);
	ui.but2->setEnabled(true);
	ui.but5->setEnabled(true);

	ui.nameAddLine->clear();
	ui.angleLine->clear();
	ui.coordXLine->clear();
	ui.gabXLine->clear();
	ui.coordYLine->clear();
	ui.gabYLine->clear();
	ui.but2->setText(QString::fromLocal8Bit("add"));
	disconnect(ui.but2, SIGNAL(clicked()), this, SLOT(changeCar()));
	connect(ui.but2, SIGNAL(clicked()), this, SLOT(setCar()));
}

void QtGuiTest1::iDo3() {
	ui.namePresLine->setEnabled(true);
	ui.radiusPresLine->setEnabled(true);
	ui.coordPresX->setEnabled(true);
	ui.coordPresY->setEnabled(true);
	ui.but3->setEnabled(true);
	ui.but4->setEnabled(true);
	ui.comboPress->setVisible(false);
	ui.but8->setVisible(false);
	ui.namePresLine->clear();
	ui.radiusPresLine->clear();
	ui.coordPresX->clear();
	ui.coordPresY->clear();
	ui.but3->setText(QString::fromLocal8Bit("add"));
	disconnect(ui.but3, SIGNAL(clicked()), this, SLOT(changePres()));
	connect(ui.but3, SIGNAL(clicked()), this, SLOT(setPres()));
}

void QtGuiTest1::iDo5(int k) {
	int indexC = ui.comboBox->currentData().toInt();
	int index = ui.comboBoxCar->currentData().toInt();
	int count;
	if (indexC == -1)
		count = _motors->getCount();
	else
		count = (_motors->getPres(indexC)).getCount();

	if (count != 0 && ui.comboBoxCar->isEnabled()) {
		Car *car;

		ui.nameAddLine->setEnabled(true);
		ui.angleLine->setEnabled(true);
		ui.coordXLine->setEnabled(true);
		ui.gabXLine->setEnabled(true);
		ui.coordYLine->setEnabled(true);
		ui.gabYLine->setEnabled(true);
		ui.but2->setEnabled(true);
		ui.but5->setEnabled(true);
		if (indexC == -1)
			car = new Car((*_motors)[index]);
		else
			car = new Car((_motors->getPres(indexC))[index]);
		ui.nameAddLine->setText(car->getName());
		ui.angleLine->setText(QString::number(car->getAngle()));
		ui.coordXLine->setText(QString::number(car->getCoord(0)));
		ui.gabXLine->setText(QString::number(car->getSize(0)));
		ui.coordYLine->setText(QString::number(car->getCoord(1)));
		ui.gabYLine->setText(QString::number(car->getSize(1)));
		delete car;
	}
	else {
		ui.nameAddLine->clear();
		ui.angleLine->clear();
		ui.coordXLine->clear();
		ui.gabXLine->clear();
		ui.coordYLine->clear();
		ui.gabYLine->clear();
		ui.nameAddLine->setEnabled(false);
		ui.angleLine->setEnabled(false);
		ui.coordXLine->setEnabled(false);
		ui.gabXLine->setEnabled(false);
		ui.coordYLine->setEnabled(false);
		ui.gabYLine->setEnabled(false);
		ui.but2->setEnabled(false);
		ui.but5->setEnabled(false);
		ui.but7->setEnabled(false);
	}
}

void QtGuiTest1::iDo6(int k) {
	if (ui.comboPress->isEnabled()) {
		/*ui.namePresLine->setEnabled(true);
		ui.radiusPresLine->setEnabled(true);
		ui.coordPresX->setEnabled(true);
		ui.coordPresY->setEnabled(true);
		ui.but3->setEnabled(true);
		ui.but4->setEnabled(true);
		ui.but8->setEnabled(true);*/
		//int index = ui.comboPress->currentData().toInt();
		int index = k;
		ui.namePresLine->setText(_motors->getPres(index).getName());
		ui.radiusPresLine->setText(QString::number((_motors->getPres(index)).getR()));
		ui.coordPresX->setText(QString::number((_motors->getPres(index)).getCoord(0)));
		ui.coordPresY->setText(QString::number((_motors->getPres(index)).getCoord(1)));
	}
	else {
		ui.namePresLine->clear();
		ui.radiusPresLine->clear();
		ui.coordPresX->clear();
		ui.coordPresY->clear();
		ui.namePresLine->setEnabled(false);
		ui.radiusPresLine->setEnabled(false);
		ui.coordPresX->setEnabled(false);
		ui.coordPresY->setEnabled(false);
		ui.but3->setEnabled(false);
		ui.but4->setEnabled(false);
		ui.but8->setEnabled(false);
	}
}


void QtGuiTest1::setCar() {
	int index = ui.comboBox->currentData().toInt();
	Car * car = getCar();
	if (car) {
		if (index == -1)
			_motors->addElement(*car);
		else
			(_motors->getPres(index)).addElement(*car);
		delete car;
	}
	update();
}

void QtGuiTest1::changeCar() {
	int indexC = ui.comboBox->currentData().toInt();
	int index = ui.comboBoxCar->currentData().toInt(), oldN;
	Car * car = getCar(), oldCar;
	if (indexC == -1) {
		oldCar = (*_motors)[index];
		oldN = _motors->getCount();
	}
	else {
		oldCar = (_motors->getPres(indexC))[index];
		oldN = (_motors->getPres(indexC)).getCount();
	}

	if (car) {
		if (indexC == -1) {
			_motors->deleteElement(index);
			_motors->addElement(*car);
		}
		else {
			(_motors->getPres(indexC)).deleteElement(index);
			(_motors->getPres(indexC)).addElement(*car);
		}

		if (indexC == -1) {
			if (_motors->getCount() != oldN)
				_motors->addElement(oldCar);
		}
		else {
			if (oldN != (_motors->getPres(indexC)).getCount())
				(_motors->getPres(indexC)).addElement(oldCar);
		}
		delete car;
	}
	comboboxAdd();
	update();
}

void QtGuiTest1::cancelCar() {
	ui.groupCar->setVisible(false);
}

void QtGuiTest1::deleteThisCar() {
	int indexC = ui.comboBox->currentData().toInt();
	int index = ui.comboBoxCar->currentData().toInt();

	if (indexC == -1)
		_motors->deleteElement(index);
	else {
		(_motors->getPres(indexC)).deleteElement(index);
	}
	comboboxAdd();
	update();
	iDo5();
}

void QtGuiTest1::setPres() {
	Pres * pres = getPres();
	if (pres)
	{
		_motors->addPres(*pres);
		delete pres;
	}


	comboboxAdd();
	update();
	doVisible3();
	doVisible3();
}

void QtGuiTest1::changePres() {
	int index = ui.comboPress->currentData().toInt(), oldN = _motors->getCountP();
	Pres * pres = getPres(), oldPres = _motors->getPres(index);
	if (pres) {
		_motors->deletePres(index);
		_motors->addPres(*pres);
		if (_motors->getCountP() != oldN) {
			_motors->addPres(oldPres);
		}
		delete pres;
	}
	comboboxAdd();
	update();
}

void QtGuiTest1::cancelPres() {
	ui.groupPres->setVisible(false);
}

void QtGuiTest1::deleteThisPres() {
	int index = ui.comboPress->currentData().toInt();
	_motors->deletePres(index);
	comboboxAdd();
	update();
	iDo6();
}

/*void QtGuiTest1::iDoCars(int index) {
	if (ui.whatDoCars->currentIndex() == 0) {
		ui.but2->setText("Add");
		ui.but5->setVisible(false);
		comboboxAdd();
		setEnabledAddCar(true);
		connect(ui.but2, SIGNAL(clicked()), this, SLOT(setCar()));
	}
	if (ui.whatDoCars->currentIndex() == 1) {
		disconnect(ui.but2, SIGNAL(clicked()), this, SLOT(setCar()));
		ui.but2->setText("Change");
	}

	if (ui.whatDoCars->currentIndex() == 2) {

		disconnect(ui.but2, SIGNAL(clicked()), this, SLOT(setCar()));

		setEnabledAddCar(false);
		ui.but2->setText("Delete");
	}
}*/

QPolygonF QtGuiTest1::rectMy(qreal a, qreal b, const  QPointF& center, float alpha) {
	float radius2;
	QPolygonF polygon;
	radius2 = sqrt(pow(a / 2, 2) + pow(b / 2, 2));
	float betta;
	if (b > a) {
		betta = atan(b / a);
	}
	else {
		betta = M_PI / 2 - atan(a / b);
	}
	float mass[4] = { betta, M_PI - betta, M_PI + betta, -betta };

	for (int i = 0; i < 4; i++) {
		qreal fAngle = mass[i] - (alpha / 360) * 2 * M_PI;
		qreal x = center.x() + cos(fAngle)*radius2;
		qreal y = center.y() + sin(fAngle)*radius2;
		polygon << QPointF(x, y);
	}
	return polygon;
}

bool fileIsExist(const std::string & filePath)
{
	bool isExist = false;
	std::ifstream fin(filePath.c_str());

	if (fin.is_open())
		isExist = true;

	fin.close();
	return isExist;
}
