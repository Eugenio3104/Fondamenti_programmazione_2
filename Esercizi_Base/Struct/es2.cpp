#include <iostream>
using namespace std;

struct Punto{
    int x , y;
};

struct Cerchio{
    Punto centro;
    int raggio;
};

double areaCerchio(const Cerchio& c){
    return 3.14*c.raggio*c.raggio;
}



int main(){

    Cerchio c = {{1,2},3};

    return 0;
}