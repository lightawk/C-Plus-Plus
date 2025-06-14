#include <iostream>
#include <string>

struct Joueur {
    std::string nom;
    int points;
    int dommages;
    bool isDead() {
        return points <= 0;
    }
    void attaquer(Joueur& autre);
};

void Joueur::attaquer(Joueur& autre) {
    autre.points -= dommages;
}

int main() {
    Joueur joueur_1;
    Joueur joueur_2;
    Joueur joueur_3;

    joueur_1.nom = "Joueur 1";
    joueur_1.points = 5;

    std::cout << joueur_1.nom << std::endl;
    //std::cin.ignore();

    if(joueur_1.isDead()) {
        std::cout << "Le joueur 1 est mort" << std::endl;
    }

    joueur_1.dommages = 2;
    joueur_2.points = 5;
    joueur_1.attaquer(joueur_2);

    std::cout << joueur_2.points << std::endl;

    return 0;
}