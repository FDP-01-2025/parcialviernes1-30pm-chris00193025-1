#include <iostream>
using namespace std;

double saldo = 1000;

int main() {
    int dui;
    int numc;
    int opcion;

    cout<<"Bienvenido a tu cajero automaatico\n";
    cout<<"Para entrar debes ingresar tu DUI: ";
    cin>>dui;
    cout<<"Y tambien tu numero de cuenta: ";
    cin>>numc;

    do {
        cout<<"\nQue operacion desea realizar?\n";
        cout<<"1.Deposito\n";
        cout<<"2.Consulta\n";
        cout<<"3.Retiro\n";
        cout<<"4.Salir\n";
        cout<<"Selecciona una opcion: ";
        cin>>opcion;
        switch (opcion){
            case 1:
            int deposito;
            cout<<"Cuanto desea depositar? $";
            cin>>deposito;
            saldo += deposito;
            cout<<"Deposito exitoso. Su saldo actual es de: $" << saldo << "\n";
            break;
            case 2:
            cout<<"Su saldo actual es de: $" << saldo << "\n";
            break;
            case 3:
            cout<<"Cuanto desea retirar? $";
            int retiro;
            cin >> retiro;
                if(retiro<=saldo){
                    saldo-=retiro;
                    cout<<"Operación exitosa, su saldo actualizado es de: $"<<saldo<<"\n";
                } else{
                    cout<<"Fondos insuficientes\n";
                }
                break;
            case 4:
            cout<<"Gracias por usar el programa\n";
            break;
            default:
                cout<<"Opcion invalida, intente de nuevo\n";
        }
    }while(opcion != 4);
    return 0;
}
