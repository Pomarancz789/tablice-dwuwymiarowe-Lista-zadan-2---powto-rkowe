#include <iostream>
#include<cstdio>
#include<cstdlib>
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

int sasiedzi(int tab[6][6], int w, int k)
{
    int sumasasiadow=0;
    
    sumasasiadow+=tab[w][k];
    if () {
        <#statements#>
    }
    
    return sumasasiadow;
}


void zadaniedrugie()
{
    int tab1[6][6]={0};
    int tab2[6][6]={0};
    srand(time(NULL));
    
    for (int i=0; i<6; i++)
    {
        for (int j=0; j<6; j++) {
            tab1[i][j]=-10+rand()%(10+10+1);
        }
    }
    
    for (int i=0; i<6; i++)
    {
        for (int j=0; j<6; j++) {
            tab2[i][j]=sasiedzi(tab1,i,j);
        }
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
    
    //wypisz(tab);
    
    //int wiersz=0;
    //cout << "Podaj wiersz do wywalenia " << endl;
    //cin >>wiersz;
    //wywalwiersze(tab, wiersz-1);
    zadaniedrugie();
    
    return 0;
}
