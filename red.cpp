#include "red.h"

red::red()
{

}

string red::txt_copy(string nombre) //Sacar el txt como string
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

void red::crear_routers(string)
{
    //se recibe el texto y se saca la info para la creacion de los routers encontrados en caso de ser menos de 7
}
