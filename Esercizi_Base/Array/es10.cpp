#include <iostream>
using namespace std;

void func(int* b){
    cout<<b;
}

int main(){

    const int a[5] = {1,2,3,4,5};
    //func(a); 
    //il compilatore non accetta perche stiamo  passando alla funzione un  un puntatore a un intero costante
    //se non fosse costante se lo prenderebbe e la funzione stamperebbe l'indirizzo del primo elemento dell'array

    return 0;
}