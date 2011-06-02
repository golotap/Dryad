#ifndef DRYMAINWINDOW_H
#define DRYMAINWINDOW_H

#include "config.h"

#include "drymenubar.h"
#include "drytoolbar.h"
#include "drystatusbar.h"

namespace dryad
{
	class dryMainWindow : public QMainWindow
	{
		Q_OBJECT

	private:
		dryMenuBar *mainMenuBar;
		dryToolBar *mainToolBar;
		dryStatusBar *mainStatusBar;

	public:
		dryMainWindow();

	private:
		void createMenuBar();
		void createToolBar();
		void createStatusBar();
	};
}
#endif // DRYMAINWINDOW_H
