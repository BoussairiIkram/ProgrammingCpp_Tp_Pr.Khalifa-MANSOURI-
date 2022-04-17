#include<iostream>
using namespace std;
//Initialisation des objets

class Point{
	private :
		int x,y;
	public :
	 	Point(int, int);
		 ~Point();	
		void Afficher();

};

Point :: Point(int abs, int ord ){
	x= abs; y=ord;
	cout << "Construction du Point (" << x << "," << y << ") a l'adresse : " << this << endl;  
}

Point :: ~Point(){
	cout << "Destruction du point ("<< x << "," << y << ")\n";  
}

void Point :: Afficher(){
	cout << "("<< x << "," << y << ")\n";  
}

int main(){
	Point a(2,3);
	a.Afficher();
	
	Point  b=a;
	b.Afficher();
	
// Dans ce programme le constructeur est exécuté par a seulement par contre le destructeur pour a et b. 
	
	return 0;
}
