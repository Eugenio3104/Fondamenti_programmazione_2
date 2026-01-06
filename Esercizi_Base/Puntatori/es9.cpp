#include <iostream>
using namespace std;

void reset(int* p) {
    p = nullptr;
}

int main() {
    int x = 5; // x contiene 5 
    int* ptr = &x; // ptr contiene l'indirizzo di x 
    reset(ptr); // chiamo la funzione reset su ptr 

    //l'argomento viene passato alla funzione per valore quindi crea una copia , non cambia il suo valore 

    if (ptr == nullptr) std::cout << "Nullo";

    else std::cout << "Non nullo";

    return 0;
}