#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // Necessario per std::reverse

// Funzione per stampare il percorso (Utility)
void stampaPercorso(const std::vector<std::string>& v) {
    std::cout << "Percorso attuale: ";
    for (const auto& tappa : v) {
        std::cout << "[" << tappa << "] ";
    }
    std::cout << "\n";
}

int main() {
    // Inizializzazione del vector
    std::vector<std::string> percorso = {"Roma", "Bologna", "Milano"};
    stampaPercorso(percorso);

    std::string nuovaTappa = "Firenze";
    int posizione = 1; // Vogliamo inserire Firenze in posizione 1 (tra Roma e Bologna)

    // Controllo di sicurezza: l'indice deve essere tra 0 e la dimensione del vector
    if (posizione >= 0 && posizione <= percorso.size()) {
        
        // Uso della firma: iterator insert(const_iterator pos, const T& value)
        // Calcoliamo l'iteratore aggiungendo l'indice a begin()
        percorso.insert(percorso.begin() + posizione, nuovaTappa);
        
        std::cout << "\nDopo l'inserimento di " << nuovaTappa << " al posto " << posizione << ":\n";
        stampaPercorso(percorso);
    } else {
        std::cout << "Errore: Indice fuori dai limiti!\n";
    }

    // Uso della firma: void reverse(BidirectionalIterator first, BidirectionalIterator last)
    std::reverse(percorso.begin(), percorso.end());

    std::cout << "\nPercorso invertito per il ritorno:\n";
    stampaPercorso(percorso);

    return 0;
}