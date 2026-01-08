#include <iostream>
using namespace std;

struct Prodotto{
    int id ;
    string nome;
    double prezzo;
};

void stampaArray(const Prodotto* arr ,const int dim) {
    for(int i = 0 ; i < dim ; i++){
        cout<<"id : "<<arr[i].id<<", nome : "<<arr[i].nome<<", prezzo : "<<arr[i].prezzo<<endl;
    }
}

string piuCostoso(const Prodotto* arr ,const int dim){
    double prezzo = arr[0].prezzo;
    string nomeProdotto = arr[0].nome;
    for(int i = 0 ; i < dim ; i++){
        if(prezzo < arr[i].prezzo){
            prezzo = arr[i].prezzo;
            nomeProdotto = arr[i].nome;
        }
    }
    return nomeProdotto;
}

int main(){

    const int dim = 3;

    Prodotto array[dim] = {{1,"Cereali",2} , {2,"Pollo",5.30} , {3,"Coca",32.20}};

    stampaArray(array,dim);
    cout<<piuCostoso(array , dim)<<endl;


    return 0;
}