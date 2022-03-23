#include<iostream>
using namespace std;

//Chapitre 1 : C++ Comme un Langage C avanc�.
/* Valeur par defaut des parametres :
En C++, On peut pr�ciser la valeur prise par d�faut par un argument
de fontion. Lors de l'appel � cette fonction, si on peet l'argument 
il prendra la valeur indiqu� par defaut, dans le cas contraire, cette
valeur par d�faut est ignor�e. */

void Function1(int n=2){
	cout << n << endl;
}
void Function2(int n ,float x=12.02){
	cout << n << " " << x << endl;
}
void Function3(char c, int n=2, float x=12.02){
	cout << c << " " << n << " " << x << endl ;
}

int main(){
	char a='I';
	int i=192;
	float r=123.22;
	
	Function1();
	Function1(i);
	cout << "\n";
	
	Function2(i);
	Function2(i,r);
	cout << "\n";
	
	Function3(a);
	Function3(a,i);
	Function3(a,i,r);
	
	return 0; }
