#include "drymainwindow.h"

namespace dryad
{
	dryMainWindow::dryMainWindow()
	{
		this->createMenuBar();
		this->createToolBar();
		this->createCentralWidget();
		this->createStatusBar();

		this->createPlacesDock();
		this->createInformationDock();
	}
	void dryMainWindow::createMenuBar()
	{
		this->mainMenuBar = new dryMenuBar();
		this->setMenuBar(this->mainMenuBar);
	}
	void dryMainWindow::createToolBar()
	{
		this->mainToolBar = new dryToolBar();
		this->addToolBar(this->mainToolBar);
	}
	void dryMainWindow::createCentralWidget()
	{
		this->mainCentralWidget = new dryCentralWidget();
		this->setCentralWidget(this->mainCentralWidget);
	}
	void dryMainWindow::createStatusBar()
	{
		this->mainStatusBar = new dryStatusBar();
		this->setStatusBar(this->mainStatusBar);
	}
	void dryMainWindow::createPlacesDock()
	{
		this->mainPlacesDock = new dryPlacesDock();
		this->addDockWidget(Qt::LeftDockWidgetArea, this->mainPlacesDock);
	}
	void dryMainWindow::createInformationDock()
	{
		this->mainInformationDock = new dryInformationDock();
		this->addDockWidget(Qt::RightDockWidgetArea, this->mainInformationDock);
	}
}
