#include "metodi.h"

int main() {

string p1="problema.txt";
string s1="soluzione.txt";
string e1="esito.txt";
//andiamo ad aprire i nostri 3 file e nel file problema.txt scriviamo dei problemi
rispetta_i_versi oggetto;
    fstream p2,s2,e2; //creo i due oggetti che mi serviranno per creare il file del problema e della soluzione
    p2.open(p1.c_str(),ios::in | ios::out | ios::trunc);
    s2.open(s1.c_str(),ios::in | ios::out | ios::trunc);
    e2.open(e1.c_str(),ios::in | ios::out);
    //vado a scrivere nel file del problema i problemi
    p2<<"<><><"<<endl<<"<<<>>"<<endl<<"<><>>"<<endl;
    //Ora diamo la possibilità all'utente di risolvere i problemi
    int i=0;
    int lunghezza=0;
    p2.seekg(lunghezza);
    string u,n,o;
    u="1<2<3<4<5<6<7<8<9<1000000000<11>8<13<14<15<16<17";
    n="1>6<4<4";
    o="1<2<2<2";
    string c;
    c="<<<<<<<<<<<<<<<<";
    //bool c;
     //cout<<c.length()+1;
    cout<<u.length()<<endl;
    cout<<c.length()<<endl;
    cout<<(c.length()+1)*2<<endl;
    if(oggetto.confronti(c,u)==false){cout<<"hai sbagliato qualcosa 0";}
    if(oggetto.versi(c,u)==false){cout<<"hai sbagliato qualcosa 1";}
    if(oggetto.controlli(c,u)== false){cout<<"hai sbagliato qualcosa 2";}
    //cout<<oggetto.verifica_massimo(n,"><<")<<endl;
    //cout<<oggetto.verifica_massimo(o,"<<<")<<endl;




    //In questo ciclo while andiamo a posizionarci su ogni riga del problema e andiamo a chiedere all utente una soluzione
    //successivamente facciamo dei controlli
    /*
    while(!p2.eof()) //opera fino alla fine del file
    {
        bool esito;
        string soluzione; //la soluzione data dall'utente
        i++;
        string problema_corr=oggetto.getp(); //Va a prendere il problema corrente
        p2.seekg(lunghezza); //ci posizioniamo alla posizione del problema corrente
        getline(p2,problema_corr); //all'interno del problema corrente ci sarà la riga corrente
        cout<<problema_corr<<endl; //il problema corrente viene stampato
        cin>>soluzione; //viene chiesta la soluzione all'utente
        s2<<soluzione<<endl; //la soluzione viene stampata nel file soluzione.txt
        esito=oggetto.verifica_massimo(soluzione,problema_corr);
        if(esito== true){
            e2<<"Corretta"<<endl;
        }else
        {
         e2<<"Sbagliata"<<endl;
        }
        oggetto.setp(problema_corr); //il problema viene settato al problema corrente
        lunghezza=oggetto.getp().length()+2+lunghezza; //alla posizione corrente aggiungiamo la viariabile aggiornata di problema e il valore di due che considera lo spazio occupato da \n
    }
     */

    return 0;
}
