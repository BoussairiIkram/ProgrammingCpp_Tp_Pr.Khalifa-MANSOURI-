#include<iostream>
#include<conio.h>
using namespace std;
//Chapitre 1 : C++ Comme un Langage C avanc�.
//Ecriture de donn�es sur la sortie standard :
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
// La fonction getch apartient � la bibliotheque Conio.h permet :
// 1 - Attend la frappe d'une touche au clavier.
// 2 - Renvoie le caract�re frapp�.
	return 0;
}
