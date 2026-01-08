#include <iostream>
using namespace std;


void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int indiceMinimo = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[indiceMinimo]) {
                indiceMinimo = j;
            }
        }
        if (indiceMinimo != i) {
            int temp = arr[i];
            arr[i] = arr[indiceMinimo];
            arr[indiceMinimo] = temp;
        }
    }
}

int research(int arr[] , int n, int target , int low , int high){
    int idx = 0;
    while(low<=high){
        int mid = low + (high-low)/2;

        if(arr[mid] == target){return mid;}
        if(arr[mid] < target){
            low = mid+1;
        }else{
            high = mid - 1;
        }
    }
    return -1;
}


int main(){

    int arr[5] = {10,20,30,40,50};
    int target = 40;
    selectionSort(arr,5);

    cout<<"target in posizione : "<<research(arr,5,40,0,4);


    return 0;
}