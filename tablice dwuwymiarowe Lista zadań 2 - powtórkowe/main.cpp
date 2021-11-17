#include <iostream>
using namespace std;

void zadaniepierwsze()
{
    int tab[3][5]={0};
    for (int i=0; i<3; i++) {
        for(int j=0; j<5; j++)
        {
            tab[i][j]=i+j;
            cout << tab[i][j] << " ";
        }
        cout << endl;
    }
}


int main() {
    
    
    zadaniepierwsze();
    
    
    return 0;
}
