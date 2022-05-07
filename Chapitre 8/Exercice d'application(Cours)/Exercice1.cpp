#include<iostream>
using namespace std;

class Point{
	int x,y;
	
	public:
		Point(int abs,int ord){
			cout << "Constructeur.Point\n";
			x=abs;
			y=ord;
		}
		~Point(){
			cout << "Destricteur.Point\n";
		}
		
		void Afficher(){
			cout << "Coordonées : " << x <<" "<< y<< endl;
		}
};

class Coul{
	short Color;
	
	public :
		Coul(int cl){
			cout<< "Const.coul\n";
			Color = cl;
		}
		~Coul(){
			cout << "Destricteur.Coul\n";
		}
		void Afficher(){
			cout<< "Couleur : " << Color << endl;
		}
};

class PointCol : public Point, public Coul{
	public : 
	PointCol(int, int, int);
	~PointCol(){
		cout << "Destricteur PointCoul\n";
	}
	void Afficher(){
		Point :: Afficher();
		Coul :: Afficher();
	}
};

PointCol :: PointCol(int abs, int ord, int cl) : Point(abs,ord), Coul(cl){
	cout << "Constructeur PointCoul\n";
}
int main(){
	
	PointCol P(12,10,2);
	P.Afficher();
	
	P.Point::Afficher();
	
	P.Coul::Afficher();
	
	return 0;
}
