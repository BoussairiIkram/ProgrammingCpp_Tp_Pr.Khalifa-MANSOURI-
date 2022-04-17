#include<iostream>
using namespace std;


class Point{
	int x,y;
	public :
		Point(int,int);
		~Point();
};

Point :: Point(int abs, int ord){
	x=abs; y=ord;
	cout << "Construction du point : (" << x <<"," << y << ")" <<endl;
}

Point :: ~Point(){
	cout << "Destruction du point (" << x <<"," << y << ")" <<endl;
}

Point a(1,4); // Variable Globale

int main(){
	cout << "Debut de Main()\n";
	Point b(5,10);
	cout << "Fin de main()\n";

	return 0;
}
