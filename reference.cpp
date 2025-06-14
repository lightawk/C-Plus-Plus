#include <iostream>

void test(const int* nombre) {
    std::cout << *nombre << std::endl;
}

void test(const int& nombre) {
    std::cout << nombre << std::endl;
}

// Fonction qui retourne un pointeur sur un entier
int* foo() {
    return nullptr;
}

int main() {
    int nombre = 5;
    // Pointeur
    int* pointeur = &nombre;
    // Reference (=contient la valeur de "a")
    int& reference = nombre;

    // Un pointeur constant sur un entier constant
    const int* const ptr = nullptr;

    test(nombre);
    std::cin.ignore();
    return 0;
}