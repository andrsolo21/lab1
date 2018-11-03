#pragma once
#include <qwidget.h>
#include "MotorShow.h"
class field :
	public QWidget
{
public:
	field();
	~field();
private:
	MotorShow V;
};

