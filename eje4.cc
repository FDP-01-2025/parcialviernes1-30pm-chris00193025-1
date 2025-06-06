#include <iostream>
using namespace std;
double saldo= 1000;
double deuda= 0;

int main(){
int dui;
int numc;
int opcion;
cout<<"Bienvenido a tu cajero automatico";
cout<<"Para entrar debes ingresar tu DUI: ";
cin>>dui;
cout<<"Y tambien tu Numero de cuenta: ";
cin>>numc;
cout<<"Que operacion desea realizar?\n";
cout<<"1. Deposito\n";
cout<<"2. Consulta\n";
cout<<"3. Retiro\n";
cout<<"4. Salir\n";
cin>>opcion;

switch(opcion){
    case 1:
    int deposito;
    cout<<"Cuanto desea depositar?";
    cin>>deposito;
    cout<<"Su saldo actual es de: $"<<saldo+deposito;
    break;
     case 2:
    cout<<"Su saldo actual es de: $"<<saldo;
    break;
     case 3:
    int retiro;
    cout<<"Cuanto desea retirar?: $";
    cin>>retiro;
    if(retiro<=saldo){
    cout<<"Operacion exitosa, su saldo actualizado es de: $"<<saldo-retiro;
    } else 
    cout<<"Posee fondos insuficientes";
    break;
     case 4:
     cout<<"Gracias por usar el programa";
     return 0;
    break;
} 
}//programa que simula el funcionamiento de un cajero automatico con un meno que permite realizar depositos, retiros y consulta en la cuenta, que se repite hasta que eñ usuario decide salir