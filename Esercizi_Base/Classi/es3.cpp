#include <iostream>
using namespace std;

class Frazione{
    private:
        int numeratore;
        int denominatore;
    public:

    Frazione(int numeratore , int denominatore) : numeratore(numeratore) , denominatore(denominatore){}
    Frazione(){}
    Frazione(const Frazione& f) : numeratore(f.numeratore) , denominatore(f.denominatore){}

    int getNumeratore() const {return numeratore;}
    int getDenominatore() const {return denominatore;}

    void setNumeratore(int numeratore){this->numeratore = numeratore;}
    void setDenominatore(int denominatore){this->denominatore = denominatore;}

    Frazione operator*(const Frazione& f){
        int num = this->numeratore*f.numeratore;
        int den = this->denominatore*f.denominatore;
        return Frazione(num,den);
    }

    friend ostream& operator<<(ostream& os ,const Frazione& f){
        os<<f.numeratore<<"/"<<f.denominatore;
        return os;
    }
};

int main(){

    Frazione f1(1,8);
    Frazione f2(2,3);
    Frazione moltiplicazione = f1*f2;
    cout<<"la moltiplicazione tra : "<<f1<<" e la frazione "<<f2<<" : "<<moltiplicazione<<endl;


    return 0;
}