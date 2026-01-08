#include <iostream>
using namespace std;

class Veicolo{
    public:
    virtual ~Veicolo(){}
    virtual void accendi() = 0;
};

class Auto : public Veicolo{
    public:
    
    void accendi() override {
        cout<<"Auto accessa"<<endl;
    }
};

class Moto : public Veicolo{
    public : 
    void accendi() override {
        cout<<"Moto accessa"<<endl;
    }
};

int main(){

    Veicolo* v[2] ;

    v[0] = new Auto();
    v[1] = new Moto();
    for(int i = 0 ; i < 2 ; i++){
        v[i]->accendi();
        delete v[i];
    }

    return 0;
}