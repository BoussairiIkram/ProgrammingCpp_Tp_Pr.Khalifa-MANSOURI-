#include<iostream>
using namespace std;
/*1- Fonction puissance ayant deux paramétres d'entrée x et n et permettant de
renvoyer la puissance niéme de x :X^n.
*/

double Puissance(double x, int n=4){
	double P=1;
	
	for(int i = 1; i<=n; i++ ){
		P=P*x;
	}	
	return P;
}

int Puissance(int x, int n=4){
	int P=1;
	
	for(int i = 1; i<=n; i++ ){
		P=P*x;
	}	
	return P;
}

int main(){
//2 : Test Appel de la Fonction Puissance
	cout << "3^3 = " << Puissance(3,3) << endl;
	cout << "14.3 ^ 2 = " << Puissance(14.3,2) << endl;
	cout << "5 ^ 6 = " << Puissance(5,6) << endl;
	cout << "123 ^ 0 = " << Puissance(1,0) << endl;
	cout << "13 ^ 1 = " << Puissance(13,1) << endl;

// 4 : Test Fonction Puissance, Par defaut : X^4 	
	cout << "13 ^ 4 = " << Puissance(13) << endl;

	return 0;
}
