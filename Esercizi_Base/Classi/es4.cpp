#include <iostream>
using namespace std;

class Orario{
    private :
        int minuti;
        int secondi;
        int ore;
    public:

    Orario(){
        minuti = 0;
        secondi = 0;
        ore = 0;
    }
    Orario(int ore , int minuti , int secondi) : ore(ore) , minuti(minuti) , secondi(secondi){}
    Orario(const Orario& o) : ore(o.ore) , minuti(o.minuti) , secondi(o.secondi){}

    int getOre() const {return ore;}
    int getMinuti() const {return minuti;}
    int getSecondi() const {return secondi;}

    void setOre(int ore){this->ore = ore;}
    void setMinuti(int minuti){this->minuti = minuti;}
    void setSecondi(int secondi){this->secondi = secondi;}

        
    bool operator==(const Orario& o){
        return this->secondi == o.secondi && this->minuti == o.minuti && this->ore == o.ore;
    }

    bool operator<(const Orario& o){
        
        if(this->ore < o.ore){
            return true;
        }else if(this->ore == o.ore && this->minuti < o.minuti){
            return true;
        }else if(this->ore == o.ore && this->minuti < o.minuti && this->secondi < o.secondi){
            return true;
        }else{
            return false;
        }
    }
};


int main(){

    Orario o1(11,22,0);
    Orario o2(11,45,0);

    if(o1 == o2){
        cout<<"Orari uguali"<<endl;
    }else{
        cout<<"Orari diversi"<<endl;
    }

    if(o1 < o2){
        cout<<"L'orario 1 viene prima del secondo"<<endl;
    }else{
        cout<<"L'orario 2 viene prima del primo"<<endl;
    }
    

    return 0;
}