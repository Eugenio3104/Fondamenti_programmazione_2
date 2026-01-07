#include <iostream>
using namespace std;

int countChar(string s , char target){
    if(s.empty()){
        return 0;
    }

    if(s[0]==target){
        return 1 + countChar(s.substr(1),target);
    }else{
        return 0 + countChar(s.substr(1),target);
    }
}

int main(){

    string s = "anna";
    char t = 'a';

    cout<<countChar(s,t);

    return 0;
}