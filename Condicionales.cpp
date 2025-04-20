#include <iostream>

int main(){

    int edad;

    std::cout << "\n\nIngresa tu edad: ";
    std::cin >> edad;

    

    if(edad >= 18 && edad <= 90){
        std::cout<<"\nEres mayor de edad\n\n";
    }
    else if(edad > 90){
        std::cout<<"\nEres muy grande, increíble\n\n";
    }
    else{
        std::cout << "\nNo eres mayor de edad \n\n";
    }


    return 0;
}