#include<iostream>
using namespace std;

class Point{
	int x;
	int y;
	int Couleur;
	
	public:
		
    Point();
	void Deplacer(int, int);
	void Afficher();
	void Effacer();
};

Point :: Point(){
	x=0;
	y=0;
	Couleur=1;	
}

void Point :: Deplacer(int dx, int dy){
	x+=dx;
	y+=dy;
}

void Point :: Afficher(){
	cout << "(" << x << "," << y << ")" << endl;
}

void Point :: Effacer(){
	
}

int main(){
	Point P;
	P.Afficher();
	
	return 0;
}
