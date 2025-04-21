#include <iostream>

using namespace std;

int main(){

    int contador = 0;

    for(int i = 0; i < 20; i++){
        cout<<i<<"\n";
    }

    while(contador < 20){
        cout<<"Ésta es la iteración número: "<<contador<<endl;
        contador++;
    }
    contador = 0;

    do {
        cout << "Iteración: " << contador << endl;
        contador++;
    } while (contador <= 5);



    return 0;
}