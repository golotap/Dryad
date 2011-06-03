#include "drycentralwidget.h"

namespace dryad
{
	dryCentralWidget::dryCentralWidget()
	{
		this->createDefaultWidget();
	}
	void dryCentralWidget::createDefaultWidget()
	{
		this->defaultWidget = new QWidget();
		this->addTab(this->defaultWidget, tr("Default Widget"));
	}
}
