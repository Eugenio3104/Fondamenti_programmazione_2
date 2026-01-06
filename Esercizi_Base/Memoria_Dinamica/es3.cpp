#include <iostream>
using namespace std;


int main(){

    int* arr = new int[5]{10,20,30,40,50};
    for(int i = 0 ; i < 5 ; i++){
        cout<<arr[i]<<" ";
    }

    delete[] arr;
    
    return 0;
}