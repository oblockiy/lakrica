#include "Tetrahedron.h"

Tetrahedron::Tetrahedron(QVector <int> tetraEdge, int tetraS, int tetraV)
{
    set_tetra(tetraEdge, tetraS, tetraV);
}


void Tetrahedron::set_tetra(QVector <int> tetraEdge, int tetraS, int tetraV)
{
    p_tetraEdge[0]= tetraEdge[0];
    p_tetraS=tetraS;
    p_tetraV=tetraV;
}

