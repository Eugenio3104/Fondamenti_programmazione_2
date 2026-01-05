#include <iostream>
using namespace std;

void stampaSeValido(int* ptr){
    if(ptr!=nullptr){
        cout<<*ptr;
    }else{
        cout<<"Puntatore non valido"<<endl;
    }
}

int main(){
    int x = 5;
    int* ptr = nullptr;
    stampaSeValido(ptr);

    int* ptr2 = &x;
    stampaSeValido(ptr2);

}