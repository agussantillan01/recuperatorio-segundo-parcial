#ifndef RESOLUCIONES_H_INCLUDED
#define RESOLUCIONES_H_INCLUDED
void cargaDeInformacion (int examenPorDia [31], int alumnosAusentes[35],int materiaSinExamen [35]){
    int nExamen,nAlumno,codigoMateria,dia,Ndia;
    float nota;
    ///TODAS LAS ENTRADAS
    cout << "Ingrese "<< endl<< "--------"<< endl;
    cout << "Numero de examen: ";
    cin >> nExamen;

    while (nExamen !=0){
        cout << endl<< "Numero de Alumno: ";
        cin>> nAlumno;
        cout << endl<< "Codigo de materia: ";
        cin >> codigoMateria;
        while (codigoMateria<1 || codigoMateria>35){
            cout << endl<< "ERROR. INGRESE NUEVAMENTE EL CODIGO DE MATERIA: ";
            cin >> codigoMateria;
        }
        cout << endl<< "Dia: ";
        cin >> dia;
        cout << endl<< "Nota: ";
        cin >> nota;
        while (nota<0 || nota>10){
            cout << "NOTA INCORRECTA."<<endl<< "Ingrese nuevamente la nota: ",
            cin >> nota;
        }


        ///PUNTO A
        Ndia = dia-1;
        examenPorDia [Ndia]++;

        ///PUNTO B

        if (codigoMateria==10){
            if (nota==0){
                alumnosAusentes[dia-1] =nAlumno;
            }
        }

        ///PUNTO C
        materiaSinExamen [codigoMateria-1]++;

        system ("cls");
    cout <<endl<<"Numero de examen: ";
    cin >> nExamen;
    }


}







///DESARROLLO DEL PUNTO A

void puntoA (int examenPorDia [31]){
    int x;
    cout << "DIA   : EXAMENES ";
    for (x=0; x<31; x++){
        cout <<endl << x+1<< "  :  ";
        cout << examenPorDia[x]<<endl;;
    }

}


///DESARROLLO DEL PUNTO B

void puntoB (int alumnosAusentes[35]){
int x;
cout << "Codigo de alumnos ausentes: ";
for (x=0; x<35; x++){
    if (alumnosAusentes[x]!=0){
        cout << endl<< "# "<< alumnosAusentes[x];
    }

}


}


///DESARROLLO DEL PUNTO C

void puntoC (int materiaSinExamen [35]){
int x;
cout << "CODIGO DE MATERIAS SIN EXAMAENES: ";
for (x=0; x<35; x++){
    if (materiaSinExamen[x]==0){
        cout <<endl<< "> ";
        cout << x+1;
    }
}


    }



#endif // RESOLUCIONES_H_INCLUDED
