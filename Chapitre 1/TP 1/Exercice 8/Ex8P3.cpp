#include<iostream>
#include<conio.h>
using namespace std;

void Echange(int &a, int &b){
	int tampon;
	
	tampon = b;
	b=a;
	a=tampon;
	cout << "Pendant l'echange : a = " << a << " b = " << b << "\n";
}

int main(){
	int u=5, v=3;
	
	cout << "Avant echange : u = " << u << " v = " << v << "\n";

	Echange (u,v);
	
	cout << "Apres echange : u = " << u << " v = " << v << "\n";
		
	return 0;
}
