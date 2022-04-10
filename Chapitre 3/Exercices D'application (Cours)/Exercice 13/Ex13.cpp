#include<iostream>
using namespace std;

//Le mot cle This

class Point{
	int x,y;
	
	public :
		Point(int abs=0, int ord=0){
			x=abs;
			y=ord;
		}
		
		void Afficher();
};

void Point :: Afficher(){
	cout << "Adresse : " << this << " ~Coordonnees : (" << x << "," << y << ")\n" ;
}

int main(){
	Point a(5),b(3,15);
	
	a.Afficher();
	b.Afficher();
	
	return 0;
}
