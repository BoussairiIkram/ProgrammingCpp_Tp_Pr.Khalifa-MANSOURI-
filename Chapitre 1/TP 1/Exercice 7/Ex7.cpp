#include<iostream>
using namespace std;

//La Surdéfinition
void Afficher(double x, int n=0){
	double P=1;
	
	for(int i = 1; i<=n; i++ ){
		P=P*x;
	}	

   cout << x << " ^ " << n << " = " << P << endl;
}

void Afficher(int n, float x=0){
	int P=1;
	
	for(int i = 1; i<=n; i++ ){
		P=P*x;
	}	
	
	 cout << x << " ^ " << n << " = " << P << endl;
}


int main(){
	
	Afficher(13.3, 2);
	Afficher(12.22);
	
	Afficher(2, 3.9);
	Afficher(2);
	
	return 0;
}
