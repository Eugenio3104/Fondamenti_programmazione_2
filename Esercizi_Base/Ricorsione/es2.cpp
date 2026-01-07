#include <iostream>
#include <string>
using namespace std;

void reversePrint(string s){
    //caso base , se la stringa è vuota
    if(s.empty()){
        return;
    }
    //passo ricorsivo 
    //s.substr crea una nuova stringa che parte dal carattere all'indice 1 fino alla fine
    reversePrint(s.substr(1));

    cout<<s[0];

}

int main(){

    string stringa = "ciao";

    reversePrint(stringa);

    return 0;
}