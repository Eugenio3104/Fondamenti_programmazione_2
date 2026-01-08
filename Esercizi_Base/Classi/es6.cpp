#include <iostream>
using namespace std;

class Dipendente{
    protected:
        string nome;
        double salarioBase;
    public : 

    Dipendente() = default;
    Dipendente(string nome , double salarioBase) : nome(nome) , salarioBase(salarioBase){}
    Dipendente(const Dipendente& d) : nome(d.nome) , salarioBase(d.salarioBase){}
    virtual ~Dipendente(){}

    string getNome() const {return nome;}
    double getSalario() const {return salarioBase;}

    void setNome(string nome){this->nome = nome;}
    void setSalario(double salarioBase){this->salarioBase = salarioBase;}

    virtual double calcolaStipendio() const {
        return salarioBase;
    }

    virtual void stampa() const {
        cout<<"Nome : "<<nome<<" salario : "<<salarioBase<<endl;
    }
};

class Manager : public Dipendente{
    private:
        double bonus;
        string ruolo;
    public:

    Manager(double bonus , string nome , double salarioBase , string ruolo) : bonus(bonus) , ruolo(ruolo) , Dipendente(nome,salarioBase) {}

    double getBonus() const {return bonus;}
    void setBonus(double bonus){this->bonus = bonus;}
    string getRuolo() const {return ruolo;}
    void setRuolo(string ruolo){this->ruolo = ruolo;}

    double calcolaStipendio() const override{
        return salarioBase + bonus;
    }

    void stampa() const override {
        Dipendente::stampa();
        cout<<"ruolo : "<<ruolo;
    }

};



int main(){

    Dipendente d1("Eugenio",1000);
    Dipendente* d2 = new Manager(200,"Marco",1300,"ProjectManager");

    d1.stampa();
    d2->stampa();

    delete d2;



    return 0;
}