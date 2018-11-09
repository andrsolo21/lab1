#include "qtguitest1.h"

bool fileIsExist(std::string filePath);

QtGuiTest1::QtGuiTest1(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	ui.groupCar->setVisible(false);
	ui.groupPres->setVisible(false);
	ui.groupField->setVisible(false);
	ui.btnGroup->setVisible(true);
	coonections();
	slotBut();
	
}

void QtGuiTest1::paintEvent(QPaintEvent *event)
{
	QPainter painter(this);
	QPolygonF polygon, fon,fon1;
	int ots = 7;	
	qreal gabs[2] = {0,0};
	if (width() < 30 || height() < 30|| height() < 3 * ots + 1)
		return;
	
	//ui.toolBox->move(width() / 4 * 3,ots * 2);
	//ui.toolBox->(width() / 1 * 3, height() - ots * 3);
	setSize(ots);
	QPointF center, center2, center3;
	float w, h;
	

	if (_btns) {
		w = width() / 4 * 3 - ots * 2;
		h = height() - ots * 2;
		
		fon1 << QPointF(0, 0);
		fon1 << QPointF(width() / 4 * 3 , 0);
		fon1 << QPointF(width() / 4 * 3, height());
		fon1 << QPointF(0, height());
		painter.setBrush(QBrush(Qt::lightGray));
		painter.setPen(QPen(Qt::lightGray));
		painter.drawPolygon(fon1);
	}
	else {
		w = width()  - ots * 2;
		h = height() - ots * 2;
		
		fon1 << QPointF(0, 0);
		fon1 << QPointF(width() , 0);
		fon1 << QPointF(width() , height());
		fon1 << QPointF(0, height());
		painter.setBrush(QBrush(Qt::lightGray));
		painter.setPen(QPen(Qt::lightGray));
		painter.drawPolygon(fon1);
	}



	if (_gabarits[1] == 0) {
		fon << QPointF(ots, ots );
		fon << QPointF(ots + w, ots );
		fon << QPointF(ots + w,  ots + h);
		fon << QPointF(ots,  ots + h);
		painter.setPen(QPen(Qt::gray));
	}
	else {
		float otn0 = w / _gabarits[0];
		float otn1 = h / _gabarits[1];
		center = QPointF(w / 2 + ots, h / 2 +  ots);
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
		fon = rectMy(gabs[0], gabs[1],  center, alpha);
		painter.setPen(QPen(Qt::black));
	}

	painter.setBrush(QBrush(Qt::white));
	
	painter.drawPolygon(fon);


	
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
	
	connect(ui.but2, SIGNAL(clicked()), this, SLOT(setCar()));
	connect(ui.but3, SIGNAL(clicked()), this, SLOT(setPres()));

	connect(ui.comboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(comboSelectItem(int)));
	
	connect(ui.delAllCars, SIGNAL(clicked()), this, SLOT(deleteAllElements()));
	connect(ui.delAllPres, SIGNAL(clicked()), this, SLOT(deleteAllPres()));
	connect(ui.delAll, SIGNAL(clicked()), this, SLOT(deleteAll()));
	
	
	//connect(ui.comboBox, SIGNAL(activated(int)), this, SLOT(comboSelectItem(int)));
	//connect(ui.whatDoCars, SIGNAL(currentIndexChanged(int)), this, SLOT(iDoCars(int)));
}

void QtGuiTest1::comboboxAdd() {
	QString s = "MotorShow";
	ui.comboBox->clear();
	ui.comboBox -> addItem(s, QVariant(-1));
	for (
	int i = 0; i < _motors->getCountP(); i++) 
		ui.comboBox->addItem((_motors->getPres(i)).getName(), QVariant(i));	
}

