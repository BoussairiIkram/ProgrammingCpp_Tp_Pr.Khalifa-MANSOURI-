#include<iostream>
using namespace std;

class Point{
	int x,y;
	public :
		Point(int, int);
		~Point();
};

Point :: Point(int abs, int ord){
	x= abs;
	y= ord;
	
	cout << "Construction du point " << x << " " << y << " a l'adresse this " << this << endl;
}

Point :: ~Point(){
	cout << "Destruction du point " << x << " " << y << " a l'adresse : " << this << endl;
}

int main(){
	cout << "Debut de main()\n";
	Point a(0,0);
	
	a=Point(1,2);
	a=Point(3,5);
	
	cout << "Fin de main()\n";
		
	return 0;
}
