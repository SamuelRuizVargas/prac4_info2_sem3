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

void red::ruta_coste(char origen, char destino)
{
    //se recibe el origen y el destino, teniendo en cuenta la informacion de las clases se imprime el costo minimo ademas de la ruta mas eficiente
    //tambien verifica que el nombre de los router coincida
}

bool red::verificar()
{
    //verifica que la red tenga almenos 2 routers conectados
}
