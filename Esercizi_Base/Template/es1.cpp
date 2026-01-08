#include <iostream>
using namespace std;

template <typename T>
T trovaMassimo(T arr[] ,const int dim){
    T max = arr[0];
    for(int i = 0 ; i < dim ; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}

int main(){

    int arrInteri[5] = {1,3,56,7,2};
    double arrDouble[5] = {34.0,21.80,4.30,54.60,27.3};

    cout<<"Massimo degli interi : "<<trovaMassimo(arrInteri,5)<<endl;
    cout<<"Massimo dei double : "<<trovaMassimo(arrDouble,5)<<endl;


    return 0;
}