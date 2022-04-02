#include<iostream>
#include<conio.h>
using namespace std;
//Chapitre 1 : C++ Comme un Langage C avancé.
//Ecriture de données sur la sortie standard :
int main(){
    char c='m', d= 25 , e;
    int i=42,j;
    float r=678.9,s;
    
    j=c;
    cout << j << "\n" ;
    
    j=r;
    cout << j << "\n";
    
    s=d;
    cout << s << "\n";
    
    e=i;
    cout << e << "\n";
    
    getch(); 
// La fonction getch apartient à la bibliotheque Conio.h permet :
// 1 - Attend la frappe d'une touche au clavier.
// 2 - Renvoie le caractère frappé.
	return 0;
}
