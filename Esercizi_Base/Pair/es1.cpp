#include <iostream>
#include <vector>
using namespace std;

string traduzioneItalianoInglese(const vector<pair<string,string>> dizionario , const string parola){
    for(int i = 0 ; i < dizionario.size() ; i++){
        if(dizionario[i].first == parola){
            return dizionario[i].second;
        }
    }
    return "Nessuna parola trovata";
}

int main(){

    vector<pair<string,string>> dizionario; 
    dizionario.push_back({"Cane","Dog"});
    dizionario.push_back({"Penna","Pen"});
    dizionario.push_back({"Finestra","Window"});
    dizionario.push_back({"Luce","Light"});
    dizionario.push_back({"Gatto","Cat"});
    dizionario.push_back({"Rosso","Red"});

    string parola;
    cout<<"Inserisci una parola da cercare : ";cin>>parola;
    
    cout<<traduzioneItalianoInglese(dizionario,parola);
    

    return 0;
}