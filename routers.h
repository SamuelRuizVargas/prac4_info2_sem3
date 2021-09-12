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
    void datos();
    ~routers();
};

#endif // ROUTERS_H
