#ifndef DRYMENUBAR_H
#define DRYMENUBAR_H

#include "config.h"

namespace dryad
{
	class dryMenuBar : public QMenuBar
	{
		Q_OBJECT

	private:
		QMenu *fileMenu;
		QMenu *editMenu;
		QMenu *viewMenu;
		QMenu *goMenu;
		QMenu *toolsMenu;
		QMenu *settingsMenu;
		QMenu *helpMenu;

		QAction *fileQuit;

	public:
		dryMenuBar();

	private:
		void createMenus();
		void createActions();
	};
}

#endif // DRYMENUBAR_H
