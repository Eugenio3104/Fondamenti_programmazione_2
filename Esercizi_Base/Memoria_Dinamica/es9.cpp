#include <iostream>

int main() {
    // Ciclo che gira 1000 volte
    for (int i = 0; i < 1000; ++i) {
        // Alloco un array di 1000 interi ogni volta
        int* p = new int[1000];
        
        // MANCA IL delete[] p; <--- Questo è il leak!
        
        // Ad ogni iterazione, perdiamo il puntatore 'p' 
        // perché esce dallo scope, ma la memoria nell'Heap resta occupata.
    }

    std::cout << "Memoria allocata e mai restituita!" << std::endl;
    return 0;
}