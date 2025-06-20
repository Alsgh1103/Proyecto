#include<iostream>
#include<string>
#include<locale>
#include<conio.h>
using namespace std;

struct movimiento{
  char tipo[20];
  int dia;
  float monto;
  char categoria[20];
};

struct Totales{
    char categoria[20];
    long gasto_total;
};

int main(){
    setlocale(LC_ALL,"");
    char nombre[30];
    int anio,mes,opcion;
    char nombreArchivo[50];
    cout<<"¿Hola, como te gustaría que te llamemos?(ingresar solo nombre)"<<endl;
    cout<<"Nombre: ";cin>>nombre;

    do{
        cout<<"Ingresar año (solo numero):";
        cin>>anio;
        if(anio<1900 ||anio>2999|| cin.fail()){
            cout<<"Error año no válido, ingréselo nuevamente"<<endl;
            cin.clear();
            cin.ignore(1000,'\n');
        }

    }while(anio<1900 || anio>>2999);
    do{
        cout<<"Ingresar mes (solo numero):";
        cin>>mes;
        if(mes<1 || mes>12|| cin.fail()){
            cout<<"Error mes no válido, ingréselo nuevamente"<<endl;
            cin.clear();
            cin.ignore(1000,'\n');
        }

    }while(mes<0 || mes>12);
    system("pause");
    system("cls");
    sprintf(nombreArchivo,"%s.%d.%02d",nombre,anio,mes);
    cout<<"Bienvenido "<<nombre<<" a tu gestor financiero"<<endl;
    if(mes<10){
        cout<<"Fecha: "<<anio<<"/0"<<mes<<endl;
        cout<<"--------------------------------------"<<endl;
    }else{
        cout<<"Fecha: "<<anio<<"/"<<mes<<endl;
        cout<<"--------------------------------------"<<endl;
    }
    do{
        cout<<"Seleccione la opción a realizar:"<<endl;
        cout<<"1. Registrar nuevo gasto"<<endl;
        cout<<"2. Mostrar gastos por categoría"<<endl;
        cout<<"3. Eliminar un gasto"<<endl;
        cout<<"4. Registrar nuevo ingreso"<<endl;
        cout<<"5. Mostrar ingresos por categoría"<<endl;
        cout<<"6. Eliminar un ingreso"<<endl;
        cout<<"7. Registrar presupuesto por categoría"<<endl;
        cout<<"8. Salir"<<endl;
        switch(opcion);
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
        
    }while(opcion!=8);
    cout<<"Programa finalizado con éxito"<<endl;

    return 0;
}
