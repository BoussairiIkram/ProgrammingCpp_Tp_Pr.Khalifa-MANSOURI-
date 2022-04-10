#include<iostream>
using namespace std;
// La surdrfinition des fonctions Membres:

class Point {
	private : 
		int x,y;
	
	public : 
		Point();
		Point(int);
		Point(int, int);
		void Afficher();
		void Afficher(char *);
};

Point :: Point(){
	x=0; y=0;
}

Point :: Point(int n){
	x=n; y=n;
}

Point :: Point(int abs, int ord){
	x=abs; y=ord;
}

void Point :: Afficher(){
	cout << "(" << x << "," << y << ")" << endl;
}

void Point :: Afficher(char *Mesg){
	cout << Mesg<< "\n";
	Afficher();
}

int main(){
	 Point A,B(1),C(0,1);
	 
	 A.Afficher();
	 B.Afficher();
	 C.Afficher();
	 
	 A.Afficher("Je suis en : ");
	
	
	return 0;
}
