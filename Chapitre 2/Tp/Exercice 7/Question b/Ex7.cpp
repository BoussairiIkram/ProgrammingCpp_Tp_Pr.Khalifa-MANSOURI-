#include<iostream>
#include<stdlib.h>
using namespace std;

class Hasard{
	int n;
	int *ValAleat;
	
	public :
		Hasard(int, int);
		void Afficher();
		~Hasard();
};

Hasard :: Hasard(int Nb, int max){
	n=Nb;
	ValAleat = new int[n];
	
	for(int i=0; i<n; i++) ValAleat[i] = rand()%(max+1);
}
Hasard :: ~Hasard(){
	delete ValAleat;
}

void Hasard :: Afficher(){
	for(int i=0; i<n; i++) cout << ValAleat[i] << " ";
	cout << "\n";
}

int main(){
	Hasard H(10,10),D(5,20);
	
	H.Afficher();
	D.Afficher();
	
	return 0;
}
