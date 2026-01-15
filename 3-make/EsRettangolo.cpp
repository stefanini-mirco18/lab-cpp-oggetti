
#include <iostream>
#include <string>

using namespace std;

class Rettangolo{
private:
    float base, altezza;
public:
void setBase(float n){
     if(n > 0)
        base = n;
    else
        cout << "Valore non possibile (minore di 0)" << endl;
    }
void setAltezza(float n){
    if(n > 0)
        altezza = n;
    else
        cout << "Valore non possibile (minore di 0)" << endl;
    }
void stampaPerimetro(){
    if(base > 0 || altezza> 0)
        cout << "Impossibile calcolare il perimetro coi dati inseriti" << endl;
    else{
        float perimetro = (base + altezza)*2;
    cout << "Il perimetro del rettangolo e': " << perimetro << endl;
    }
    }
void stampaArea(){
    if(base > 0 || altezza> 0)
        cout << "Impossibile calcolare l'area coi dati inseriti" << endl;
    else{
        float area = base * altezza;
    cout << "L'area del rettangolo e': " << area << endl;
    }
    }
};



int main()
{
    Rettangolo ret;
    float base, altezza;
    cout << "Inserire valore della base del rettangolo: ";
    cin >> base;
    cout << "Inserire valore dell'altezza del rettangolo: ";
    cin >> altezza;

    ret.setBase(base);
    ret.setAltezza(altezza);
    ret.stampaArea();
    ret.stampaPerimetro();


    return 0;
}
