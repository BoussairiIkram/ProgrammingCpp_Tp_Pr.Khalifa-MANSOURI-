#include<iostream>
using  namespace std;

//Initialisation des Paramétres par defaut

class Point{
	int x,y;
	
	public :
		Point(int abs=0, int ord=2){
			x=abs; y=ord;
		}
	
	void Afficher(char* = "Position du point :");
	
};

void  Point :: Afficher(char *Msg){
	cout << Msg;
	cout << "(" << x << "," << y << ")" << endl;
}

int main(){
	Point A,B(40);
	
	A.Afficher("Point A : ");
	B.Afficher();
	
	Point C(20,10);
	char Tab[10]="Bonjour";
	
	C.Afficher();

	return 0;
}
