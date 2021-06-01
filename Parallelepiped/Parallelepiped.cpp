#include "Parallelepiped.h"

Parallelepiped::Parallelepiped(QVector <int> ppEdges, int ppS, int ppV)
{
    set_PP(ppEdges, ppS, ppV);
}


void Parallelepiped::set_PP(QVector <int> ppEdges, int ppS, int ppV)
{
    for (int i = 0; i < 3; i++){
         p_ppEdges[i]= ppEdges[i];
    }
    p_ppS=ppS;
    p_ppV=ppV;
}


