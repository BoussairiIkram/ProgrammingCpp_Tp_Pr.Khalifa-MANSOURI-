#include<iostream>
using namespace std;
//Allocation de tableau à plusieur dimentsions :

int main(){
	typedef	char Tab[80]; // Tab est un synonyme de : Tbleau de 80 caractere
	
	Tab *ecran = new Tab[25]; // ecran est un Tableau de 25 fois 80 caracteres
	
	ecran[24][79]='&';
	
	return 0;
}
