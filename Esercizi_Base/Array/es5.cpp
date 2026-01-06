#include <iostream>
using namespace std;

void stampaArray(int arr[] , int size){
    for(int i = 0 ; i < size ; i++){
        cout<<arr[i]<<" "<<endl;
    }
}


    //è necessario passare la dimensione alla funzione perche
    //all'interno della funzione l'array è diventato un puntatore , non porta con se l'informazione di quanto spazio punta sizeof() 
    //restituirebbe la dimensione del puntatore non dell'array originale

int main(){

    const int dim = 10 ; 
    int arr[dim] = {1,2,3,4,5,6,7,8,9,10};
    stampaArray(arr,dim);


    return 0;
}