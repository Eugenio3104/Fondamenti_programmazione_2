#include <iostream>

int main() {
    int* ptr = new int[10]{}; // Alloco 10 interi (40 byte totali)

    // ERRORE DI LOGICA COMUNE:
    std::cout << "Sizeof ptr: " << sizeof(ptr) << " byte\n";

    delete[] ptr;
    return 0;
}