#include <iostream>
using namespace std;

int main(){

    double misure[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double* inizio = &misure[0];
    double* fine = &misure[4];
    auto distanza = fine - inizio; // Quanto vale? 

    //la sottrazione tra 2 puntatori non è la sottrazione dei suoi valori ma della distanza che ce tra uno e l'altro 
    //la risposta è 4 

    return 0;
}