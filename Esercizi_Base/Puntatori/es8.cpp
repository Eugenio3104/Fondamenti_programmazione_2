#include <iostream>
using namespace std;

const int& getValore(){
    static int v = 100;
    return v; 
}

int main(){

    auto x = getValore(); 
    x = 200;

    //auto x vede solo che getValore() returna un int scarta il riferimento 
    //x è una copia locale del valore 100 , quando gli cambiamo valore stiamo solo modificando nel main , v rimane invariata
    //se volevamo davvero un riferimento poiche la funzione returna int& allora dovevamo scrivere auto& x = 100 

    return 0;
}