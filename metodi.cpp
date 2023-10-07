//
// Created by luigi on 05/10/2023.
//
#include "metodi.h"
//metodi
string rispetta_i_versi::getp(){return p;}
string rispetta_i_versi::gets(){return s;}
void   rispetta_i_versi::setp(string c){p=c;}
void   rispetta_i_versi::sets(string c){s=c;}
bool   rispetta_i_versi::controlli(string p,string s)
{
    // prepariamo tutto cio che ci occorre
    bool positivo= true;
    int i=0;int j=0;int c=1; // contatori che andremo ad utilizzare
    int z,h;//sono le stringhe che utilizzeremo per fare svariati controlli
    int n=p.length()+1; //l'elemento massimo del problema
    //for(i=0;i<n*2;i++) //questo for racchiude tutte le operazione che dobbiamo fare. la i è l indice che in teoria si muove piu lentamente
    //{
    //if(s.length()>n*2){return false;}
    for(i=0;i<=s.length()-1;i++) {
        positivo = true;
        while (positivo) {
            if(i>s.length()-1) //riguarda l'ultimo numero considerato
            {
              z=stoi(s.substr(abs(c-1-i), c-1)); //prendiamo l ' iesimo numero interamente
              //massimo
                if(z>n){return false;}
              positivo= false;
              c=1;
            }
            /*
             In questa fase controlliamo che l i-esimo elemento sia una parentesi angolare cosi da poter prendere il numero che precede quella parentesi.
             Per farlo ci posizioniamo all inizio della sottostringa con c-1-i, dove c ha avuto il ruolo di contare da quanti numeri è composto il nostro numero
             Successivamente con c-1 indichiamo al compilatore quante cifre deve prendere
             */
            if (s.substr(i, 1) == "<" || s.substr(i, 1) == ">") {
                //incrementiamo la i
                z =stoi(s.substr(abs(c - 1 - i), c - 1));
                //controllo sul massimo
                if(z>n){return false;}
                c = 1; //c deve essere rimesso ad 1 per riniziare accapo
                positivo = false;
                //inizio trovando il massimo e confrontandolo con il massimo che si puo inserire ossia n
                //if(z>n){cout<<"z non deve superare p.length+1"<<endl;}

            }
            i++;
            c++;
        }
        //ora possiamo procedere andando a fare i nostri confronti
        //verifichiamo che non ci siano copie,che il numero massimo sia p.length +1 e che i confronti siano rispettati

        c = 1;
        for (j = i; j<=s.length()-1; j++) {
            if(j==s.length()-1)
            {
                j++; c++;
                h = stoi(s.substr(abs(c-j-1), c-1));
                //controllo eguaglianza
                if(z==h){return false;}
                c=1;
            }
            if (s.substr(j, 1) == "<" || s.substr(j, 1) == ">") {
                h = stoi(s.substr(abs(c - 1 - j), c - 1));
                //controllo che h sia uguale a z
                if(z==h){return false;}
                //ora iniziano tutti i controlli importanti
                j++;
                c = 1;

            }
            c++;
        }

    }
    return true;
    }


//controlla se i versi sono giusti
bool rispetta_i_versi::versi(string p,string s )
{
    int c=0;
for(int i=0;i<s.length()-1;i++)
{

    if(s.substr(i, 1)=="<" || s.substr(i, 1)==">")
    {
        if(s.substr(i, 1)!=p.substr(c, 1)){return false;}
        c++;
    }

}
    return true;
}
//andiamo ora a fare i nostri confronti
bool rispetta_i_versi::confronti(string p,string s) {
    bool positivo= true;
    int i=0;int g=0;int c=1; int l=0; // contatori che andremo ad utilizzare
    int z,h,o;//sono le stringhe che utilizzeremo per fare svariati controlli
    string e;
    int n=p.length()+1;

    for (i = 0; i <= s.length() - 1; i++) {
        positivo = true;
        while (positivo) {
            if (i > s.length() - 1) //riguarda l'ultimo numero considerato
            {
                z = stoi(s.substr(abs(c - 1 - i), c - 1)); //prendiamo l ' iesimo numero interamente
                if(g==1)
                {
                    if(e=="<"){if(o>z){cout<<"il numero="<<o<<" non e maggiore di"<<z<<endl;return false;}}else if(e==">"){if(o<z){cout<<"il numero="<<o<<" non e maggiore di"<<z<<endl;return false;}}
                    cout<<"s="<<o<<"z="<<z<<"e: "<<e<<endl;
                }
                o=z; e=s.substr(i, 1); g=1;
                cout<<z<<endl;
                if (z > n) { return false; }
                positivo = false;
                c = 1;
            }
            /*
             In questa fase controlliamo che l i-esimo elemento sia una parentesi angolare cosi da poter prendere il numero che precede quella parentesi.
             Per farlo ci posizioniamo all inizio della sottostringa con c-1-i, dove c ha avuto il ruolo di contare da quanti numeri è composto il nostro numero
             Successivamente con c-1 indichiamo al compilatore quante cifre deve prendere
             */
            if (s.substr(i, 1) == "<" || s.substr(i, 1) == ">") {
                //incrementiamo la i
                z = stoi(s.substr(abs(c - 1 - i), c - 1));
                if(g==1)
                {
                    if(e=="<"){if(o>z){cout<<"il numero="<<o<<" non e minore di"<<z<<endl;return false;}}else if(e==">"){if(o<z){cout<<"il numero="<<o<<" non e maggiore di"<<z<<endl;return false;}}
                }
                 o=z; e=s.substr(i, 1); g=1;
                c = 1; //c deve essere rimesso ad 1 per riniziare accapo
                positivo = false;
                //inizio trovando il massimo e confrontandolo con il massimo che si puo inserire ossia n
                //if(z>n){cout<<"z non deve superare p.length+1"<<endl;}

            }
            i++;
            c++;
        }
    }
    return true;
}
