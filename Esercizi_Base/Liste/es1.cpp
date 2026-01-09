#include <iostream>
#include <list>
using namespace std;

class Canzone{
    private:
        string titolo;
        double durata;
    public:

    Canzone(){}
    Canzone(string titolo , double durata) : titolo(titolo) , durata(durata){}

    string getTitolo() const {return titolo;}
    void setTitolo(string titolo){this->titolo = titolo;}

    double getDurata() const {return durata;}
    void setDurata(double durata){this->durata = durata;}
};

void aggiungiCanzone(list<Canzone>& playlist,const Canzone& c){
    playlist.push_back(c);
}

void rimuoviCanzone(list<Canzone>& playlist){
    playlist.pop_front();
}

void stampa(const list<Canzone>& playlist){
    for(auto it = playlist.begin() ; it != playlist.end() ; ++it){
        cout<<"Canzone : "<<it->getTitolo()<<" , "<<it->getDurata()<<endl;
    }
}

int main(){

    list<Canzone> playlist;
    Canzone c1("Dark red",3.20);
    Canzone c2("My kind of woman",2.50);
    Canzone c3("505",4.50);
    aggiungiCanzone(playlist,c1);
    aggiungiCanzone(playlist,c2);
    aggiungiCanzone(playlist,c3);
    cout<<"Playlist originale : "<<endl;
    stampa(playlist);
    rimuoviCanzone(playlist);
    cout<<"Playlist dopo aver rimosso una canzone : "<<endl;
    stampa(playlist);



    return 0;
}