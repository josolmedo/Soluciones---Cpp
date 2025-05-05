#include <iostream> //flujo de entrada y salida
#include <string> //manejo de cadenas (getline)
#include <limits>


void saltoDeLinea(){
    std::cout<<std::endl;
}

void intercambia(std::string& cadena, int i, int j){
    char temporal =  cadena[j];
    cadena[j] = cadena[i];
    cadena[i] = temporal;
}

void quickSort(std::string& cadena, int start, int end){
    if(start >= end){
        return;
    }
    int pivote = end;
    int i = start;
    int j = pivote - 1;

    while (i <= j) {
        if (cadena[i] > cadena[pivote] && cadena[j] <= cadena[pivote]) {
            intercambia(cadena, i, j);
            ++i; --j;
        }
        else if (cadena[i] <= cadena[pivote]) {
            ++i;
        }
        else {
            --j;
        }
    }

    // Coloca el pivote en su posición correcta
    intercambia(cadena, i, pivote);

    // Recurre a los dos subarreglos
    quickSort(cadena, start, i - 1);
    quickSort(cadena, i + 1, end);
}

// Comprueba si dos cadenas son anagramas
bool anagrama(std::string cadena1, std::string cadena2) {
    // Si son iguales o de distinta longitud, no son anagrama
    if (cadena1 == cadena2 || cadena1.length() != cadena2.length()){
        return false;
    }

    // Ordena ambas cadenas
    quickSort(cadena1, 0, static_cast<int>(cadena1.length()) - 1); //.lenght() da un short int sin signo, puede causar warnings, por eso el static_cast
    quickSort(cadena2, 0, static_cast<int>(cadena2.length()) - 1);

    // Si ahora son iguales, eran anagramas
    return cadena1 == cadena2;
}

int main() {
    int continuar = 1;
    std::string palabra1, palabra2;

    while (continuar == 1) {
        saltoDeLinea();
        std::cout<<"Ingresa la primer palabra: ";
        std::getline(std::cin, palabra1); //Lee todo hasta un salto de línea \n

        saltoDeLinea();
        std::cout<<"Ingresa la segunda palabra: ";
        std::getline(std::cin, palabra2);
        saltoDeLinea();

        // Convierte ambas a minúsculas
        for (char& c : palabra1) c = static_cast<char>(std::tolower(static_cast<unsigned char>(c)));
        for (char& c : palabra2) c = static_cast<char>(std::tolower(static_cast<unsigned char>(c)));

        // Comprueba anagrama
        if (anagrama(palabra1, palabra2))
            std::cout << "Si es anagrama" << std::endl;
        else
            std::cout << "No es anagrama" << std::endl;

        saltoDeLinea();
        std::cout<<"¿Desea volver a intentar? 1(si)/otro(no): ";
        if (!(std::cin >> continuar)) {
            // Si la entrada no es un entero, salimos
            break;
        }
        // Limpiamos el '\n' pendiente
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    saltoDeLinea();
    std::cout<<"Gracias por utilizar este programa :)";
    saltoDeLinea();
    saltoDeLinea();

    return 0;
}

