#include <iostream>
using namespace std;


int main(){

    int n ;
    cout<<"Inserisci grandezza : ";cin>>n;
    double* arr = new double[n]; 
    double somma = 0 ;

    for(int i = 0 ; i < n ; i++){
        cout<<"Inserisci numero : ";cin>>arr[i];
    }

    for(int i = 0 ; i < n ; i++){
        somma+=arr[i];
    }

    double media = somma/n;
    cout<<"Media : "<<media<<endl;

    delete[] arr;


    

    
    return 0;
}