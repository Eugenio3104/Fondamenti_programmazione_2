#include <iostream>
using namespace std;

void stampaArray(int arr[] , int size){
    for(int i = 0 ; i < size ; i++){
        cout<<arr[i]<<" ";
    }
}


int main(){

    const int dim = 10 ; 

    //ho supposto che tutti e 2 gli array hanno la stessa dimensione
    int arr1[dim] = {1,2,3,4,5,6,7,8,9,10};
    int arr2[dim];

    // arr2 = arr1 ; da errore di invalid array assignement , non è la maniera corretta per copiare un array 

    for(int i = 0 ; i < dim ; i++){
        arr2[i] = arr1[i];
    }

    cout<<"array 1 : "<<endl;
    stampaArray(arr1,dim);
    cout<<endl;
    cout<<"array 2 : "<<endl;
    stampaArray(arr2,dim);




    return 0;
}