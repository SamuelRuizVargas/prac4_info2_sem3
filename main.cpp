#include <iostream>
#include <routers.h>
#include <red.h>
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
        cout<<"2 - Crear red agregando o eliminando enrutadores o conexiones (maximo de 7 enrutadores)"<<endl;
        cout<<"3 - Salir del programa"<<endl<<endl;
        cout<<"Ingrese la opcion deseada: ";cin>>opcion;
        while (opcion<1 or opcion>3)
        {
            cout<<"Opcion invalida."<<endl;
            cout<<"Ingrese la opcion deseada: ";cin>>opcion;
        }

        switch(opcion)
        {
            //------------------------------------------------------------------------------------------------------------------
            case 1: //Inicializar un red por medio de un archivo de texto
            {
                for (int i=0;i<=50;i++)
                {
                    cout<<endl;
                }

                string nom_arch, info;
                cout<<"Ingrese el nombre del archivo en el que se encuentra la topologia(sin extension de archivo): ";cin>>nom_arch;
                nom_arch+=".txt";//Se le agrega la extension
                red topologia;
                info = topologia.txt_copy(nom_arch);//se guarda en info los datos que estaban en el txt
                topologia.crear_routers(info);//se crean los routers usando el metodo de la clase red
                bool preguntar=true;
                while (preguntar==true)
                {
                    for (int i=0;i<=50;i++)
                    {
                        cout<<endl;
                    }
                    int elec;
                    cout<<"A continuacion indique que desea hacer con la red: "<<endl<<endl;
                    cout<<"Ingrese 1 para hacer una consulta sobre rutas y costos."<<endl;
                    cout<<"Ingrese 2 para agregar o eliminar una conexion o enrutador"<<endl<<endl;
                    cout<<"Ingrese 3 para volver al menu principal"<<endl<<endl;
                    cout<<"Opcion: ";cin>>elec;
                    while(elec<1 or elec>3)
                    {
                        cout<<"Opcion invalida."<<endl;
                        cout<<"Ingrese la opcion deseada: ";cin>>elec;
                    }

                    switch (elec)
                    {
                        case 1: //consultas
                        {
                            //realizar metodos para consultar costos y rutas
                        }
                        break;
                        case 2: //modificaciones
                        {
                            //realizar metodos para hacer modificaciones a la red
                        }
                        break;
                        case 3: //menu principal
                        {
                            preguntar=false;
                            for (int i=0;i<=50;i++)
                            {
                                cout<<endl;
                            }
                        }
                        break;
                    }
                }
            }
            break;
            //------------------------------------------------------------------------------------------------------------------
            case 2: //Crear red agregando o eliminando enrutadores o conexiones (maximo de 7 enrutadores)
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
