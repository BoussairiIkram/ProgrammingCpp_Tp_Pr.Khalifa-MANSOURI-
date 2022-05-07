#include<iostream>
using namespace std;

class Point{
	int x,y;
	
	public :
		Point(int abs=0, int ord=0){
			x=abs;
			y=ord;
		}		
		
	friend int coincide(Point, Point);
};

	int coincide(Point P,Point Q){
			return (P.x==Q.x && P.y==Q.y);
}

	

int main(){
	Point a(4,0),b(4),c;
	
	if(coincide(a,b)) cout << "a et b coincide.\n";
	else cout << "a et b ne coincide pas.\n";	
	return 0;
}
