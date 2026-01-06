#include <iostream>
using namespace std;

int* copia(int* arr , int dim){
    int* arr2 = new int[dim];
    for(int i = 0 ; i < dim ; i++){
        arr2[i] = arr[i];
    }
    return arr2;
}

int main(){

    int dim = 5;
    int* arr1 = new int[dim]{1,2,2,4,5};
    int* arr2 = copia(arr1,dim);

    for(int i = 0 ; i < dim ; i++){
        cout<<arr2[i];
    }

    delete[] arr1;
    delete[] arr2;

    
    return 0;
}