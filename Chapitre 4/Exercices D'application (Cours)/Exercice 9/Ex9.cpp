#include<iostream>
using namespace std;

class Point{
	int x,y;
	public :
		Point(int , int );
		Point(Point &);
		Point Symetrique();
		void afficher(){ cout << "x= " << x << "y= "<<y << "\n" ;}
		~Point();
};

Point :: Point(int abs = 0 , int ord = 0){
	x=abs; y=ord;
	cout << "\nConstruction du point " <<  x << " " << y << endl;
	cout << "Adresse : " << this << "\n";
}

Point :: Point(Point &v){
	x = v.x;
    y = v.y;
    cout << "\nConstruction par recopie " << x << " " << y << endl;
    cout << "Adresse : " << this << "\n";
}

Point Point :: Symetrique(){
	Point res;
	res.x = -x;
	res.y = -y;
	return res;
}

Point :: ~Point(){
	cout << "\nDestructeur du point " << x << " " << y << "\n";
	cout << "Adresse : " << this << endl;
}

int main(){
	Point a(1,4), b;
	
	cout << "\nAvant appel a symetrique\n";
	
	b= a.Symetrique();
	b.afficher();
	cout << "\nAprés appel a symetrique et fin de main()\n";
	
	return 0;
}
