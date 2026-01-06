#include <iostream>
using namespace std;


int main(){

    int* arr = new int[10];

    delete arr;

    //deallocare in questa maniera è un rischio tecnico perche non stiamo deallocando tutta la memoria che abbiamo allocato 
    //stiamo distruggendo solo il primo elemento puntato dall'array gli altri no
    //Undefined Behavior. Il computer potrebbe liberare solo il primo elemento o, più probabilmente,
    // andare in crash perché la tabella interna della memoria si corrompe.

    
    return 0;
}