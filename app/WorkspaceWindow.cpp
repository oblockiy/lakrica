#include "WorkspaceWindow.h"
#include "ui_WorkspaceWindow.h"

WorkspaceWindow::WorkspaceWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WorkspaceWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(addWhatever()));
    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(addWhatever()));
    connect(ui->pushButton_3, SIGNAL(clicked()), this, SLOT(addWhatever()));
    connect(ui->pushButton_4, SIGNAL(clicked()), this, SLOT(on_pushButton_clicked_4()));
}

void WorkspaceWindow::addWhatever()
{
    QObject* button = QObject::sender();
    if (button == ui->pushButton)
        i_E.append(ui->lineEdit->text().toInt());
    if (button == ui->pushButton_2)
        i_S =  ui->lineEdit_2->text().toInt();
    if (button == ui->pushButton_3)
        i_V = ui->lineEdit_3->text().toInt();
}

void WorkspaceWindow::on_pushButton_4_clicked()
{
    if (bID == 1){
        Cube *cube = new Cube(i_E, i_S, i_V);
        ui->label_5->setText(QString::number(cube->getCubeEdge()));
        ui->label_7->setText(QString::number(cube->calc_cubeS()));
        ui->label_9->setText(QString::number(cube->calc_cubeV()));
        ui->label_11->setText(QString::number(cube->calc_cubeH()));
        ui->label_15->setText(QString::number(cube->calc_cubeP()));
        if (cube->calc_cubeS() != i_S){
            msg.setText("Calculated surface area value does not match imposed value.");
            msg.exec();
        }
        if (cube->calc_cubeV() != i_V){
            msg.setText("Calculated volume value does not match imposed value.");
            msg.exec();
        }
        delete cube;
    }

    if (bID == 2){
        Parallelepiped *pp = new Parallelepiped(i_E, i_S, i_V);
        for (int j=0; j<pp->get_ppEdges().size(); j++){
            ui->label_5->setText(QString::number(pp->get_ppEdges().at(j))); }
        ui->label_7->setText(QString::number(pp->calc_ppS()));
        ui->label_9->setText(QString::number(pp->calc_ppV()));
        ui->label_11->setText(QString::number(pp->calc_ppH()));
        ui->label_15->setText(QString::number(pp->calc_ppP()));

        if (pp->calc_ppS() != i_S){
            msg.setText("Calculated surface area value does not match imposed value.");
            msg.exec();
        }
        if (pp->calc_ppV() != i_V){
            msg.setText("Calculated volume value does not match imposed value.");
            msg.exec();
        }
        delete pp;
    }

    if (bID == 3){
        Tetrahedron *tetra = new Tetrahedron(i_E, i_S, i_V);
        ui->label_5->setText(QString::number(tetra->get_tetraEdge()));
        ui->label_7->setText(QString::number(tetra->calc_tetraS()));
        ui->label_9->setText(QString::number(tetra->calc_tetraV()));
        ui->label_11->setText(QString::number(tetra->calc_tetraH()));
        ui->label_15->setText(QString::number(tetra->calc_tetraP()));
        if (tetra->calc_tetraS() != i_S){
            msg.setText("Calculated surface area value does not match imposed value.");
            msg.exec();
        }
        if (tetra->calc_tetraV() != i_V){
            msg.setText("Calculated volume value does not match imposed value.");
            msg.exec();
        }
        delete cube;
    }
}

void WorkspaceWindow::on_pushButton_5_clicked()
{
    i_E.clear();
    this->close();
    emit firstWindow();
}

void WorkspaceWindow::button_ID(int buttonID)
{
    bID = buttonID;
}


