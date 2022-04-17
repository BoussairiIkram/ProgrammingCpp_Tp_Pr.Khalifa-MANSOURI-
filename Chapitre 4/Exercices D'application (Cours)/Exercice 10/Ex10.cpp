#include<iostream>
using namespace std;

//Les Tableaux d'objets

class Point{
	int x,y;
	public :
		Point(int abs=0, int ord=0){
			x=abs;
			y=ord;
		}
		void Afficher(){
			cout << x << " " << y << endl;
		}
};

int main(){
	Point Courbe[5]={{1,2},{3,4},{5,12}};
	
	for(int i=0; i<5 ; i++)
		Courbe[i].Afficher();
	
	return 0;
}
