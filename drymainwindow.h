#ifndef DRYMAINWINDOW_H
#define DRYMAINWINDOW_H

#include "config.h"

#include "drymenubar.h"
#include "drytoolbar.h"
#include "drycentralwidget.h"
#include "drystatusbar.h"

#include "dryplacesdock.h"
#include "dryinformationdock.h"
#include "dryterminaldock.h"

namespace dryad
{
	class dryMainWindow : public QMainWindow
	{
		Q_OBJECT

	private:
		dryMenuBar *mainMenuBar;
		dryToolBar *mainToolBar;
		dryCentralWidget *mainCentralWidget;
		dryStatusBar *mainStatusBar;

		dryPlacesDock *mainPlacesDock;
		dryInformationDock *mainInformationDock;
		dryTerminalDock *mainTerminalDock;

	public:
		dryMainWindow();

	private:
		void createMenuBar();
		void createToolBar();
		void createCentralWidget();
		void createStatusBar();

		void createPlacesDock();
		void createInformationDock();
		void createTerminalDock();
	};
}
#endif // DRYMAINWINDOW_H
