#include <iostream>
using namespace std;

int main(){

    int a[100] = {1,2,3};

    for(int i = 0 ; i < 100 ; i++){
        cout<<a[i]<<" ";
    }

    // abbiamo parzialemnte inizializzato l'array e lui ha completato i posti mancanti con tutti 0

    return 0;
}