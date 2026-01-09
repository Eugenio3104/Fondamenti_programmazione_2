#include <iostream>
#include <list>
using namespace std;

void aggiungiNumero(list<int>& numeri , const int& numero){
    numeri.push_back(numero);
}

void stampa(const list<int>& numeri ){
    for(auto it = numeri.begin() ; it != numeri.end() ; ++it){
        cout<<*it<<" ";
    }
}

int eliminaDuplicati(list<int>& numeri){
    numeri.sort();    // Usa il metodo della classe list
    numeri.unique();  // Ora puoi rimuovere i duplicati
    return numeri.size();
}

int main(){
    int size = 10;
    list<int> numeri;
    int numero;
    for(int i = 0 ; i < size ; i++){
        cout<<"Inserisci un numero : ";cin>>numero;
        aggiungiNumero(numeri,numero);
    }

    stampa(numeri);

    eliminaDuplicati(numeri);
    
    stampa(numeri);

    
    return 0;
}