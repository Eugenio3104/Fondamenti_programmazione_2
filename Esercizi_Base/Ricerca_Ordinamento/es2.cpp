#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        // Assumi che il minimo sia l'elemento corrente
        int indiceMinimo = i;

        // Cerca l'effettivo minimo nel resto dell'array
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[indiceMinimo]) {
                indiceMinimo = j; // Salva solo l'indice, non scambiare ancora!
            }
        }

        // Scambia solo alla fine del ciclo interno (se necessario)
        if (indiceMinimo != i) {
            int temp = arr[i];
            arr[i] = arr[indiceMinimo];
            arr[indiceMinimo] = temp;
        }
    }
}
    
void stampaArray(int arr[] , int n ){
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
}


int main(){

    const int dim = 8;
    int arr[dim] = {};

    for(int i = 0 ; i < dim ; i++){
        cout<<"Inserisci numero : ";cin>>arr[i];
    }

    cout<<"Array originale : "<<endl;
    stampaArray(arr,dim);
    selectionSort(arr,dim);
    cout<<"Array ordinato : "<<endl;
    stampaArray(arr,dim);


    return 0;
}