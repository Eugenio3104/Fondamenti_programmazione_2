#include <iostream>
#include <vector>
using namespace std;

vector<int> rimuoviPari(vector<int>& vec){
    for(auto it = vec.begin() ; it != vec.end();){
        if(*it%2==0){
            vec.erase(it);
        }else{
            ++it;
        }
    }
    return vec;
}

void stampa(vector<int> v) {
    for(int i = 0 ; i < v.size() ; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){

    vector<int> v = {12,32,5,14,18};
    cout<<"vettore originale : "<<endl;
    stampa(v);
    cout<<"vettore senza pari : "<<endl;
    rimuoviPari(v);
    stampa(v);
    

    return 0;
}