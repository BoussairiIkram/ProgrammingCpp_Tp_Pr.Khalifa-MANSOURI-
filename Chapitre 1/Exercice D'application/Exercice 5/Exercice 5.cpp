#include<iostream>
using namespace std;
//Chapitre 1 : C++ Comme un Langage C avanc�.
//Ecriture de donn�es sur la sortie standard :

/*Remarque :
L'operateur de r�somutio, de prt�e < :: > permer d'acc�der aux variable
globale plutot que variables locales.
*/

int i=11;
int main(){
	int i=34;
	{
		int i=23;
		::i = ::i+1;
		cout << ::i << " " << i << endl;
	}
	
	cout << ::i << " " << i << endl;
	
	return 0;
}
