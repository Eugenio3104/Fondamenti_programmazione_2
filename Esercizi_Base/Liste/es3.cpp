#include <iostream>
#include <list>
using namespace std;

void aggiungiFrase(list<string>& doc , const string& frase){
    doc.push_back(frase);
}

void stampa(const list<string>& doc){
    for(auto it = doc.begin() ; it != doc.end() ; ++it){
        cout<<*it<<endl;
    }
}

int main(){

    list<string> doc;
    string frase;
    aggiungiFrase(doc,"ciao eugenio come stai ? ");
    aggiungiFrase(doc,"tutto bene tu ?");
    aggiungiFrase(doc,"io tutto bene .");
    cout<<"Conversazione normale : "<<endl;
    stampa(doc);
    cout<<"__________"<<endl;
    if(doc.size()<1){
        cout<<"documento vuoto";
    }else{
        auto it = doc.begin();
        int pos ;
        cout<<"Inserisci in quale riga mettere  la nuova riga : ";cin>>pos;
        if(pos>0 && pos<=doc.size()){
            cout<<"Conversazione con presentazione "<<endl;
            advance(it,pos);
            cout<<"Inserisci la frase da mettere : ";cin>>frase;
            doc.insert(it,frase);

        }else{
            cout<<"Impossibile inserire la riga"<<endl;
        }
    }
    cout<<"____________"<<endl;
    stampa(doc);

    
    return 0;
}