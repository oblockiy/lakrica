#ifndef PARALLELEPIPED_H
#define PARALLELEPIPED_H

#include <QVector>

class Parallelepiped
{
private:

    QVector <int> p_ppEdges={0,0,0};
    int p_ppV;
    int p_ppS;


public:
    Parallelepiped(QVector <int> ppEdges, int ppS, int ppV);
    void set_PP(QVector <int> ppEdges, int ppS, int ppV);

    QVector<int> get_ppEdges() { return p_ppEdges; };

    int calc_ppS() { return 2*(p_ppEdges[0]*p_ppEdges[1]+p_ppEdges[0]*p_ppEdges[2]+p_ppEdges[1]*p_ppEdges[2]); };
    int calc_ppV() { return p_ppEdges[0]*p_ppEdges[1]*p_ppEdges[2]; };
    int calc_ppP() { return 4*p_ppEdges[0] + 4*p_ppEdges[1] + 4*p_ppEdges[2]; };
    int calc_ppH() { return p_ppEdges[2]; };
};

#endif // PARALLELEPIPED_H
