#include<iostream>
using namespace std;

class Vecteur{
	float x,y;
	
	public : 
		Vecteur(float, float);
		void Afficher();
		Vecteur operator+(Vecteur); //Surdefinition de l'operateur somme.
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

int main(){
	Vecteur a(2,6), b(4,8), c,d,e,f;
	
	c=a+b;
	c.Afficher();
	
	d= a.operator+(b);
	d.Afficher();
	
	e= b.operator+(a);
	e.Afficher();
	
	f=a+b+c; 
	
	f.Afficher();
	
	return 0;
}
