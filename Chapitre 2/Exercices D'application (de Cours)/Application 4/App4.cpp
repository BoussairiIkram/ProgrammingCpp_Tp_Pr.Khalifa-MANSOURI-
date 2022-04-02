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
		~Point();
};

Point :: Point(){
	x=20;
	y=20;
}
Point :: Point(int a, int b){
	x=a;
	y=b;
}
Point :: ~Point(){
	cout << "Destruction du point (" << x << "," << y << ")\n" ;
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

void Test(){
	Point c(1,1);
	
	cout << "\nPoint C : \n";
	c.Afficher();
}

int main(){
	Point A;
	Point B(10,10);
	
	cout << "Point A : \n";
	A.Afficher();
	
	Test();
	
	cout << "\nPoint B : \n";
	B.Afficher();
		
	return 0;
}
