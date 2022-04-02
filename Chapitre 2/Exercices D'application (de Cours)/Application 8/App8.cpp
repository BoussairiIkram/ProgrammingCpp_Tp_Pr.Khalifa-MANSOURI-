#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

class Compteur{
	private:
	static int ctr=0;
	
	public :
		Compteur();
		~Compteur();
};

Compteur ::  Compteur(){
	ctr++;
	cout << ctr << endl;
}

Compteur :: ~Compteur(){
	ctr--;
	cout << ctr << endl;
}

void Test(){
	Compteur c;
}
int main(){
	Compteur T;
	
	Test();
	
	return 0;
}
