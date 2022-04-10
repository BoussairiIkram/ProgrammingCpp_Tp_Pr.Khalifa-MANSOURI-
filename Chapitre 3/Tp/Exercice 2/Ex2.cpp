#include<iostream>
using namespace std;

class Point {
	private : 
		int x,y;
	
	public : 
		Point(){
				x=0; y=0;
		}
		Point(int n){
			x=n; y=n;	
		}
		Point(int abs, int ord){
			x=abs; y=ord;	
		}
		
		void Afficher();
		void Afficher(char *);
};

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
