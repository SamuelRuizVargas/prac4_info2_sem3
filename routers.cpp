#include "routers.h"

routers::routers()
{

}

routers::routers(char _nombre, char conexion[7], int precios[7])
{
    nombre=_nombre;
    char conec;
    int prec;
    for(int i=0;i<7;i++)
    {
        conec=conexion[i];
        prec=precios[i];
        conexiones.insert(pair<char,int>(conec,prec));
    }
}

routers::~routers()
{

}
