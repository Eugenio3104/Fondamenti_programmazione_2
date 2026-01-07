#include <iostream>
using namespace std;

int sumDigits(int n){
    //caso base quando il numero è esaurito
    if(n==0){
        return 0;
    }
    //passo ricorsivo : 
    //n%10 isola l'ultima cifra
    //sumdigits(n/10) passa il resto del numero alla prossima chiamata
    return n%10 + sumDigits(n/10);
}

int main(){

    int n = -123;
    cout<<sumDigits(n);

    return 0;
}