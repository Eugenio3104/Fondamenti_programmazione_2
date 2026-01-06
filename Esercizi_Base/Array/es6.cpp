#include <iostream>
using namespace std;

int main(){

    int a[5];

    a[5] = 100;

   cout<<"indice 0 : "<<a[0]<<" indice 1 : "<<a[1]<<" indice 2 : "<<a[2]<<endl;
   cout<<"indice 3 : "<<a[3]<<" indice 4 : "<<a[4]<<" indice 5 : "<<a[5]<<endl;

   //quello che è successo e che noi abbiamo dichiarato un array senza inizializzarlo , ha messo della "spazzatura" all'interno
   //tranne all'indice 5 che ha messo il valore che noi abbiamo detto , ma l'indice 5 non fa parte del nostro array 
   //il 100 si trova in una cella di memoria fuori dall'array
   //Buffer overflow si chiama questo problema

    return 0;
}