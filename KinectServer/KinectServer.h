#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_KinectServer.h"

class KinectServer : public QMainWindow
{
	Q_OBJECT

public:
	KinectServer(QWidget *parent = Q_NULLPTR);

private:
	Ui::KinectServerClass ui;
};
