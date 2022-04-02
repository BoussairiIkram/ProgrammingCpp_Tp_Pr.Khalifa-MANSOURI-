#include<iostream>
using namespace std;

class Point{
	int x;
	int y;
	int Couleur;
	
	public:
		
    Point(int, int);
	void Deplacer(int, int);
	void Afficher();
	void Effacer();
};

Point :: Point(int a, int b){
	x=a;
	y=b;
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
	Point P(1,1);
	P.Afficher();
	
	return 0;
}
