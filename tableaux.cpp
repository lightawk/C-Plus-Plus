#include <iostream>

void computeTable(int table, int output[10]) {
    for(int i = 0; i <= 10; i++) {
        output[i] = i * table;
    }
}

// output[0] = 0 * 5;
// output[1] = 1 * 5;
// output[2] = 2 * 5;

void afficherTableau(int output[11]) {
    for(int i = 0; i <= 10; i++) {
        std::cout << output[i] << std::endl;
    }
}

int main() {
    int table[11] = { 0 };
    //int table[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    
    computeTable(5, table);
    afficherTableau(table);
    
    std::cin.ignore();

    return 0;
}