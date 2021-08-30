#ifndef ROUTERS_H
#define ROUTERS_H

class routers
{
private:
    char nombre;
    char conexiones[7]={0,0,0,0,0,0,0};
    int precios[7]={-1,-1,-1,-1,-1,-1,-1};

public:
    routers();
    void datos();
    ~routers();
};

#endif // ROUTERS_H
