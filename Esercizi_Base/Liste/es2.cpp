
#include <iostream>
#include <list>
using namespace std;

int main(){

    list<string> cronologia;
    string sito;

    while(cronologia.size()<=10){
        cout<<"Inserisci un sito da visitare : ";cin>>sito;
        cronologia.push_front(sito);
    }
    cronologia.pop_back();
    return 0;
}