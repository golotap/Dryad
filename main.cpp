#include "drymainwindow.h"

int main(int argc, char *argv[])
{
	QApplication dryApp(argc, argv);

	dryad::dryMainWindow mainWindow;
	mainWindow.show();

	return dryApp.exec();
}
