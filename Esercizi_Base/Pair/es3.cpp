#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void gara(vector<pair<int,string>>& piloti){
    sort(piloti.begin() , piloti.end());
}

void stampa(vector<pair<int,string>> piloti){
    for(int i = 0 ; i < piloti.size() ; i++){
        cout<<"Posizione : "<<i<<endl;
        cout<<"Tempo : "<<piloti[i].first<<endl;
        cout<<"Nome : "<<piloti[i].second<<endl;
        cout<<"___________"<<endl;
    }
}

int main(){

    vector<pair<int,string>> piloti;
    piloti.push_back({3,"Eugenio"});
    piloti.push_back({5,"Marco"});
    piloti.push_back({2,"Lorenzo"});
    piloti.push_back({7,"Mario"});
    piloti.push_back({4,"Francesco"});
    gara(piloti);
    stampa(piloti);



    return 0;
}