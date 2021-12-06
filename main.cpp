#include <iostream>
#include <cstdlib>
#include <cstdio>
#include<cstring>
#include <ctime>

using namespace std;
#include "funciones.h"
#include "resoluciones.h"

int main()
{
int opcion;
//vectores tipo int de los puntos
///PUNTO A
int examenPorDia [31]={};
///PUNTO B
int alumnosAusentes[35]={};
///PUNTO C
int materiaSinExamen [35]={};


while (true){
            system("cls"); //limpia pantalla
        cout << "MENU PRODUCCION "<< endl << "----------------------------------"<< endl;
        cout << "1 - CARGA DE DATOS"<<endl;
        cout << "2 - PUNTO A "<<endl;
        cout << "3 - PUNTO B"<<endl;
        cout << "4 - PUNTO C"<<endl;
        cout << "----------------------------------"<<endl;
        cout << "6 - Salir"<<endl;

        cout << endl<< "> ";
        cin>> opcion;
        system ("cls");

    switch (opcion){
        case 1:
            //los vectorers declarados en el main
            cargaDeInformacion (examenPorDia,alumnosAusentes, materiaSinExamen);
            break;
        case 2:
            puntoA (examenPorDia);
            break;
        case 3:
            puntoB (alumnosAusentes);
            break;
        case 4:
            puntoC (materiaSinExamen);
            break;
        case 6:
            cout << "GRACIAS POR USAR EL PROGRAMA!! =)"<<endl;
            return 0;
            break;
        default:
            cout << "NUMERO INGRESADO INCORRECTO"<<endl;
            break;
    }
    system("pause");
    }


    return 0;
}
