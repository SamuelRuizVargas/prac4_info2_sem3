#ifndef ROUTERS_H
#define ROUTERS_H
#include <iostream>
#include <iterator>
#include <map>

using namespace std;

class routers
{
private:
    char nombre;
    map<char,int> conexiones;

public:
    routers();
    routers(char,char[7],int[7]);
    //void datos(); solo hacen en caso de hacer las modificaciones de conexion y precios
    ~routers();
};

#endif // ROUTERS_H
