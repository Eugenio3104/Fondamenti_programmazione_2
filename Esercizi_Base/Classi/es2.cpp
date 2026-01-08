#include <iostream>
using namespace std;

class Termometro{
    private : 
        double temperatura; //intesa temperatura celsius ;
    public: 

        Termometro(){temperatura = 0;}
        Termometro(double temperatura) : temperatura(temperatura){}
        Termometro(const Termometro& t) : temperatura(t.temperatura){}

        double getTemperatura() const {return temperatura;}

        void setTemperatura(double temperatura){this->temperatura = temperatura;}

        double celsiusTokelvin() const {
            return temperatura + 273.15;
        }

        double celsiusTofarhenait() const {
            return temperatura*1.8 + 32;
        }

        void stampaReport( Termometro t) const {
            cout<<"Temperatura celsius : "<<t.temperatura<<endl;
            cout<<"Temperatura kelvin : "<<t.celsiusTokelvin()<<endl;
            cout<<"Temperatura farhenait : "<<t.celsiusTofarhenait()<<endl;
        }
};

int main(){

    Termometro t ;
    t.setTemperatura(20);
    t.celsiusTofarhenait();
    t.celsiusTokelvin();
    t.stampaReport(t);
    

    return 0;
}