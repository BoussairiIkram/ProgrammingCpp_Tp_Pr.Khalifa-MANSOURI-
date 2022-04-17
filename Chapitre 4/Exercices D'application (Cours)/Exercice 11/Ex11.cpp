#include<iostream>
using namespace std;

//Objets membres ou objets d'objets

class Point{
	int x,y;
	public :
		Point(int, int);
		void Afficher();
};

Point :: Point(int abs=0, int ord=0){
	x=abs; 
	y=ord;
	
	cout << "Constructeur Point " << x << " " << y << endl;
}

void Point :: Afficher(){
	cout << x << " " << y;
}

class Pointcol{
	Point p;
	int Color;
	public : 
		Pointcol(int, int, int);
		void Affcoul();
};

Pointcol :: Pointcol(int abs, int ord, int coul) : p(abs,ord){
	Color = coul;
	cout << "Constructeur PointCol : " << Color << endl;
}

void Pointcol :: Affcoul(){
	p.Afficher();
	cout << " " << Color << endl; 
}

int main(){
	Pointcol a(1,3,9);
	
	a.Affcoul();
	
	return 0;
}
