#ifndef RED_H
#define RED_H
#include "routers.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>

using namespace std;

class red
{
private:
    char enrutadores[7]={0,0,0,0,0,0,0};

public:
    red();
    string txt_copy(string);
    bool exis_router(char);
    int pos_router(char,char[7]);
    void info_routers(string, char[7], char[7][7], int[7][7]);
    int conta_routers(char[7]);
    void conexiones_red(routers[7], char[7][7], int[7][7]);
    void ruta_coste(char, char, char[7][7], int[7][7]);
    bool verificar(char[7][7]);
    void modificar(char*, char[7], int[7]);
    int modificar();
    int cant_routers_red();
    ~red();

};

#endif // RED_H
