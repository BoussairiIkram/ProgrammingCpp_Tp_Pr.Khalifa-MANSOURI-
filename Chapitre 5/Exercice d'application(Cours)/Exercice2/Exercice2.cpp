#include<iostream>
using namespace std;


class Vecteur{
	float x,y;
	
	public : 
		Vecteur(float, float);
		void Afficher();
		Vecteur operator+(Vecteur); //Surdefinition de l'operateur somme.
		float operator*(Vecteur);
		Vecteur operator*(float);
};

Vecteur :: Vecteur(float abs=0, float ord=0){
	x=abs; 
	y=ord;
}

void Vecteur :: Afficher(){
	cout << x << " "<< y << "\n";
}

Vecteur Vecteur :: operator+(Vecteur v){
	Vecteur res;
	res.x= v.x + x;
	res.y= v.y + y;
 	return res;
}

float Vecteur :: operator*(Vecteur v){
	return v.x*x + v.y*y;
}

Vecteur Vecteur :: operator*(float h){
	Vecteur res;
	res.x = x*h;
	res.y = y*h; 
	return res;
}

int main(){
	Vecteur a(2,6), b(1,2);
	float res;
	
	res=a*b;
	cout << res << "\n";
	
	res= a.operator*(b);
	cout << res << "\n";
	
	a= b*2;
	a.Afficher();
	
	
	return 0;
}
