#include <iostream>
using namespace std;

int findLastIndex(int arr[] , int n , int target){
    int idx = 0 ;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] == target){
            idx = i;
        }
    }
    return idx;
}

int main(){

    const int dim = 5;
    int target = 5;
    int arr[dim] = {2,5,3,5,8};
    cout<<"il target : "<<target<<" si trova in posizione : "<<findLastIndex(arr,dim,target)<<endl;



    return 0;
}