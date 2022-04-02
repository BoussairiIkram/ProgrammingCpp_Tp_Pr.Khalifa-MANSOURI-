#include<iostream>
using namespace std;
//Chapitre 1 : C++ Comme un Langage C avancé.
/* Exercice : 
Ecrire trois fonctions portant le meme nom et permettant d'afficher
reespectivement :
Un entier, un réel, un complexe.
*/

typedef struct Complexe{
	float rel, img;
}Complexe;

void Afficher(int n){
	cout << n << endl;
}

void Afficher(double n){
	cout << n << endl;
}


void Afficher(Complexe n){
	cout << n.rel << " + i " << n.img << endl;
}

int main(){	
    int a =5;
    double d= 12.23;
    Complexe c = {12.1,19.11};
    
    cout << " Affsicher Nombre Entier : " ;
	Afficher(a);
	
    cout << " Afficher Nombre Reel : " ; 
	Afficher(d) ;
	
    cout << " Afficher Nombre Complexe : "; 
	Afficher(c);
    
	return 0;}
