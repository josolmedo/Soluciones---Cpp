#include <iostream>

void saltoDeLinea(){
    std::cout<<"\n";
}

int main(){

    int numero;

    std::cout<<"Teclea un número entero: ";
    std::cin>>numero;

    saltoDeLinea();

    for(int i = 1; i < numero + 1; i++){
        if(i % 3 == 0 && i % 5 == 0){
            std::cout<<"fizzbuzz\n";            
        }
        else if (i % 3 == 0){
            std::cout<<"fizz\n";
        }
        else if(i % 5 == 0){
            std::cout<<"buzz\n";
        }
        else{
            std::cout<<i<<std::endl;
        }
    }

    saltoDeLinea();

    return 0;
}