#include <iostream>
using namespace std;


int main(){

    int dim = 5;
    int* arr = new int[dim];
    if(arr!=nullptr){
        for(int i = 0 ; i < dim ; i++){
            arr[i] = i;
        }
    }

    delete[] arr;
    arr = nullptr;
    
    return 0;
}