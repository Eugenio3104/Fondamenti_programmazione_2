#include <iostream>
using namespace std;

pair<int,bool> dividi(int n , int m){
    if(m==0){
        return {n,false};
    }else{
        return {n/m , true};
    }
}

int main(){

    int n = 5;
    int m = 0;
    if(dividi(n,m).second){
        cout<<dividi(n,m).first;
    }else{
        cout<<"Divisore 0 impossibile la divisione";
    }

    return 0;
}