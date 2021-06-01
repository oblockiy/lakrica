#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent) {

    QVBoxLayout *vbox = new QVBoxLayout(this);
    vbox->setSpacing(1);

    QPushButton *cube = new QPushButton("Cube", this);
    cube->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    QPushButton *parallelepiped = new QPushButton("Parallelepiped", this);
    parallelepiped->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    QPushButton *tetrahedron = new QPushButton("Tetrahedron", this);
    tetrahedron->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    vbox->addWidget(cube);
    vbox->addWidget(parallelepiped);
    vbox->addWidget(tetrahedron);
    setLayout(vbox);

    connect(cube, SIGNAL(clicked()), this, SLOT(slotCube()));
    connect(parallelepiped, SIGNAL(clicked()), this, SLOT(slotParallelepiped()));
    connect(tetrahedron, SIGNAL(clicked()), this, SLOT(slotTetrahedron()));

    anotherOneWorkspaceWindow = new WorkspaceWindow();

    connect(anotherOneWorkspaceWindow, &WorkspaceWindow::firstWindow, this, &MainWindow::show);
    connect(this, &MainWindow::signalFromButton, anotherOneWorkspaceWindow, &WorkspaceWindow::button_ID);
}

void MainWindow::slotCube()
{
    emit signalFromButton(1);
    anotherOneWorkspaceWindow->show();
    this->close();
}

void MainWindow::slotParallelepiped()
{
    emit signalFromButton(2);
    anotherOneWorkspaceWindow->show();
    this->close();
}

void MainWindow::slotTetrahedron()
{
    emit signalFromButton(3);
    anotherOneWorkspaceWindow->show();
    this->close();
}
