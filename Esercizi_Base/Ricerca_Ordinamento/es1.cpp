#include <iostream>
using namespace std; 


void bubbleSort(int arr[] , int n){
    bool scambiato ;
    for(int i = 0 ; i < n  ; i++){
        scambiato = false;
        for(int j = 0 ; j < n - i -1 ; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                scambiato = true;
            }
        }
        if(!scambiato){
            break;
        }
    }
}

void stampaArray(int arr[] , int n ){
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    const int n = 7;
    int arr[n] = {64,34,25,12,22,11,90};
    cout<<"Array originale : "<<endl;
    stampaArray(arr,n);
    bubbleSort(arr,n);
    cout<<"Array ordinato : "<<endl;
    stampaArray(arr,n);
    

    return 0;
}