#include <iostream>
using namespace std;

int main(){
    
    const int row = 4;
    const int col = 4;

    int mat[row][col];

    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            cout<<"Inserisci numero : ";cin>>mat[i][j];
        }
    }

    int idxMin = 0;
    int jdxMin = 0;
    int idxMax = 0;
    int jdxMax = 0;

    int min = mat[0][0];
    int max = mat[0][0];

    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
           if(mat[i][j]>max){
                max = mat[i][j];
                idxMax = i;
                jdxMax = j;
           }
           if(mat[i][j]<min){
                min = mat[i][j];
                idxMin = i;
                jdxMin = j;
           }
        }
    }

    cout<<"Il minimo : "<<min<<" in posizione : "<<idxMin<<" , "<<jdxMin<<endl;
    cout<<"Il massimo : "<<max<<" in posizione : "<<idxMax<<" , "<<jdxMax<<endl;



    return 0;
}