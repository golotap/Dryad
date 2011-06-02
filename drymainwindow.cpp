#include "drymainwindow.h"

namespace dryad
{
	dryMainWindow::dryMainWindow()
	{
		this->createMenuBar();
		this->createToolBar();
		this->createStatusBar();
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
	void dryMainWindow::createStatusBar()
	{
		this->mainStatusBar = new dryStatusBar();
		this->setStatusBar(this->mainStatusBar);
	}
}
