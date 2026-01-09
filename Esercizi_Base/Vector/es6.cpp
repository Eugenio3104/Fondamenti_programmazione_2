#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void aggiungi(vector<string>& v , const string parola){
    v.push_back(parola);
}

void ordina(vector<string>& v){
    sort(v.begin() , v.end());
}

string ricerca(const vector<string>& v , const string parola){
    bool trovato = false;
    string p = "";
    for(int i = 0 ; i < v.size() && !trovato; i++){
        if(v[i] == parola){
            p = parola;
            trovato = true;
        }
    }
    if(trovato){
        return p;
    }else{
        cout<<"Non trovato"<<endl;
    }
}

int main(){

    vector<string> v;

    int n ;
    string parola;

    cout<<"Inserisci una scelta : ";cin>>n;
while(n!=0){
    switch (n)
    {
    case 1:
        cout<<"aggiungi una parola : ";cin>>parola;
        aggiungi(v,parola);
        break;
    case 2:
        ordina(v);
        break;
    case 3 : 
        cout<<"cerca una parola : ";cin>>parola;
        ricerca(v,parola);
        break;
    }
    cout<<"Inserisci una scelta : ";cin>>n;

}

    return 0;
}