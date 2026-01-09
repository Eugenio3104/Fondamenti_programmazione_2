#include <iostream>
using namespace std;

class Robot{
    private:
        pair<int,int> coordinateX; // per le coordinate sull'asse x dove ci sta ovest e est
        pair<int,int> coordinateY; // per le coordinate sull'asse y dove ci sta nord e sud
    public:

    Robot(){
        coordinateX = {0,0};
        coordinateY = {0,0};
    }

    Robot(pair<int,int> coordinateX , pair<int,int> coordinateY) : coordinateX(coordinateX) , coordinateY(coordinateY) {}

    pair<int,int> getCoordinateX() const {return coordinateX;}
    pair<int,int> getCoordinateY() const {return coordinateY;}

    void setCoordinateX(pair<int,int> coordinateX){this->coordinateX = coordinateX;}
    void setCoordinateY(pair<int,int> coordinateY){this->coordinateY = coordinateY;}

    void muoviti(string direzione){
        if(direzione == "Nord"){
            coordinateY.first+=1;
            coordinateY.second-=1;
        }else if(direzione == "Ovest"){
            coordinateX.first+=1;
            coordinateX.second-=1;
        }else if(direzione == "Est"){
            coordinateX.first-=1;
            coordinateX.second+=1;
        }else if(direzione == "Sud"){
            coordinateY.first-=1;
            coordinateY.second+=1;
        }else{
            cout<<"Direzione non valida";
        }
    }

    void stampa() const {
        cout<<"Nord : "<<coordinateY.first<<endl;
        cout<<"Surd : "<<coordinateY.second<<endl;
        cout<<"Ovest : "<<coordinateX.first<<endl;
        cout<<"Est : "<<coordinateX.second<<endl;
    }

};

int main(){

    Robot r;
    cout<<"Posizione iniziale : "<<endl;
    r.stampa();
    cout<<"_______"<<endl;

    r.muoviti("Nord");
    r.stampa();
    cout<<"_______"<<endl;
    r.muoviti("Ovest");
    r.stampa();
    cout<<"_______"<<endl;
    r.muoviti("Sud");
    r.stampa();
    cout<<"_______"<<endl;
    r.muoviti("Est");
    r.stampa();
    cout<<"_______"<<endl;
    cout<<"Posizione finale : "<<endl;
    r.stampa();

    return 0;
}