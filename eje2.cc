#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"Ingrese el numero de terminos de la serie FIBONACCI: ";
    cin>>num;
    int a=0,b=1,contador=0;
    cout<< "Serie FIBONACI: ";
    while(contador<num){
    cout<<a<<" ";
    int c=a+b;
        a=b;
        b=c;
        contador++;
    }
    cout << endl;
    return 0;
}
