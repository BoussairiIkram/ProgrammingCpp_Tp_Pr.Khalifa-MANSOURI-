#include<iostream>
using namespace std;
//Fonctions Membres en ligne:

class Point {
	int x,y;
	
	public :
		Point(){
			x=0;
			y=0;
		}
		
		Point(int abs){
			x=abs;
			y=abs;
		}
		
		Point(int abs,int ord){
			x=abs;
			y=ord;
		}
		
		void Afficher();
};

void Point :: Afficher(){
	cout << "(" << x << "," << y << ")" << endl;
}

int main(){
	Point A,B(1);
	 
	 A.Afficher();
	 B.Afficher();
	 
	Point C(0,1);
	 C.Afficher();
	 
	return 0;
}
