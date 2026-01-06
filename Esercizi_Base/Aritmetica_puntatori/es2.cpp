#include <iostream>
using namespace std;

int main(){

    int numeri[] = {10, 20, 30};
    int* p = numeri;
    std::cout << *(p + 1) << std::endl; // stampa 20 *(ptr + num) in questa maniera mi sposto 
    std::cout << *p + 1 << std::endl;   // stampa 11 *ptr + num in questa maniera aggiungo num al valore di ptr

    return 0;
}