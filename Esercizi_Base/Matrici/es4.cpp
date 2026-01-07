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

    bool found = false;
    int idx = 0;
    int jdx = 0;

    int num ;
    cout<<"Inserisci numero da cercare : ";cin>>num;

    //al posto di usare break , se found diventa true si fermano tutti e 2 i cicli , è ottimizzato cosi 
    for(int i = 0 ; i < row && !found; i++){
        for(int j = 0 ; j < col && !found ; j++){
            if(mat[i][j]==num){
                found = true;
                idx = i;
                jdx = j;
            }
        }
    }

    if(found){
        cout<<"Numero : "<<num<<" trovato in posizione : "<<idx<<","<<jdx<<endl;
    }else{
        cout<<"Non trovato";
    }



    return 0;
}