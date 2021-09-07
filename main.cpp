#include <iostream>
#include <routers.h>
#include <funciones.h>
#include <string.h>

using namespace std;

int main()
{
    /*
     * Recopilacion: Un maximo de 7 routers, cada ruter es capaz de conocer los costos de envio hacia
     * los otros routers a los que esta conectado, se deben poder actualizar los precios y
     * conexiones en tiempo de ejecucion, se deben poder agregar y eliminar routers.
     * Debe haber una tabla general de costes de envio para usos internos.
     * Se debe poder cargar una topologia desde un archivo de texto.
     * Por ultimo se debe ofrecer al usuario el coste de envio desde un origen a un destino
     * y ademas indicarle cual es el camino mas corto/eficiente
     *
     * Analisis: El programa debe ser extremada mende versatil, que sea capaz de adaptarse a practicamente
     * cualquier topologia ingresada por el usuario dentro de las regulaciones del mismo, el uso de objetos
     * y librerias sera escencial en muchos trayectos. Saber que tipo de dato usar sera escencial para que
     * el programa se ejecute sin problemas.
     */

    int opcion;
    cout << "Practica 4 - Samuel Ruiz Vargas - CC: 1000898936"<<endl<<endl;
    cout << "NOTA(S): Una vez cerrado el programa se borrara la red que haya sido creada en el proceso"<<endl<<endl;

    bool terminar=false;
    int term;
    while (terminar==false)
    {
        cout<<"1 - Inicializar un red por medio de un archivo de texto (maximo de 7 enrutadores)"<<endl;
        cout<<"2 - Agregar/Eliminar un enrutador o conexion (maximo de 7 enrutadores)"<<endl;
        cout<<"3 - Salir del programa"<<endl<<endl;
        cout<<"Ingrese la opcion deseada: ";cin>>opcion;
        while (opcion<1 or opcion>4)
        {
            cout<<"Opcion invalida."<<endl;
            cout<<"Ingrese la opcion deseada: ";cin>>opcion;
        }

        switch(opcion)
        {
            //------------------------------------------------------------------------------------------------------------------
            case 1: //Inicializar un red por medio de un archivo de texto
            {
                string nom_arch, info;
                int num_rout;
                cout<<"Ingrese el nombre del archivo en el que se encuentra la topologia(sin extension de archivo): ";cin>>nom_arch;
                nom_arch+=".txt";//Se le agrega la extension
                info = txt_copy(nom_arch);
                num_rout = cant_routers(info);
//                crear_usu(info, num_rout);


                //Codigo para volver al menu principal
                cout<<"Ingrese 1 para terminar o 2 para seguir usando el programa: ";cin>>term;
                while (term<1 or term>2)
                {
                    cout<<"Ingrese 1 para terminar o 2 para seguir usando el programa: ";cin>>term;
                }
                if(term==1)
                {
                    terminar=true;
                }
                else
                {
                    terminar=false;
                    for (int i=0;i<=50;i++)
                    {
                        cout<<endl;
                    }
                }
            }
            break;
            //------------------------------------------------------------------------------------------------------------------
            case 2: //Agregar/Eliminar un enrutador o conexion
            {



                //Codigo para volver al menu principal
                cout<<"Ingrese 1 para terminar o 2 para seguir usando el programa: ";cin>>term;
                while (term<1 or term>2)
                {
                    cout<<"Ingrese 1 para terminar o 2 para seguir usando el programa: ";cin>>term;
                }
                if(term==1)
                {
                    terminar=true;
                }
                else
                {
                    terminar=false;
                    for (int i=0;i<=50;i++)
                    {
                        cout<<endl;
                    }
                }
            }
            break;
            //------------------------------------------------------------------------------------------------------------------
            case 3: //Salir del programa
            {
                terminar=true;
            }
            break;
        }
    }
}
