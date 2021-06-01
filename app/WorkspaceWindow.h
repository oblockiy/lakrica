#ifndef WORKSPACEWINDOW_H
#define WORKSPACEWINDOW_H

#include <QWidget>
#include <QVector>
#include <QMessageBox>

#include "../Cube/Cube.h"
#include "../Parallelepiped/Parallelepiped.h"
#include "../Tetrahedron/Tetrahedron.h"

namespace Ui {
class WorkspaceWindow;
}

class WorkspaceWindow : public QWidget
{
    Q_OBJECT

public:
    explicit WorkspaceWindow(QWidget *parent = 0);
    QVector <int> i_E;
    int i_S, i_V;
    int bID;


private:
    Ui::WorkspaceWindow *ui;
    Cube *cube;
    Parallelepiped *pp;
    Tetrahedron *tetra;
    QMessageBox msg;

signals:
    void signalFromButton(int buttonID);
    void firstWindow();

private slots:
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();

public slots:
   void addWhatever();
   void button_ID(int buttonID);
};

#endif // WORKSPACEWINDOW_H
