#include <iostream>
using namespace std;

struct Configurazione {
    // Sintassi: tipo nome : numero_di_bit;
    unsigned int modalitaNotte     : 1; // Può essere solo 0 o 1
    unsigned int connesso          : 1; // Può essere solo 0 o 1
    unsigned int livelloLuminosita : 3; // 3 bit permettono valori da 0 a 7 (2^3 - 1)
};

struct ConfigurazioneStandard {
    bool modalitaNotte;      // 1 byte
    bool connesso;           // 1 byte
    int livelloLuminosita;   // 4 byte
};

int main() {
    Configurazione conf;
    conf.modalitaNotte = 1;
    conf.connesso = 0;
    conf.livelloLuminosita = 5; // Massimo 7, se metti 8 va in overflow

    cout << "--- ANALISI MEMORIA ---" << endl;
    cout << "Dimensione Configurazione (Bit-Fields): " << sizeof(Configurazione) << " byte" << endl;
    cout << "Dimensione Configurazione Standard: " << sizeof(ConfigurazioneStandard) << " byte" << endl;

    return 0;
}