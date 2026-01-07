#include <iostream>
using namespace std;

int main(){

    const int row = 3;
    const int col = 5;

    int mat[row][col];

    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            cout<<"Inserisci numero : ";cin>>mat[i][j];
        }
    }

    double sum = 0;
    double avg = 0;

     for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
           sum+=mat[i][j];
        }
        avg = sum / col ; 
        cout<<"somma della riga numero : "<<i<<" , "<<sum<<" , media : "<<avg<<endl;
        sum = 0;
    }



    return 0;
}