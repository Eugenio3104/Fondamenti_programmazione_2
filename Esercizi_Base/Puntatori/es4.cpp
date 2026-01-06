#include <iostream>
using namespace std;

int* azzera(int* ptr){
    if(ptr==nullptr){
        return nullptr;
    }else{
        *ptr = 0;
        return ptr;
    }
}

int main(){

    int x = 5;
    cout<<"il valore di x : "<<x<<endl;
    int* ptr = &x;
    cout<<"il valore di x dopo : "<<*azzera(ptr)<<endl;

    return 0;

}