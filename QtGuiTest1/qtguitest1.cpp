#include "qtguitest1.h"

bool fileIsExist(std::string filePath);

QtGuiTest1::QtGuiTest1(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	/*butt = new QPushButton("123");
	lines = new QLineEdit();
	ui.verticalLayout->addWidget(butt);
	ui.verticalLayout->addWidget(lines);*/
	//connect(ui.but, SIGNAL(clicked()), this, SLOT());
	

	connect(ui.but, SIGNAL(clicked()), this, SLOT(slotBut()));
	connect(ui.but2, SIGNAL(clicked()), this, SLOT(setCar()));	
	connect(ui.but3, SIGNAL(clicked()), this, SLOT(setPres()));
	connect(ui.comboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(comboSelectItem(int)));
}

void QtGuiTest1::paintEvent(QPaintEvent *event)
{
	QPainter painter(this);
	QPolygonF polygon, fon;
	qreal ots = 7;	
	qreal gabs[2] = {0,0};
	if (width() < 30 || height() < 30|| height() < 3 * ots + 1)
		return;
	
	//ui.toolBox->move(width() / 4 * 3,ots * 2);
	//ui.toolBox->(width() / 1 * 3, height() - ots * 3);
	setSize(ots);
	

	float w = width() / 4 * 3 - ots * 2;
	float h = height() - ots * 3;
	QPointF center, center2, center3;
	if (_gabarits[1] == 0) {
		fon << QPointF(ots, ots * 2);
		fon << QPointF(ots + w, ots * 2);
		fon << QPointF(ots + w, 2 * ots + h);
		fon << QPointF(ots, 2 * ots + h);
		painter.setPen(QPen(Qt::gray));
	}
	else {
		float otn0 = w / _gabarits[0];
		float otn1 = h / _gabarits[1];
		center = QPointF(w / 2 + ots, h / 2 + 2 * ots);
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

void QtGuiTest1::comboboxAdd() {
	QString s = "MotorShow";
	ui.comboBox->clear();
	ui.comboBox -> addItem(s, QVariant(-1));
	for (int i = 0; i < _motors->getCountP(); i++) 
		ui.comboBox->addItem((_motors->getPres(i)).getName(), QVariant(i));	
}

void QtGuiTest1::setSize(qreal ots) {
	ui.toolBox->setGeometry(width() / 4 * 3, ots * 2,
		width() / 4 - ots, height() - ots * 3 - 30);
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

void QtGuiTest1::readObjects(std::string s) {
	if (_motors != NULL)
		delete _motors;
	_motors = new Field(s);
	_gabarits[0] = _motors->getGabarits(0);
	_gabarits[1] = _motors->getGabarits(1);
	_motors->addPres("file2.txt");
	_motors->addPres("file3.txt");
	//QString ss  = (_motors->getPres(0))[0].getName();
}

void QtGuiTest1::comboSelectItem(int index) {
	//if (index != -1)
		//ui.nameAddLine->setText(_motors->getPres(index).getName());
}

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
