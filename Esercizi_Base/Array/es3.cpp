#include <iostream>
using namespace std;

int main(){

    const int dim = 10;
    int num = 3;
    int cont = 0 ;
    int arr[dim] = {1,2,3,4,5,2,1,4,5,3}; 

    for(int i = 0 ; i < dim ; i++){
        if(arr[i]==num){
            cont++;
        }
    }

    cout<<"Il numero "<<num<<" compare : "<<cont<<" volte"<<endl;


    return 0;
}