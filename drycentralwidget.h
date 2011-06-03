#ifndef DRYCENTRALWIDGET_H
#define DRYCENTRALWIDGET_H

#include "config.h"

namespace dryad
{
	class dryCentralWidget : public QTabWidget
	{
		Q_OBJECT

	private:
		QWidget *defaultWidget;

	public:
		dryCentralWidget();

	private:
		void createDefaultWidget();
	};
}

#endif // DRYCENTRALWIDGET_H
