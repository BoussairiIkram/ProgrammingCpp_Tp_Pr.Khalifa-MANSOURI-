#include<iostream>
using namespace std;
//Chapitre 1 : C++ Comme un Langage C avancé.
// Surcharge (Surdefinition) des fonctions (Overloading)

/*Remarque:
Le compilateur selectionnera la fonction à appeler en fonction du type
et du nombre des arguments qui figurent dans l'appel de la fonction.
Ce choix ce fair lors de la compilation.
*/

int Somme( int n1, int n2){
		return n1+n2;
}
	
int Somme( int n1, int n2, int n3){
		return n1+n2+n3;
}
	
double Somme( double n1, double n2){
		return n1+n2;
}

int main(){	
	cout << "1+2 = " << Somme(1,2) << endl;
	cout << "1+2+3 = " << Somme(1,2,3) << endl;
	cout << "1.2 + 2.3 = " << Somme(1.2,2.3) << endl;

	return 0;
}
