#include <string>
#include <fstream>
#include <iostream>
using namespace std;
class rispetta_i_versi
{
public:

    string getp();
    string gets();        //metodi get per ottenere p e s
    void setp(string c);
    void sets(string c); //metodi set per cambiare i valori di p ed s
    bool confronti(string p,string s);
    bool versi(string p,string s );
    bool controlli(string p,string s); //manca l'implementazione dei controlli

private:
    string p=""; string s=""; //sono la stringa problema e soluzione di una singola riga
};

#ifndef RISPETTAIVERSI_METODI_H
#define RISPETTAIVERSI_METODI_H



#endif //RISPETTAIVERSI_METODI_H
