#include<iostream>
using namespace std;

//Objets Retourne une fonction membre :
// 1- Retour par référence :

class Point{
	int x,y;
	public :
		Point(int abs=0, int ord=0){
			x=abs;
			y=ord;
		}
		Point& Symetrique();
		void Afficher();
};

Point& Point :: Symetrique(){
	static Point res; //La variable res est obligatoirement static 
	
	res.x = -x;
	res.y = -y;	
	return res;
}

void Point :: Afficher(){
	cout << "Le point est en " << x << " et " << y << endl;
}

int main(){
	Point A,B(1,6);
	
	A=B.Symetrique();
	
	A.Afficher();
	B.Afficher();
	
	return 0;
}
