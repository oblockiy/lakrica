#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QMessageBox>
#include <QWidget>
#include <QVBoxLayout>

#include "../app/WorkspaceWindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QWidget {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);

signals:
   void signalFromButton(int buttonID);

private slots:
    void slotCube();
    void slotParallelepiped();
    void slotTetrahedron();

private:
    Ui::MainWindow *ui;
    WorkspaceWindow *anotherOneWorkspaceWindow;

};
#endif // MAINWINDOW_H
