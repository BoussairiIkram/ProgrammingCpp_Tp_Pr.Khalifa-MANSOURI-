#include<iostream>
using namespace std;

/* Un objet Cr�� par new ne d�c�de pas � la sortie du bloc ou im a �t�
cr��. L'op�rateur "Delete lib�re l'espace m�moire allou� par new � un 
seul objet, tandis que l'operateur delete[] lib�re l'espace m�moire allou�
� un tableau d'objets.
*/
typedef struct complexe {
	double reel;
	int img;
}Complexe;
int main(){
	int *ptr = new int [10];
	delete [] ptr ;
	
	Complexe *z = new Complexe [20];
	delete z; // ne lib�re aue le premier �l�ment 
	delete [] z; 

	return 0;
}
