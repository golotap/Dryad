#include "drytoolbar.h"

namespace dryad
{
	dryToolBar::dryToolBar()
	{
		this->createActions();
	}
	void dryToolBar::createActions()
	{
		this->newTab = new QAction(tr("New Tab"), this);
		this->addAction(this->newTab);

		this->newWindow = new QAction(tr("New Window"), this);
		this->addAction(this->newWindow);

		this->addSeparator();

		this->createFolder = new QAction(tr("Create Folder"), this);
		this->addAction(this->createFolder);

		this->addSeparator();

		this->goUp = new QAction(tr("Up"), this);
		this->addAction(this->goUp);

		this->goBack = new QAction(tr("Back"), this);
		this->addAction(this->goBack);

		this->goForward = new QAction(tr("Forward"), this);
		this->addAction(this->goForward);

		this->addSeparator();

		this->iconsMode = new QAction(tr("Icons"), this);
		this->addAction(this->iconsMode);

		this->detailsMode = new QAction(tr("Details"), this);
		this->addAction(this->detailsMode);

		this->columnsMode = new QAction(tr("Columns"), this);
		this->addAction(this->columnsMode);

		this->addSeparator();

		this->previewFiles = new QAction(tr("Preview"), this);
		this->addAction(this->previewFiles);

		this->splitView = new QAction(tr("Split"), this);
		this->addAction(this->splitView);
	}
}
