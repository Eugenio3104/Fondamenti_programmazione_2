#include <iostream>
using namespace std;

int main(){

    const int row = 3;
    const int col = 3;

    int mat[row][col];

    int mat2[row][col];
    

    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            cout<<"Inserisci numero : ";cin>>mat[i][j];
        }
    }

    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            mat2[i][j] = mat[i][j]*2;
        }
    }

    cout<<"matrice 1 : "<<endl;
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            cout<<mat[i][j];
        }
        cout<<endl;
    }

    cout<<"matrice 2 : "<<endl;
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            cout<<mat2[i][j];
        }
        cout<<endl;
    }



    return 0;
}