#ifndef DRYTOOLBAR_H
#define DRYTOOLBAR_H

#include "config.h"

namespace dryad
{
	class dryToolBar : public QToolBar
	{
		Q_OBJECT

	private:
		QAction *newTab;
		QAction *newWindow;

		QAction *createFolder;

		QAction *goUp;
		QAction *goBack;
		QAction *goForward;

		QAction *iconsMode;
		QAction *detailsMode;
		QAction *columnsMode;

		QAction *previewFiles;
		QAction *splitView;

	public:
		dryToolBar();

	private:
		void createActions();
	};
}

#endif // DRYTOOLBAR_H
