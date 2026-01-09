#include <iostream>
#include <vector>
using namespace std;

void aggiungiCitta(vector<pair<string,double>>& distanze ,const string& citta ,const double& distanza){
    distanze.push_back({citta,distanza});
}

pair<string,double> cittaPiuDistante(const vector<pair<string,double>>& distanze){
    double maxDistanza = distanze[0].second;
    string cittaMaxDistanza = distanze[0].first;
    for(int i = 0 ; i < distanze.size() ; i++){
        if(distanze[i].second > maxDistanza){
            maxDistanza = distanze[i].second;
            cittaMaxDistanza = distanze[i].first;
        }
    }

    return {cittaMaxDistanza,maxDistanza};
}

int main(){

    vector<pair<string,double>> distanze;

    aggiungiCitta(distanze,"Milano",456.32);
    aggiungiCitta(distanze,"Firenze",206.78);
    aggiungiCitta(distanze,"Cosenza",251.92);
    aggiungiCitta(distanze,"Taranto",529.12);


    cout<<"La citta piu distante da roma : "<<cittaPiuDistante(distanze).first<<" , con una distanza di : "<<cittaPiuDistante(distanze).second;
    


    return 0;
}