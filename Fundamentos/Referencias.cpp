#include <iostream>
using namespace std;

void saltoDeLinea(){
    cout<<"\n";
}

void incrementar(int &x){
    x++;
}

int main(){

    int a;
    int &b = a; //alias

    saltoDeLinea();
    cout << "Ingrese un número: ";
    cin >> a;

    saltoDeLinea();
    

    incrementar(a);

    cout<<&a; //Con el operador & previo al nombre de una variable mostrarmos la dirección de memoria.
    saltoDeLinea();
    cout<<&b;
    saltoDeLinea();
    saltoDeLinea();


    cout<<a;
    saltoDeLinea();
    cout<<b;
    saltoDeLinea();
    saltoDeLinea();



    





    return 0;
}