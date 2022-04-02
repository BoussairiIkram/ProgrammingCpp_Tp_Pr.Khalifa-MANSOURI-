#include<iostream>
using namespace std;

typedef struct Point{
	double x;
	double y;
	
	void Initialiser(double , double);
	void Afficher();
	void Deplacer(double, double);
}Point;

void Point :: Initialiser(double a, double b){
	x=a; y=b;
} 

void Point :: Deplacer(double dx, double dy){
	x+=dx; y+=dy;
}

void Point :: Afficher(){
	cout << "(" << x << "," << y << ")\n" ;
}
int main(){
	Point P;
	
	P.Initialiser(12.2,12.1122);
	P.Afficher();
	
	P.y= 12.2;
	P.Afficher();
	
	P.Deplacer(1,1);
	P.Afficher();
	
	return 0;
}
