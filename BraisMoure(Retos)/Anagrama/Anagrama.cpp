#include <iostream> //flujo de entrada y salida
#include <string> //manejo de cadenas

void saltoDeLinea(){
    std::cout<<std::endl;
}

void imprime(string& mensaje){
    std::cout<<mensaje;
}

void intercambia(string& cadena, int i, int j){
    char temporal =  cadena[j];
    cadena[j] = cadena[i];
    cadena[i] = temporal;
}

int main(){

}