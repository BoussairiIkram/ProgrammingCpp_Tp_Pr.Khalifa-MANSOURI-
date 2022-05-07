#include<iostream>
using namespace std;

class Point{
	int x,y;
	
	public :
		Point(int abs, int ord){
			x=abs;
			y=ord;
		}	
		void affiche(){
			cout << x << " "<< y << endl;
		}	
};

class PointCol : public Point{
	short couleur;
	public :
		PointCol(int,int,short);
		void affiche(){
			Point ::affiche();
			cout << "couleur " << couleur <<endl;
		}
};

PointCol :: PointCol(int abs=0, int ord=0, short c=1) : Point(abs,ord){
	couleur =c;
}

int main(){
	PointCol p(10,20,3);
	p.affiche();
	
	return 0;
}
