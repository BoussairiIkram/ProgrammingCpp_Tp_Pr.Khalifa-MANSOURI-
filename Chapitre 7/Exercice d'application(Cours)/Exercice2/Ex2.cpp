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
		void initialise(int abs, int ord, int color){
			Point :: initialise(abs, ord);
			couleur= color;
		}
		void affiche(){
				Point ::affiche();
				cout << "Color : " << couleur << endl;
		}
};


int main(){
	PointCol p;
	
	p.initialise(10,20,3);
	p.affiche();
	
	p.deplace(1,1);
	p.affiche();

	return 0;
}
