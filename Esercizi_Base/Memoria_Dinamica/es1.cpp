#include <iostream>
using namespace std;


int main(){

    int n ;
    cout<<"Inserisci grandezza : ";cin>>n;
    int* arr = new int[n];

    

    for(int i = 0 ; i < n ; i++){
        if(i%2==0){
            arr[i] = i;
        }
    }

    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }

    delete[] arr;

    return 0;
}