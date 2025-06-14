#include <Television.h>

int main() {
    // Notation classique
    Television TV("Samsung");
    TV.Allumer();
    TV.setVolume(10);
    // Notation avec un pointeur
    Television *TV_2 = new Television("Philips");
    TV_2->Allumer();
}