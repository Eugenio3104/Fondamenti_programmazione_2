#include <iostream>
#include <list>
using namespace std;

class Paziente{
    private:
        string nome;
        string codice;
    public:
        Paziente(){}
        Paziente(string nome , string codice) : nome(nome) , codice(codice) {}

        string getNome() const {return nome;}
        string getCodice() const {return codice;}
        void setNome(string nome){this->nome = nome;}
        void setCodice(string codice){this->codice = codice;}
        
};

void aggiungiPaziente(list<Paziente>& clinica , const Paziente& paziente){
    if(paziente.getCodice() == "ROSSO"){
        clinica.push_front(paziente);
    }else if(paziente.getCodice() == "BIANCO"){
        clinica.push_back(paziente);
    }else if(paziente.getCodice() == "GIALLO"){
        clinica.push_back(paziente);
    }

}

void stampa(const list<Paziente>& clinica){
    for(auto it = clinica.begin() ; it != clinica.end() ; ++it){
        cout<<"Nome : "<<it->getNome()<<" , codice : "<<it->getCodice()<<endl;
    }
}

int main(){

    list<Paziente> clinica;

    Paziente p1("Eugenio","BIANCO");
    Paziente p2("Marco","BIANCO");
    Paziente p3("Francesco","ROSSO");
    Paziente p4("Lorenzo","BIANCO");

    aggiungiPaziente(clinica,p1);
    aggiungiPaziente(clinica,p2);
    aggiungiPaziente(clinica,p3);
    aggiungiPaziente(clinica,p4);

    stampa(clinica);
    
    return 0;
}