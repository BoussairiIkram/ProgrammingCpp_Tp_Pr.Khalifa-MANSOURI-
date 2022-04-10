#include<iostream>
using namespace std;

//Classe Vecteur :

class Vecteur{
	float x,y;
	
	public :
		Vecteur(float, float);
		void Homotethie(float);
		void Afficher();
		float Det1(Vecteur);
		float Det2(Vecteur *);
		float Det3(Vecteur &);
};

Vecteur ::  Vecteur(float abs=0, float ord =0){
	x=abs;
	y=ord;
}

void Vecteur :: Homotethie(float val){
	x*=val;
	y*=val;
}

void Vecteur :: Afficher(){
	cout << "(" << x << "," << y << ")" << endl;
}

float Vecteur :: Det1(Vecteur V){
	return x * V.y - y * V.x ;
}

float Vecteur :: Det2(Vecteur *V){
	return x * V->y - y * V->x ;
}

float Vecteur :: Det3(Vecteur &V){
	return x * V.y - y * V.x ;
}
int main(){
	Vecteur V(1,1),U(10,2);
	
	V.Afficher();
	U.Afficher();
	
	cout << V.Det1(U) << endl;
	
	U.Homotethie(2);
	
	cout << V.Det2(&U) << endl;
	
	cout << U.Det3(U) << endl;
	
	return 0;
}
