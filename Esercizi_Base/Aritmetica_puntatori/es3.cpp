#include <iostream>
using namespace std;

int main(){

    char parola[] = "Pointer";
    char* p = parola ; 
    //dobbiamo arrivare a n 
    cout<<*(p+3);

    return 0;
}