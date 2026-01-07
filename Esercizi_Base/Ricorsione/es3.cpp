#include <iostream>
using namespace std;

int findMax(int arr[] , int n ){
    //caso base : 
    if(n == 1){
        return arr[0];
    }
    //chiamata ricorsiva 
    //chiediamo il massimo della parte precedente dell'array
    int max = findMax(arr,n-1);
    cout<<max<<" ";

    //confrontiamo l'elemento attuale con il precedente 
    if(max < arr[n-1]){
        return arr[n-1];
    }else{
        return max;
    }
}

int main(){

    int arr[5] = {1,4,222,1,54};
    cout<<findMax(arr,5);

    return 0;
}