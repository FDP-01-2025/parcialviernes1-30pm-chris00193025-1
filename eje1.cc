#include <iostream>
using namespace std;
int main() {

    int array[8], num, encontrado = 0;
    
    cout<<"Ingresa una cantidad de numeros\n"<<num;

    for(int i = 0; i < 8; i++) {
        cin >> array[i];
    }
    cin >> num;
    for(int i = 0; i < 8; i++) {
        if(array[i] == num) {
            encontrado = 1;
            break;
        }
    }
    if(encontrado) cout << "Numero encontrado" << endl;
    else cout << "Numero no encontrado" << endl;
    return 0;
} 