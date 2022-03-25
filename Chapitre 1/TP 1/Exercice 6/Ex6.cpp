#include<iostream>
#include<conio.h>
using namespace std;

void Essai(float x, char c, int n=0){
	cout << "Fonstion N 1 : x = " << x << " c = " << c << " n = " << n << "\n" ;
}

void Essai(float x, int n){
	cout << "Fonction N 2 : x = " << x << " n= " << n << "\n";
}

int main(){
	char l='z';
	float y=2.0;
	int u=4;
	
	Essai(y,l,u); //Fonstion N 1 
	Essai(y,l);  //Fonction N 1
	Essai(y,u); //Fonction N 2
	Essai(u,u); //Fonction N 2
	Essai(u,l); //Fonction N 1
	Essai(y,y,u); //Fonction N 1
	
	//Essai(y,y); rejet par le compilateur
	
	return 0;
}
