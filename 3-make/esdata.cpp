#include <iostream>

using namespace std;

class Data{
private:
    int giorno, mese, anno;
public:
    Data():
        giorno(1),
        mese(1),
        anno(1980)
    {}
    bool controlloData(){
    if(anno>=0){
        if(mese==1 || mese==3 || mese==7 || mese==9 || mese==10 || mese==12){
            if(giorno>0 && giorno<=31)
                return true;
        else
                return false;

    }else {
        if(giorno>0 && giorno<=30)
            return true;
        else
            return false;
            }
    }else return false;
    }

    void setMese(int nm){
    if(controlloData())
        mese=nm;
    else
        cout << "Data non corretta" << endl;
    }
    void setAnno(int na){
    if(controlloData())
        anno=na;
    else
        cout << "Data non corretta" << endl;
    }
    void setGiorno(int ng){
    if(controlloData())
        giorno=ng;
    else
        cout << "Data non corretta" << endl;
    }

    Data(int g, int m, int a){
        setGiorno(g);
        setMese(m);
        setAnno(a);};

};


int main()
{
    Data d1;
    Data d2(1,11,2024);


    return 0;
}
