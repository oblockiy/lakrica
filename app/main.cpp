#include "MainWindow.h"

#include <QApplication>

int main(int argc, char *argv[]) {

  QApplication app(argc, argv);

  MainWindow window;

  window.resize(240, 230);
  window.setWindowTitle("Geometry");
  window.show();

  return app.exec();
}
