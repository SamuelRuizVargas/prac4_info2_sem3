#include "funciones.h"

string txt_copy(string nombre)
{
    ifstream archivo;
    string texto, textofin;
    archivo.open("../practica4/archivotxt/"+nombre, ios::in);//archivo en modo lectura
    if(archivo.fail())
    {
        cout<<"El archivo no se pudo abrir"<<endl;
        exit(1);
    }

    while(!archivo.eof())//Mientras no llegue a en End Of File
    {
        getline(archivo,texto);
        textofin+=texto+"\n";
    }
    archivo.close();
    int len=textofin.length()-1;
    textofin.erase(len);
    return textofin;
}


int cant_routers(string datos)
{
    //utlizar el limite de 7 routers a mi favor
}
