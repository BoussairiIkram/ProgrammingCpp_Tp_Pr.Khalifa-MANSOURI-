#include<iostream>
using namespace std;

// Construction et destruction des objets dynamiques :

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
}

Point :: ~Point(){
	cout << "Destruction du point ("<< x << "," << y << ")\n";  
}

void Point :: Afficher(){
	cout << "("<< x << "," << y << ")\n";  
}

int main(){
	void fct(Point *);
	
	Point *adr;
	cout << "Debut de main()\n";
	
	adr = new Point(2,4);
	
	adr->Afficher();
	
	fct(adr);
//	
//	delete adr;
	cout << "Fin de main()\n";
	
	
	return 0;
}

void fct(Point *adr){
	cout << "Debut de la fonction \n";
	
	adr->Afficher();
	
	delete adr;
	
	cout << "Fin de la fonction \n";
}
