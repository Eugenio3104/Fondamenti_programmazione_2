#include <iostream>
using namespace std;

int main(){

    const int dim = 10 ;

    int arr[dim] = {12,42,14,11,54,6,32,7,90,11};

    if(dim > 0){
    //l'idea è dire che il primo elemento è il piu grande
    int idx = 0;
    int max = arr[0];

    for(int i = 1 ; i < dim ; i++){
        if(arr[i]>max){
            //qui avviene lo scambio se un elemento dell'array dal secondo elemento in poi è piu grande del primo
            max = arr[i];
            idx = i;
        }
    }

    cout<<"elemento massimo : "<<max<<" all'indice : "<<idx<<endl;

    }else{
        cout<<"array vuoto"<<endl;
    }


    return 0;
}