#include<iostream>
using namespace std;

// Passage de paramétres par adresse :


class Point{
	int x,y;
	
	public :
		Point(int abs=0, int ord=2){
			x=abs;
			y=ord;
		}
		
		int coincide(Point *);
};

int Point :: coincide(Point *pt){
	if(pt->x == x && pt->y == y) return 1;
	return 0;
}

int main(){
	int T1,T2;
	Point A,B(12),C(0,2);
	
	T1 = A.coincide(&C);
	if(T1== 1) cout << "A et C sont egaux \n";
	else  cout << "A et C ne sont pas egaux \n";
	
	T2 = A.coincide(&B);
	
	if(T2==1) cout << "A et B sont egaux \n";
	else  cout << "A et B ne sont pas egaux \n";
	
	
	return 0;
}

