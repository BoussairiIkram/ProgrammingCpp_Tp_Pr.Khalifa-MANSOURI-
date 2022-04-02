#include<iostream>
using namespace std;
class Point{
	int x;
	int y;
	int Couleur;
	
	public:
	void Initialiser(int, int, int);
	void Deplacer(int, int);
	void Afficher();
	void Effacer();
};

void Point :: Initialiser(int a, int b, int c){
	x=a;
	y=b;
	Couleur=c;	
}

void Point :: Deplacer(int dx, int dy){
	x+=dx;
	y+=dy;
}

void Point :: Afficher(){
	cout << "(" << x << "," << y << ")" << endl;
}

//void Point :: Effacer(){
//	
//}

int main(){
	Point P;
	
	P.Initialiser(0,0,0);
	P.Afficher();
	
	P.Deplacer(12,222);
	P.Afficher();
	
	return 0;
}
