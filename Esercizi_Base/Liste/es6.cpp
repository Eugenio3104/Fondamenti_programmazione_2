#include <iostream>
#include <list>
using namespace std;

class Animale{
    public:
    Animale(){}

    virtual ~Animale(){}
    virtual void verso() = 0;
};

class Cane : public Animale{
    public :

    Cane(){}

    void verso() override{
        cout<<"BAU"<<endl;
    }
};


class Gatto : public Animale{
    public:

    Gatto(){}

    void verso() override{
        cout<<"MIAO"<<endl;
    }
};


int main(){
    Cane* c1 = new Cane();
    Cane* c2 = new Cane();
    Gatto* g1 = new Gatto();
    list<Animale*> animali;

    animali.push_front(c1);
    animali.push_back(g1);
    animali.push_back(c2);

    for(auto it = animali.begin() ; it != animali.end() ; ++it){
        (*it)->verso(); 
        delete *it;
    }



    
    return 0;
}