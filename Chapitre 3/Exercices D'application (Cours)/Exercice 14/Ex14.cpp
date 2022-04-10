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
		int Coincide(Point *);
};

void Point :: Afficher(){
	cout << "Adresse : " << this << " ~Coordonnees : (" << x << "," << y << ")\n" ;
}

int Point :: Coincide(Point *adpt){
	if(this->x == adpt->x && this->y == adpt->y) return 1;
	return 0;
}

int main(){
	Point a(5),b(2,3);
	
	a.Afficher();
	b.Afficher();
	
	if(a.Coincide(&b)==1) cout << "a et b coincide\n";
	else cout << "a et b ne coincide pas \n";
	
	
	return 0;
}
