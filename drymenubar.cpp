#include "drymenubar.h"

namespace dryad
{
	dryMenuBar::dryMenuBar()
	{
		this->createMenus();
		this->createActions();
	}
	void dryMenuBar::createMenus()
	{
		this->fileMenu = new QMenu(tr("File"));
		this->addMenu(this->fileMenu);

		this->editMenu = new QMenu(tr("Edit"));
		this->addMenu(this->editMenu);

		this->viewMenu = new QMenu(tr("View"));
		this->addMenu(this->viewMenu);

		this->goMenu = new QMenu(tr("Go"));
		this->addMenu(this->goMenu);

		this->toolsMenu = new QMenu(tr("Tools"));
		this->addMenu(this->toolsMenu);

		this->settingsMenu = new QMenu(tr("Settings"));
		this->addMenu(this->settingsMenu);

		this->helpMenu = new QMenu(tr("Help"));
		this->addMenu(this->helpMenu);
	}
	void dryMenuBar::createActions()
	{

	}
}
