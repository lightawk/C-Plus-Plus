#include "Television.h"

Television::Television(std::string marque) {
    this->marque = marque;
    this->estAllume = false;
}

void Television::Allumer() {
    this->estAllume = true;
}

void Television::Eteindre() {
    this->estAllume = false;
}

void Television::setVolume(int vol) {
    this->volume = vol;
}

void Television::ChangerDeChaine(int c) {
    this->chaine = c;
}

int Television::GetVolume() {
    return this->volume;
}