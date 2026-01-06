#include <iostream>
using namespace std;


int main(){

  // int* p = 5; //il problema che qui il puntatore non punta a un indirizzo di memoria ma un valore specifico 

  // double d = 3.14 ; int* p = &d ; //qui l'errore è evidente , d è un double mentre p è un puntatore a interi il problema è quindi nei tipi 

   int x = 10; int* p = &x; //questa è la maniera corretta di come andare a dichiarare e inizializzare un puntatore

   return 0;
}