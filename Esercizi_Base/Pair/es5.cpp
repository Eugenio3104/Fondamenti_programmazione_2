#include <iostream>
using namespace std;

class Persona{
    private:
        string nome;
        int eta;
    public : 

        Persona(){}
        Persona(string nome , int eta) : nome(nome) , eta(eta){}

        string getNome() const {return nome;}
        void setNome(string nome){this->nome = nome;}

        int getEta() const {return eta;}
        void setEta(int eta){this->eta = eta;}

};

Persona piuGrande(const pair<Persona,Persona>& sposi){
    if(sposi.first.getEta() > sposi.second.getEta()){
        return sposi.first;
    }else{
        return sposi.second;
    }
}

int main(){

    pair<Persona,Persona> sposi = {{"Eugenio",30},{"Nessuno",44}};


    cout<<"il/la piu grande : "<<piuGrande(sposi).getNome()<<" con un eta di : "<<piuGrande(sposi).getEta();


    return 0;
}