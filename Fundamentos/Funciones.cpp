#include <iostream>
using namespace std;

void saludar(){
    cout<<"\nSaludos\n"<<endl;
}

void saltoDeLinea(){
    cout<<"\n";
}

int sumar(int a, int b){
    return a+b;
}

bool esPrimo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main(){

    saludar();
    int a, b;
    int numero;
    
    cout<<"A continuación sumaremos dos números"<<endl;
    saltoDeLinea();
    cout<<"Ingrese el primer número: ";
    cin>>a;
    saltoDeLinea();
    cout<<"Ingrese el segundo número: ";
    cin>>b;
    saltoDeLinea();

    int suma = sumar(a,b);

    cout<<"La suma de "<<a<<" y de "<<b<<" es: "<<suma;
    saltoDeLinea();
    saltoDeLinea();

    cout<<"Ingrese un número para saber si es primo: ";
    cin>>numero;
    saltoDeLinea();
    

    cout << numero << " es primo? " << (esPrimo(numero) ? "Sí" : "No") << endl;
    saltoDeLinea();
    saltoDeLinea();

    return 0;
}

/**Estructura de una función:
    tipo_de_retorno nombre(parámetros) {
    // cuerpo de la función
}
**/