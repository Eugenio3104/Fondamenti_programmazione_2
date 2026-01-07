#include <iostream>
using namespace std;

int main(){

    const int row = 3;
    const int col = 3;

    int mat[row][col];

    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            cout<<"Inserisci numero : ";cin>>mat[i][j];
        }
    }

    int sum = 0 ;

    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            sum+=mat[i][j];
        }
    }

    cout<<"Somma della matrice : "<<sum<<endl;



    return 0;
}