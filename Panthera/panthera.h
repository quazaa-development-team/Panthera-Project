#ifndef PANTHERA_H
#define PANTHERA_H

#include <QtGui/QMainWindow>
#include "ui_panthera.h"

class Panthera : public QMainWindow
{
	Q_OBJECT

public:
	Panthera(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Panthera();

private:
	Ui::PantheraClass ui;
};

#endif // PANTHERA_H
