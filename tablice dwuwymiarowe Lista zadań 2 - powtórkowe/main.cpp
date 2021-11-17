#include <iostream>
using namespace std;

void wypisz(int tab[3][5])
{
    for (int i=0; i<3; i++) {
        for(int j=0; j<5; j++)
        {
            cout << tab[i][j] << " ";
        }
        cout << endl;
    }
    cout << "---------" <<endl;
}

void wywalwiersze(int tab[3][5], int wiersz)
{
    if(wiersz==2)
    {
        for(int i=0; i<5; i++)
        {
            tab[wiersz][i]=0;
        }
        wypisz(tab);
    }
    else
    {
        for(int i=0; i<5; i++)
        {
            tab[wiersz][i]=tab[wiersz+1][i];
        }
        wywalwiersze(tab, wiersz+1);
    }
}



int main() {
    //zadanie pierwsze
    int tab[3][5]={0};
    for (int i=0; i<3; i++) {
        for(int j=0; j<5; j++)
        {
            tab[i][j]=i+j;
        }
    }
    //zadanie pierwsze
    
    wypisz(tab);
    wywalwiersze(tab, 1);
    return 0;
}
