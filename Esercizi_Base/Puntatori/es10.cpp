#include <iostream>
using namespace std;


int main() {

    int x = 10;
    int y = 20;

    const int* const p = &x;

// Quali di queste righe causano errore di compilazione?
// 1) p = &y;     questa da errore , stiamo cercando di cambiare indirizzo di memoria a un puntatore costante
// 2) *p = 30;    questa da errore , stiamo cercando di cambiare valore a un puntatore che punta a un valore costante
// 3) int z = *p; questo non da errore , stiamoa assegnando a una nuova variabile z il valore puntato da p 

    return 0;
}