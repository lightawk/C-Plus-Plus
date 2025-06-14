#include <iostream> // Directive de preprocesseur ("header" de la bibliotheque standard pour utiliser les flux)
#include "fonction.hpp"
//#include "fonction.cpp"

// g++ fonction.cpp main.cpp -o main (=pour compiler)

// Prototype
int pow_custom(int number, int n);

int main() {

    int a = 0;
    float b = 0;
    // Un pointeur contient une adresse mémoire (&a=adresse mémoire de "a")
    int* p_int = &a;
    float* p_float = &b;

    int nombre = 0;
    std::cout << "Veuillez entrer un nombre" << std::endl;
    std::cin >> nombre;
    std::cin.ignore();

    //std::cout << a << std::endl;
    //std::cout << a << std::endl;
    // Va afficher les adresses memoire
    //std::cout << p_int << std::endl;
    //std::cout << p_float << std::endl;
    // A l'adresse de... afficher la valeur
    //std::cout << *p_int << std::endl;
    //std::cout << *p_float << std::endl;

    //std::cout << addition(5, 10) << std::endl;
    //std::cin.ignore();

    //std::cout << "Hello World" << std::endl;
    
    return 0;
}

// Fonction
int pow_custom(int number, int n) {
    int result = 1;
    for(int i = 0; i < n; ++i) {
        result *= number;
    }
    return result;
}