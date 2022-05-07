#include<iostream>
using namespace std;

class Point{
	int x,y;
	
	public :
		void initialise(int abs, int ord){
			x=abs;
			y=ord;
		}
		
		void deplace(int dx, int dy){
			x+=dx;
			y+=dy;
		}
		void affiche(){
			cout << "Le point est en " << x << " " << y << endl;
		}
};

class PointCol : public Point{
	short couleur;
	public :
		void colore(short c){
			couleur =c;
		}
};


int main(){
	PointCol p;
	
	p.initialise(10,20);
	p.colore(3);
	p.affiche();
	
	p.deplace(1,1);
	p.affiche();

	return 0;
}
