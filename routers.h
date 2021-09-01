#ifndef ROUTERS_H
#define ROUTERS_H

class routers
{
private:
    char nombre;
    char conexiones[7]={0,0,0,0,0,0,0}; //un char 0 simboliza que el router no esta conectado a el router en esa posicion
    int precios[7]={-1,-1,-1,-1,-1,-1,-1}; // -1 simboliza que no estan conectados, cualquier valor mayor sera tomado como el costo de envio

public:
    routers();
    void datos();
    ~routers();
};

#endif // ROUTERS_H
