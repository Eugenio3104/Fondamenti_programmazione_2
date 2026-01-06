#include <iostream>
using namespace std;


int main(){

    //QUESTO MODO é SBAGLIATO PER ESPANDERE LA DIMENSIONE DI UN ARRAY
    int dim = 5;
    int* arr = new int[dim]{1,2,3,4,5};
    dim+=5;
    for(int i = (dim/2)+1  ; i < dim   ; i++){
        arr[i] = i;
    }

    for(int i = 0 ; i < dim ; i++){
        cout<<arr[i]<<" ";
    }

    //IL METODO CORRETTO è : 
    //CREARE UN NUOVO ARRAY DELLA DIMENSIONE DESIDERATA 
    //COPIARE I VECCHI VALORI NEL NUOVO ARRAY  
    //ELIMINARE IL VECCHIO ARRAY
    //AGGIUNGERE AL NUOVO ARRAY GLI ALTRI ELEMENTI 

    
    return 0;
}