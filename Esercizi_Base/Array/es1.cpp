#include <iostream>
using namespace std;

int main(){

    const int dim = 10 ;

    int arr[dim] = {1,2,3,4,5,6,7,8,9,10};

    cout<<"array normale : "<<endl;
    for(int i = 0 ; i < dim ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"array al contrario : "<<endl;
    for(int i = dim - 1 ; i >= 0 ; i--){
        cout<<arr[i]<<" ";
    }



    return 0;
}