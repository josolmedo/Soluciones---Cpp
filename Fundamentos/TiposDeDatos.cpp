#include <iostream>

int main(){

    int edad = 24; //tipo de dato entero
    char letra = 'A'; //tipo caracter, siempre va en comillas simples
    double raizDos = 1.414213562; //tipo double 
    float pi = 3.14f; //tipo de dato flotante
    bool esVaron = true; // tipo booleano (true(1) / false(0))
    std::string palabra = "Hola, buen día"; //string no es un tipo de dato, es una clase

    const int numeros = 123; //const permite asignar constantes (no permiten modificar su valor)


    std::cout<<"int: "<< edad << std::endl;
    std::cout<<"char: "<< letra << std::endl;
    std::cout<<"double: "<<raizDos<<std::endl;
    std::cout<<"float: " << pi << std::endl;
    std::cout << "bool: "<< esVaron << std::endl;
    std::cout<< "string: "<<palabra<<std::endl;

    return 0;
}
/**En C++, los literales decimales (como 3.14) son de tipo double por defecto, al escribir 3.14f, definimos a 3.14 explicitamente como float desde un inicio
 * Literal | Tipo que indica
    1.5f   | float
   2.71828 | double (por defecto)
  2.71828L | long double
      100u | unsigned int
       42L | long int
      42LL | long long int


     Tipo | Tamaño (promedio) | Rango aproximado
    short |      2 bytes      | –32,768 a 32,767
      int |      4 bytes      | –2,147,483,648 a 2,147,483,647
     long |     4/8 bytes     | depende del sistema
long long |     8 bytes       | –9,223,372,036... a +9,223...

 * **/