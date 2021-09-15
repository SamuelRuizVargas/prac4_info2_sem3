#include <iostream>
#include <routers.h>
#include <red.h>
#include <string.h>
#include <stdio.h>
#include <windows.h>

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
                char name[7], conexiones[7][7];
                int price[7][7];
                red topologia= red();
                info = topologia.txt_copy(nom_arch);//se guarda en info los datos que estaban en el txt
                topologia.info_routers(info,name,conexiones,price);//se crean los routers usando el metodo de la clase red
                //HACER BUCLE PARA CREAR LAS INSTANCIAS DE ROUTERS
                /*CUANDO TODO ESTE LISTO CONTROLAR CUANDO HAY MAS DE 7
                 * */
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
                            for (int i=0;i<=50;i++)
                            {
                                cout<<endl;
                            }
                            char ori, dest;
                            bool funciona;
                            funciona = topologia.verificar(); //se verifica la validez de la red a este momento
                            if (funciona==false)
                            {
                                cout<<"La red no cumple los requisitos para hacer una consulta, agregue mas routers y conexiones!"<<endl<<endl;
                                cout<<"Pulse la tecla 'Enter' para continuar"<<endl;
                                cin.get();
                            }
                            else
                            {
                                cout<<"Ingrese el enrutador origen: ";cin>>ori;
                                cout<<"Ingrese el enrutador destino: ";cin>>dest;
                                cout<<endl;
                                topologia.ruta_coste(ori,dest);
                            }
                        }
                        break;
                        case 2: //modificaciones
                        {
                            for (int i=0;i<=50;i++)
                            {
                                cout<<endl;
                            }
                            int opci;
                            cout<<"Ingrese 1 para agregar un enrutador"<<endl;
                            cout<<"Ingrese 2 para eliminar un enrutador"<<endl;
                            cout<<"Ingrese 3 para volver"<<endl;
                            cout<<"Digite su opcion: ";cin>>opci;
                            while(opci<1 or opci>3)
                            {
                                cout<<"Opcion invalida."<<endl;
                                cout<<"Digite su opcion: ";cin>>opci;
                            }

                            switch (opci)
                            {
                                case 1: //Agregar router
                                {
                                    //Hacer metodo en la red para crear un router y actualizar
                                    topologia.modificar(1);
                                    cout<<"Pulse la tecla 'Enter' para continuar"<<endl;
                                    cin.get();
                                }
                                break; //Eliminar router
                                case 2:
                                {
                                    //Hacer metodo en la red para eliminar un router y actualizar
                                    topologia.modificar(2);
                                    cout<<"Pulse la tecla 'Enter' para continuar"<<endl;
                                    cin.get();
                                }
                                break;
                                case 3: //volver
                                {
                                    cout<<"volviendo..."<<endl;
                                }
                                break;
                            }
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
