#ifndef RED_H
#define RED_H
#include <iostream>
#include <fstream>

using namespace std;

class red
{
private:
    char enrutadores[7];


public:
    red();
    string txt_copy(string);
    void crear_routers(string);
    ~red();

};

#endif // RED_H
