#include <iostream>
using namespace std;

int* creaVariabile(){
    int x = 10; //x vive localmente nella funzione 
    return &x; //crashera 
}

int main(){

    int* p = creaVariabile();
    cout<<*p;

    return 0;
}