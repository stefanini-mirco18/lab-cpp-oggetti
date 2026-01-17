#include <iostream>
#include <string>

using namespace std;

/***********************************************************************************************************
 *                                 Modifica della classe studente (costruttore)                            *
 *     Quando creaimo un oggetto, non è molto comodo chiamare un metodo per ogni attributo da settare      *
 *     Ha senso creare una funzione che, in un colpo solo, assegna valori a tutti gli attributi            *
 *     Dato che è una cosa comune a tutte le classi che creiamo,                                           *
 *     il linguaggio C++ definisce una funzione speciale chiamata "costruttore" per risolvere il problema  *
 *                                                                                                         */

class Studente {
private:
    string nome;
    int eta;
    float media;

public:
    // Costruttore
    Studente(string n, double e, float m):
        nome(n),
        eta(e),
        media(m)
        {}

    Studente(string n, double e):
        nome(n),
        eta(e),
        media(999)
        {}


    void setNome(string nuovoNome) {
        nome = nuovoNome;
    }

    void setEta(int nuovaEta) {
        if(nuovaEta > 0)
            eta = nuovaEta;
    }

    void setMedia(float nuovaMedia) {
        if(nuovaMedia >= 0 && nuovaMedia <= 10)
            media = nuovaMedia;
        else cout << "Impossibile definire media perchè non compresa tra 0 e 10";
    }

    void stampaStudente(){
        cout << "Nome: " << nome << ", eta: " << eta << ", media: " << media << endl;
    }
};

int main()
{
    // TODO Istanziare un oggetto tramite il costruttore
    Studente s1("GianLuigi", 18, 7.1);
    s1.stampaStudente();
    Studente s2("LeBonBon", 43);
    s2.stampaStudente();


    return 0;
}
