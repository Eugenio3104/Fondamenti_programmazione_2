#include <iostream>
#include <vector>
using namespace std;

class Studente{
    private:
        string nome;
        vector<int> voti;
    public:

    Studente(){}
    Studente(string nome , vector<int> voti) : nome(nome) , voti(voti) {}
    string getNome() const {return nome;}
    void setNome(string nome){this->nome = nome;}

    int getVoto(int idx) const {return voti[idx];}
    void setVoto(int idx , int voto){
        if(idx>=0 && idx<voti.size()){
            this->voti[idx] = voto;
        }
    }

    double getAverage(){
        double sum = 0 ;
        double avg = 0 ;
        for(int i = 0 ; i < voti.size() ; i++){
            sum+=voti[i];
        }
        avg = sum / voti.size();
        return avg;
    }
};

int main(){

    Studente s("Eugenio",{19,21,18,19,20});
    cout<<s.getAverage()<<endl;

    return 0;
}