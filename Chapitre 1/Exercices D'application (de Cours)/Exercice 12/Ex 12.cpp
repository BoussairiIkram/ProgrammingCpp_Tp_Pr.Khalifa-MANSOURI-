#include<iostream>
using namespace std;

/* Un objet Créé par new ne décéde pas à la sortie du bloc ou im a été
créé. L'opérateur "Delete libére l'espace mémoire alloué par new à un 
seul objet, tandis que l'operateur delete[] libére l'espace mémoire alloué
à un tableau d'objets.
*/
typedef struct complexe {
	double reel;
	int img;
}Complexe;
int main(){
	int *ptr = new int [10];
	delete [] ptr ;
	
	Complexe *z = new Complexe [20];
	delete z; // ne libére aue le premier élément 
	delete [] z; 

	return 0;
}
