#include <iostream>

using namespace std;

class Portafoglio {
private:
    float valore;
public:
    Portafoglio():
        valore(3.0)
    {}
    Portafoglio(float a):
        valore(a)
    {}
     void stampa(){
     cout << "Il valore e': " << valore << endl;
     }
     float aggiorna(float n, char segno){
     if(segno=='+')
        valore+=n;
     else
        valore-=n;

    return valore;
     }
};

int main()
{
    float valore1, valAggiunto1;
    char segno1;
    // Portafoglio s;
    cout << "inserire il valore del portafoglio: ";
    cin >> valore1;

    // Portafoglio p;
   Portafoglio s(valore1);
   // p.stampa();
    s.stampa();
    cout << "Inserire valore da aggiungere o diminuire: ";
    cin>> valAggiunto1;
    cout << "Inserire + per aggiungere o - per diminuire: ";
    cin >> segno1;
    cout << "Il valore aggiornato e': " << s.aggiorna(valore1, segno1);
   // p.stampa();

    return 0;
}
