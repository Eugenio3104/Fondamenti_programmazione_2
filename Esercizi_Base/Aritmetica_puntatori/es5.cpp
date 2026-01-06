#include <iostream>
using namespace std;

int main(){

  int arr[3] = {1, 2, 3};
    for (int* p = arr; p < (arr + 3); ++p) {
        std::cout <<*p<< " ";
    }

    return 0;
}