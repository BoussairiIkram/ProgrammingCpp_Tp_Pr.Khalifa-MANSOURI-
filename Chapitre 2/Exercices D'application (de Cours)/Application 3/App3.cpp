#include<iostream>
using  namespace std;

class Point{
	private :
		int x;
		int y;
		
	public : 
		Point();
		Point(int, int);
		void Initialiser(int, int);
		void Deplacer(int , int);
		void Afficher();
};

Point :: Point(){
	x=20;
	y=20;
}
Point :: Point(int a, int b){
	x=a;
	y=b;
}

void Point :: Initialiser(int a, int b){
	x = a;
	y = b;
}

void Point :: Deplacer(int dx, int dy){
	x+=dx; 
	y+=dy;
}

void Point :: Afficher(){
	cout << "(" << x << "," << y << ")\n" ;
}



int main(){
	Point A;
	Point B(10,10);
	
	A.Afficher();
	B.Afficher();
	
	
	return 0;
}
