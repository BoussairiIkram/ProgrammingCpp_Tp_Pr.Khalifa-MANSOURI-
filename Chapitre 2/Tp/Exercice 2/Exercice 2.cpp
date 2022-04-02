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

void  Scene(){
	Point u;
	u.Initialiser(12,22,8);
	u.Afficher();
	
	u.Deplacer(-22,-22);
	u.Afficher();
}
int main(){

   Scene();
	
	return 0;
}
