// Television.h
#include <iostream>

class Television {

private:
    int chaine;
    bool estAllume;
    std::string marque;
    int volume;

public:
    void Allumer();
    void Eteindre();
    void setVolume(int vol);
    void ChangerDeChaine(int c);
    int GetVolume();
    // Constructeur
    Television(std::string marque);
};