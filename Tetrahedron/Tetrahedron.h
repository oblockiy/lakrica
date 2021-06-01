#ifndef TETRAHEDRON_H
#define TETRAHEDRON_H

#include <QVector>

class Tetrahedron
{
private:
    QVector <int> p_tetraEdge={0};
    int p_tetraV;
    int p_tetraS;


public:
    Tetrahedron(QVector <int> tetraEdge, int tetraS, int tetraV);
    void set_tetra(QVector <int> tetraEdge, int tetraS, int tetraV);

    int get_tetraEdge() { return p_tetraEdge[0]; };
    float calc_tetraS() { return p_tetraEdge[0]*p_tetraEdge[0]*1.732; };
    float calc_tetraV() { return p_tetraEdge[0]*p_tetraEdge[0]*p_tetraEdge[0]/12.0*1.4142; };
    float calc_tetraP() { return 6.0*p_tetraEdge[0]; };
    float calc_tetraH() { return p_tetraEdge[0]*2.4495/3; };
};

#endif // TETRAHEDRON_H
