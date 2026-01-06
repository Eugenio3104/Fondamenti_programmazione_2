#include <iostream>
using namespace std;


int main(){

    int a = 10 ; //a contiene il valore 10 
    int b = 20 ; //b contiene il valore 20
    int* ptr = &a; //ptr punta l'indirizzo di memoria di a 
    ptr = &b; //ptr cambia indirizzo di memoria in quello di b
    *ptr = 50; //ptr cambia il valore 

    //a stampera 10 
    //b non stampa 20 ma 50
    cout<<"a : "<<a<<", b : "<<b<<endl;
    return 0;
}