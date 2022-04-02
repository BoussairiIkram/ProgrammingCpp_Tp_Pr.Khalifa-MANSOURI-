#include<iostream>
using  namespace std;

class Point{
	private :
		int x;
		int y;
	
	public :
		Point();
		void Initialiser(int, int);
		void Deplacer(int, int);
		void Afficher();
//		~Point(); 
};

Point :: Point(){
	x=20;
	y=20;
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
	Point A,B;
	
	A.Afficher();
	B.Afficher();
	
	return 0;
}
