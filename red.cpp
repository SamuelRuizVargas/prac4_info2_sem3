#include "red.h"

red::red()//constructor
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

bool red::exis_router(char nombre) //verifica si el router existe en la lista de la red
{
    bool existe=false;
    char caracter;
    for(int i=0;i<7;i++)
    {
        caracter=enrutadores[i];
        if(caracter==nombre)
        {
            existe=true;
        }
    }
    return existe;
}

int red::pos_router(char name, char nombres[7]) //entrega la posicion de un char en un arreglo
{
    int pos=0;
    char caracter;
    for(int i=0;i<7;i++)
    {
        caracter=nombres[i];
        if(caracter==name)
        {
            pos=i;
            return pos;
        }
    }
    return pos;
}

void red::info_routers(string texto, char nombres[7], char conectados[7][7], int costos[7][7]) //entrega toda la informacion para crear las instancias de routers
{
    vector<string> lineas;
    int longi=texto.length(), posi, posi2, precio;
    string caracter, linea, linea2,precio_string;
    char carac,carac2;
    for (int i=0;i<=longi;i++)//se separa por lineas
    {
        caracter = texto[i];
        if(caracter != "\n" and i!=longi)
        {
            linea+=caracter;
        }
        else if(i==longi)
        {
            lineas.push_back(linea);
            linea.clear();
        }
        else
        {
            lineas.push_back(linea);
            linea.clear();
        }
    }
    bool existe;
    int contador=-1;
    for(auto i=lineas.begin();i != lineas.end(); i++)//se sacan los datos
    {
        linea=*i;
        carac=linea[0];
        existe=exis_router(carac);
        if(existe==false)
        {
            contador++;
            nombres[contador]=carac;
            enrutadores[contador]=carac;
        }
        carac2=linea[1];
        existe=exis_router(carac2);
        if(existe==false)
        {
            contador++;
            nombres[contador]=carac2;
            enrutadores[contador]=carac2;
        }
        posi=pos_router(carac,nombres);
        posi2=pos_router(carac2,nombres);
        conectados[posi][posi2]=carac2;
        longi=linea.length();
        for(int k=3;k<longi;k++)
        {
            precio_string+=linea[k];
        }
        precio=atoi(precio_string.c_str());
        precio_string.clear();
        costos[posi][posi2]=precio;
    }


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

void red::modificar(int opcion)
{
    //se crea un menu para agregar o eliminar routers segun la opcion con que se llama al metodo (se verifica la cantidad de routers previamente)
}

red::~red()//destructor
{

}
