#include <iostream>
#include <vector>
using namespace std;

class Prodotto{
    protected : 
        string nome;
        double prezzo;
    public:

        Prodotto(){}
        Prodotto(string nome , double prezzo) : nome(nome) , prezzo(prezzo) {}
        virtual ~Prodotto(){}

        string getNome() const {return nome;}
        void setNome(string nome){this->nome = nome;}

        double getPrezzo() const {return prezzo;}
        void setPrezzo(double prezzo){this->prezzo = prezzo;}
        
        virtual void stampa() const {
            cout<<"Nome : "<<nome<<" , prezzo : "<<prezzo;
        }
};

class Alimentare : public Prodotto{
    private:
        string scadenza;
    public:

        Alimentare(string nome , double prezzo , string scadenza) : scadenza(scadenza) , Prodotto(nome,prezzo) {}

        string getScadenza() const {return scadenza;}
        void setScadenza(string scadenza){this->scadenza = scadenza;}

        void stampa() const override {
            Prodotto::stampa();
            cout<<" scadenza : "<<scadenza<<endl;
        }
};

class Elettronico : public Prodotto{
    private:
        int garanzia;
    public:

     Elettronico(string nome , double prezzo , int garanzia) : garanzia(garanzia) , Prodotto(nome,prezzo) {}

        int getGaranzia() const {return garanzia;}
        void setGaranzia(int garanzia){this->garanzia = garanzia;}

        void stampa() const override {
            Prodotto::stampa();
            cout<<" garanzia : "<<garanzia<<endl;
        }
};

int main(){

    Alimentare* a = new Alimentare("Pane",1.50,"09/01/2026");
    Elettronico* e = new Elettronico("TV",600,12);
    vector<Prodotto*> v;
    v.push_back(a);
    v.push_back(e); 
    for(int i = 0 ; i < 2 ; i++){
        v[i]->stampa();
        delete v[i];
    }


    return 0;
}