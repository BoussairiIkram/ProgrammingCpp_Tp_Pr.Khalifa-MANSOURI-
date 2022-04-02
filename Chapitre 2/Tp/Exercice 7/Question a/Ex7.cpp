#include<iostream>
#include<stdlib.h>
#include<cmath>
using namespace std;

class Hasard{
	int ValAleat[10];
	
	public:
	Hasard(int);
	void Afficher();
};

Hasard :: Hasard(int max){	
//	srand(time(NULL));
	
	for(int i=0; i<10; i++)  ValAleat[i]= rand()%(max+1);
}

void Hasard :: Afficher(){
	for(int i=0; i<10; i++) cout << ValAleat[i] << " ";
	cout << "\n";
}
int main(){
	Hasard H(10);
	
	H.Afficher();
		
	return 0;
}
