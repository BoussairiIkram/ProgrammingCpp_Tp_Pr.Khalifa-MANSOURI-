#include<iostream>
using namespace std;

class Point{
	int x,y;
	public : 
		Point(int, int);
		~Point();
};

Point :: Point(int abs, int ord){
	x=abs; y=ord;
	cout << "Construction du point : (" << x <<"," << y << ")" <<endl;
}

Point :: ~Point(){
	cout << "Destruction du point (" << x <<"," << y << ")" <<endl;
}

void Test(){
	cout << "Debut de test()\n";
	Point u(3,7);
	cout<< "Fin de Test()\n";
}

int main(){
	cout << "Debut de Main()\n";
	Point a(1,4);
	Test();
	Point b(5,10);
	
	for(int i=0;i<3;i++){
		cout << "Boucle tour numéro " << i <<endl;
		Point(7+i, 12+i);
	}
	
	cout << "Fin de main()\n";
	
	
	return 0;
}
