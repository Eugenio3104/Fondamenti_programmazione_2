#include <iostream>
using namespace std;


int main(){

    int x = 5;

    int y = 10;
    
    const int* ptr1 = &x ; //non posso cambiare il valore 
    ptr1 = &y; // posso cambiare invece la "scatola"

    int* const ptr2  = &x ; //non posso cambiare la scatola
    *ptr2 = 20; //posso cambiare il valore 

    const int* const ptr3 = &x; //non posso ne cambiare il valore ne la scatola 
}