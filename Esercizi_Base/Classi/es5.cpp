#include <iostream>
using namespace std;


class MetodoPagamento{
    protected:
        double importo;
    public : 

    MetodoPagamento(double importo) : importo(importo){}
    MetodoPagamento() = default;
    virtual ~MetodoPagamento(){}
    
    double getImporto() const {return importo;}
    void setImporto(double importo){this->importo = importo;}

    virtual void paga(double importo) = 0;
};

class CartaDiCredito : public MetodoPagamento{
    public:

    CartaDiCredito() : MetodoPagamento(importo) {}
        
    void paga(double importo) override {
        cout<<"Importo "<<importo<<" , pagato con carta di credito"<<endl;
    }

};

class PayPal : public MetodoPagamento{
    public:

    PayPal() : MetodoPagamento(importo) {}
        
    void paga(double importo) override {
        cout<<"Importo "<<importo<<" , pagato con paypal"<<endl;
    }
};

int main(){
    double importo1 = 40.30;
    double importo2 = 20.50;
    MetodoPagamento* mp1 = new CartaDiCredito();
    MetodoPagamento* mp2 = new PayPal();
    mp1->paga(importo1);
    mp2->paga(importo2);

    delete mp1;
    delete mp2;

    return 0;
}