#include <bits/stdc++.h>
#include "Funciones.h"
using namespace std;


int main()
{
    int opc;



    do{
        cout<<"\n                  MENU                 \n";
        cout<<"  1. Grupo Multiplicativo\n";
        cout<<"  2. Funcion Euler\n";
        cout<<"  3. Division Trial\n";
        cout<<"  4. Pholard\n";
        cout<<"  5. Salir\n";
        cout<<"\n Ingrese Opcion: ";
        cin>>opc;
        switch(opc){

                case 1:
                        system("cls");
                        Multiplicativo();
                        system("pause");//Regresar al Menú
                        system("cls");
                        break;
                case 2:
                        system("cls");
                        FuncionEuler();
                        system("pause");//Regresar al Menú
                        system("cls");
                        break;
                case 3:
                       system("cls");
                        DivisionTrial();
                        system("pause");//Regresar al Menú
                        system("cls");
                        break;
                 case 4:
                        system("cls");
                        Pholard();
                        system("pause");//Regresar al Menú
                        system("cls");
                        break;
                case 5:
                       exit(0);
                        break;
            }

            }while(opc!=5);




    return 0;
}
