#include<iostream>
using namespace std;

class Compteur{
	static int ctr;
	public:
		Compteur();
		~Compteur();
		static void Compte();
};

Compteur :: Compteur(){
	cout << "Creaction de nouveau Objet\n";
	ctr++;
}

Compteur :: ~Compteur(){
	cout << "Destricteur .\n";
	ctr--;
} 

void Compteur :: Compte(){
	cout << "Nombre d'objet est : " << ctr << endl;
}

void Essai(){
	Compteur U,V;
}

int main(){
	Compteur A;
	
	Essai();
	
	Compteur :: Compte();
	
	return 0;
}
