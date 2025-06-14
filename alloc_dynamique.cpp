#include <iostream>

// Affichage du tableau
void afficher_tableau(int* array, int taille) {
    for(int i = 0; i < taille; i++) {
        std::cout << array[i] << std::endl;
    }
}

int main() {
    // Allocation dynamique
    //int* pointeur = new int;
    //..
    //delete pointeur;
    
    int nombre = 0;
    std::cout << "Veuillez entrer un nombre" << std::endl;
    std::cin >> nombre;
    std::cin.ignore();
    
    // Tableau dynamique
    int* array = new int[nombre];
    // Initialisation du tableau
    for(int i = 0; i < nombre; i++) {
        array[i] = i;
    }
    // Affichage du tableau
    afficher_tableau(array, nombre);
    // Desallouer la memoire
    delete[] array;
    std::cin.ignore();

    return 0;
}