#include <iostream>
#include <string>

using namespace std;

/*
    size() e length()
    TODO: stampa la lunghezza della string passata in input
*/
void lunghezzaStringa(string stringa){

    int x = stringa.length();
    int y = stringa.size();
    cout << "length: " << x << endl;
    cout << "size: " << y << endl;

}

/*
    find()
    TODO: immettere una stringa da tastiera e comunicare all'utente se è presente la parola "ciao"
            se la parola è presente, stampare "La parola ciao è presente"
            altrimenti stampare "La parola ciao NON è presente"
*/
void trovaCiao(string stringa){

   int x = stringa.find("ciao");
   if(x==-1){
    cout << "La parola ciao NON e' presente" << endl;
   }else
   cout << "La parola ciao e' presente" << endl;


}


/*
    replace()
    TODO: sostituire la parola "pizza" con la parola "pasta" e stampare la nuova stringa
*/
void sostituisciPizzaConPasta(string stringa){

    int x = stringa.find("pizza");
   if(x==-1){
    cout << "La parola pizza NON e' presente" << endl;
    cout << "la stringa e': " << stringa << endl;
   }else{
  stringa.replace(stringa.find("pizza"), 5, "pasta");
  cout << "La parola pizza e' presente" << endl;
    cout << "la stringa cambiata e': " << stringa << endl;
    }




}


/*
    substr()
    TODO: estrarre e stampare la prima parola della stringa passata in input

    HINT: la prima parola termina al primo spazio (trovabile con find())
*/
void stampaPrimaParola(string stringa){
    // TODO
    string s= stringa.substr(0, stringa.find(" "));
    cout << "La prima parola e': " << s << endl;
}


/*
    insert()
    TODO: inserire alla fine della stringa passata in input " Giovanni!" e stampare la nuova stringa
*/
void aggiungiGiovanni(string frase){

    frase.insert(frase.size(), " Giovanni!");
    cout << "frase con giovanni: " << frase << endl;

}

int main()
{

    string str;

    cout << "Inserire valore stringa: ";
    getline(cin, str);


    lunghezzaStringa(str);
    trovaCiao(str);
    sostituisciPizzaConPasta(str);
    stampaPrimaParola(str);
    aggiungiGiovanni(str);



    return 0;
}