void QtGuiTest1::printToFile() {
	std::string name = (ui.strToFile->text()).toStdString();
	ofstream fout(name, ios_base::out | ios_base::trunc);
	std::string mainFile = "file.txt";
	fout << _motors->getCountP()  + 1<< endl;
	fout << mainFile;

	for (auto i = 0; _motors->getCountP() ; i++) {
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
	int otst = 5;
	QRect a = { w / 4 * 3 + ots, h / 3 +  ots,
		w / 4 - 2*ots, h *2/3 };	
	QRect b = { w / 4 * 3 + ots, ots,
		w / 4 - 2 * ots, h  / 3 };

	
	ui.btnGroup->setGeometry(b);

	ui.groupField->setGeometry(a);
	ui.lineEdit->setFixedSize(width() / 4 - 4 * ots, 23);
	ui.but->setFixedSize(width() / 4 - 4 * ots, 23);
	ui.delAll->setFixedSize(width() / 4 - 4 * ots,23);
	ui.delAllCars->setFixedSize(width() / 4 - 4 * ots, 23);
	ui.delAllPres->setFixedSize(width() / 4 - 4 * ots, 23);

	ui.groupCar->setGeometry(a);
	ui.comboBox->setFixedSize(width() / 4 - 4 * ots, 23);
	ui.nameAddLine->setFixedSize(width() / 4 - 4 * ots, 23);
	ui.angleLine->setFixedSize(width() / 4 - 4 * ots, 23);
	ui.coordXLine->setFixedSize((width() / 4 - 4 * ots) / 2 - otst, 23);
	ui.coordYLine->setFixedSize((width() / 4 - 4 * ots) / 2 - otst, 23);
	ui.gabXLine->setFixedSize((width() / 4 - 4 * ots) / 2 - otst, 23);
	ui.coordYLine->setFixedSize((width() / 4 - 4 * ots) / 2 - otst, 23);
	ui.but5->setFixedSize((width() / 4 - 4 * ots) / 2 - otst, 23);
	ui.but2->setFixedSize((width() / 4 - 4 * ots) / 2 - otst, 23);

	ui.groupPres->setGeometry(a);
	ui.comboBox3->setFixedSize(width() / 4 - 4 * ots, 23);
	ui.namePresLine->setFixedSize(width() / 4 - 4 * ots, 23);
	ui.radiusPresLine->setFixedSize(width() / 4 - 4 * ots, 23);
	ui.coordPresX->setFixedSize((width() / 4 - 4 * ots) / 2 - otst, 23);
	ui.coordPresY->setFixedSize((width() / 4 - 4 * ots) / 2 - otst, 23);
	ui.but3->setFixedSize((width() / 4 - 4 * ots) / 2 - otst, 23);
	ui.but4->setFixedSize((width() / 4 - 4 * ots) / 2 - otst, 23);

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

void QtGuiTest1::setCar() {
	float coord[2], gabarites[2],angle1;
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
		Car addCar(name,angle1,gabarites,coord);
		if (index == -1)
		{
			_motors->addElement(addCar);
		}
		else
			_motors->getPres(index).addElement(addCar);
	}
	update();
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

void QtGuiTest1::setPres() {
	float coord[2], radius;
	//int index = ui.comboBox->currentData().toInt();
	QString coordX = ui.coordPresX->text();
	QString coordY = ui.coordPresY->text();
	QString name = ui.namePresLine->text();
	QString rad = ui.radiusPresLine->text();

	if ((coordX != "") && (coordY != "") && (name != "") && (rad != "")) {
		coord[0] = coordX.toFloat();
		coord[1] = coordY.toFloat();
		radius = rad.toFloat();
		_motors->addPres( radius,  name, coord);
		
	}
	comboboxAdd();
	update();
}

void QtGuiTest1::slotBut() {
	if (fileIsExist((ui.lineEdit->text()).toStdString())) {
		std::string s = (ui.lineEdit->text()).toStdString();
		ui.lineEdit->setText("");
		readObjects(s);
		comboboxAdd();
		update();
	}
}

void QtGuiTest1::readObjects(std::string name) {
	if (_motors != NULL)
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

		
		for (int i = 0;i < n-1; i++) {
			file >> s;
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

	if (ui.groupField->isVisible() == true)
		ui.groupField->setVisible(false);
	else {
		ui.groupCar->setVisible(false);
		ui.groupPres->setVisible(false);
		ui.groupField->setVisible(true);
	}
}

void QtGuiTest1::doVisible2() {

	if (ui.groupCar->isVisible() == true)
		ui.groupCar->setVisible(false);
	else {
		ui.groupCar->setVisible(true);
		ui.groupPres->setVisible(false);
		ui.groupField->setVisible(false);
	}
}

void QtGuiTest1::doVisible3() {

	if (ui.groupPres->isVisible() == true)
		ui.groupPres->setVisible(false);
	else {
		ui.groupCar->setVisible(false);
		ui.groupPres->setVisible(true);
		ui.groupField->setVisible(false);
	}
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

QPolygonF QtGuiTest1::rectMy(qreal a, qreal b,  QPointF center, float alpha) {
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

bool fileIsExist(std::string filePath)
{
	bool isExist = false;
	std::ifstream fin(filePath.c_str());

	if (fin.is_open())
		isExist = true;

	fin.close();
	return isExist;
}
