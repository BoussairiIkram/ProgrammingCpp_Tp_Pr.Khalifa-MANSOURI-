#include<iostream>
using namespace std;

//Fonctions Membres statiques

class Compte_obj{
	static int ctr;
	public :
		Compte_obj();
		~Compte_obj();
		static void Compte();
};

int Compte_obj :: ctr=0;
Compte_obj :: Compte_obj(){
	cout <<  "il y a maintenant " << ++ctr << " Objets\n";
}

Compte_obj :: ~Compte_obj(){
	cout << "il y a maintenant " << --ctr << " Objets\n";
}

void Compte_obj :: Compte(){
	cout << "Il ya " << ctr << "Objets\n" ;
}

void Fonction(){
	Compte_obj U,V;
}

int main(){
	void Fonctions();
	
	Compte_obj :: Compte();
	
	Compte_obj A;
	Compte_obj :: Compte();
	
	Fonction();
	
	Compte_obj :: Compte();
	Compte_obj B;
	
	Compte_obj :: Compte();
	
	return 0;
}
