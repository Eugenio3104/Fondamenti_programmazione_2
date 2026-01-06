#include <iostream>
using namespace std;


int main(){

    int valore = 42 ; //valore contiene 42

    int* ptr = &valore; //ptr punta all'indirizzo di memoria di valore

    *ptr = 100; //ptr continua a puntare all'indirizzo di memoria di valore , ma adesso cio che ce dentro la scatola cambia , ma la scatola è uguale

    cout<<valore<<endl; // quindi qua stampa 100

    return 0;
}