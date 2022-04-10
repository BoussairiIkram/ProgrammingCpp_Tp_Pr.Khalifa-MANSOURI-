#include<iostream>
using namespace std;

//Classe Vecteur :

class Vecteur{
	float x,y;
	
	public :
		Vecteur(float, float);
		Vecteur Homotethie1(float);
		Vecteur* Homotethie2(float);
		Vecteur& Homotethie3	(float);
		void Afficher();
};

Vecteur ::  Vecteur(float abs=0, float ord =0){
	x=abs;
	y=ord;
}

Vecteur Vecteur :: Homotethie1(float val){
	Vecteur res;
	
	res.x = x*val;
	res.y = y*val;
	
	return res;
}

Vecteur* Vecteur :: Homotethie2(float val){
	Vecteur *res = new Vecteur ;
    res->x = x*val;
 	res->y = y*val;
 	
 	return res;
}

Vecteur& Vecteur :: Homotethie3(float val){
	static 	Vecteur res;
	res.x = x*val;
	res.y = y*val;
	return res;
}


void Vecteur :: Afficher(){
	cout << "(" << x << "," << y << ")" << endl;
}

int main(){
	Vecteur U(1,1);
	Vecteur R1,R2,R3;
	
	U.Afficher();
	
	R1 = U.Homotethie1(2);
	R1.Afficher() ;
	
	R2 = *U.Homotethie2(4);
	R2.Afficher();
	
	R3 = U.Homotethie3(-2);
	R3.Afficher();
	
	return 0;
}
