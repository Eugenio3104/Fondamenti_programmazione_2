#include <iostream>
using namespace std;

template <typename T>
class Contenitore{
    private:
        T elem;
    public :

    Contenitore(T elem) : elem(elem) {}

    T getElem() const {return elem;}
    void setElem(T elem){this->elem = elem;}

    T sostituisci(T nuovoValore){
        elem = nuovoValore;
        return elem;
    }

};

int main(){

    Contenitore<char> c1('a');
    cout<<c1.getElem()<<endl;
    cout<<"cambio elemento in b "<<endl;
    c1.sostituisci('b');
    cout<<c1.getElem()<<endl;

    
    Contenitore<float> c2(12.34);
    cout<<c2.getElem()<<endl;
    cout<<"cambio elemento in 11.45 "<<endl;
    c2.sostituisci(11.45);
    cout<<c2.getElem()<<endl;




    return 0;
}