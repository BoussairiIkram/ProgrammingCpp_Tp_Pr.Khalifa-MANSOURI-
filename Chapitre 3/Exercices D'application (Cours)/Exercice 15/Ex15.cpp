#include<iostream>
using namespace std;

class Vecteur{
	float x,y;
	
	public :
		Vecteur(float, float);
		float Prod_scal(Vecteur);
		Vecteur Somme(Vecteur);
		void Afficher();		
};

Vecteur ::  Vecteur(float abs=0, float ord =0){
	x=abs;
	y=ord;
}

float Vecteur :: Prod_scal(Vecteur V){	
	return x*V.x + y*V.y;
}

Vecteur Vecteur :: Somme(Vecteur V){
	Vecteur S;
	S.x = x + V.x;
	S.y = y + V.y;
	
	return S;
}

void Vecteur :: Afficher(){
	cout << "(" << x << "," << y << ")" << endl;
}

int main(){
	Vecteur V(1,1),U(2,4);
	Vecteur Somme = V.Somme(U);
	
	V.Afficher();
	U.Afficher();
	
	cout << "Le produit scalaire de deux vecteurs est : " << U.Prod_scal(U) << endl;
	cout << "La somme des deux vecteurs  est : ";
    Somme.Afficher() ;
	
	return 0;
}
