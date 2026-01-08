#include <iostream>
#include <string>

using namespace std;

void insertionSort(string arr[], int n) {
    for (int i = 1; i < n; i++) {
        string chiave = arr[i]; // L'elemento da inserire
        int j = i - 1;

        // Sposta gli elementi che sono "maggiori" della chiave
        // verso destra di una posizione
        while (j >= 0 && arr[j] > chiave) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = chiave; // Inserimento della chiave nella posizione corretta
    }
}

int main() {
    string citta[] = {"Venezia", "Roma", "Napoli", "Milano", "Bologna"};
    int n = 5;

    insertionSort(citta, n);

    cout << "Citta ordinate alfabeticamente:" << endl;
    for (int i = 0; i < n; i++) cout << citta[i] << " ";
    
    return 0;
}