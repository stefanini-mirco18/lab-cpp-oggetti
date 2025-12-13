#include <iostream>
#include <string>
#include <cctype>   // per toupper
using namespace std;




 // numero di email
const int N = 12;

// array di email
string emails[N] = {
    "marco.rossi@studio.alberghetti.it",
    "anna.bianchi@studio.alberghetti.it",
    "luca.verdi@studio.alberghetti.it",
    "giulia.moretti@studio.alberghetti.it",
    "alessandro.ferrari@studio.alberghetti.it",
    "chiara.galli@studio.alberghetti.it",
    "matteo.martinelli@studio.alberghetti.it",
    "sara.ricci@studio.alberghetti.it",
    "stefano.colombo@studio.alberghetti.it",
    "elena.sartori@studio.alberghetti.it",
    "gianluca.marini@studio.alberghetti.it",
    "marta.leone@studio.alberghetti.it"
    };
string rimuovi(string s){
int x= s.find(".");
s.erase(x,1);
return s;
}

string rimuoviC(string s){
int x= s.find("@");
s.erase(x, s.length());
return s;
}

string spezza(string s){
int x= s.find(".");
string nome=s.substr(0, x);
string cognome= s.substr(x+1, s.length());
string nomeCognome= nome + " " + cognome;
return nomeCognome;

}
string primoCarattereMaiuscolo(string &s) {
     s.at(0) = toupper(s.at(0));
return s;
}


int main() {

    // array destinazione per "Nome Cognome"
    string nomiCognomi[N];



    // ciclo su tutte le email
    for (int i = 0; i < N; i++) {
        string email = emails[i]; //email corrente
        email=rimuoviC(email);
        email=rimuovi(email);
        nomiCognomi[i]=spezza(email);

        // TODO: spezzare la stringa in due parti diverse: nome e cognome (utilizzare il punto come criterio per separare)


        // TODO: inserire in nomiCognomi[i] l'insieme delle due stringhe (concatenarle con l'operatore +)

    }

    // stampa il risultato
    cout << "Risultato:\n";
    for (int i = 0; i < N; i++) {
        cout << nomiCognomi[i] << endl;
    }

    return 0;
}
