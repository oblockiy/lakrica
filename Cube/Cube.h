#ifndef CUBE_H
#define CUBE_H

#include <QVector>

class Cube
{
private:
    QVector <int> p_cubeEdge={0};
    int p_cubeV;
    int p_cubeS;


public:
    Cube(QVector <int> cubeEdge, int cubeS, int cubeV);
    void setCube(QVector <int> cubeEdge, int cubeS, int cubeV);
    int calc_cubeS() const { return 6*p_cubeEdge[0]*p_cubeEdge[0]; }
    int getCubeEdge() const { return p_cubeEdge[0]; }
    int calc_cubeV() const { return p_cubeEdge[0]*p_cubeEdge[0]*p_cubeEdge[0]; }
    int calc_cubeP() const { return 12*p_cubeEdge[0]; }
    int calc_cubeH() const { return p_cubeEdge[0]; }

};

#endif // CUBE_H
