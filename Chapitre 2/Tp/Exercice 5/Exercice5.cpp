#include<iostream>
using namespace std;

class Point{
	int x;
	int y;
	int Couleur;
	
	public:
		
    Point(int, int);
    ~Point ();
    
	void Deplacer(int, int);
	void Afficher();
	void Effacer();
};

Point :: Point(int a, int b){
	x=a;
	y=b;
	Couleur=1;	
}

Point :: ~Point(){
	cout << "Je vais mourire (" << x << "," << y << ")" << endl;
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
	Point P(0,0);
	
	P.Afficher();
	
	P.Deplacer(12,12);
	P.Afficher();
	
	return 0;
}
