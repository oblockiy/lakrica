#include "Cube.h"

Cube::Cube(QVector <int> cubeEdge, int cubeS, int cubeV)
{
    setCube(cubeEdge, cubeS, cubeV);
}


void Cube::setCube(QVector <int> cubeEdge, int cubeS, int cubeV)
{
    p_cubeEdge[0]=cubeEdge[0];
    p_cubeS=cubeS;
    p_cubeV=cubeV;
}


