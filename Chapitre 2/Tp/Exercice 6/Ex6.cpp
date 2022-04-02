#include<iostream>
using namespace std;

class SuiteAr{
	private :
		int n;
		int *val;
		
	public :
		SuiteAr(int, int); // Constructeur
		~SuiteAr(); // Destructeur 
		void Afficher();
};

SuiteAr :: SuiteAr(int Nb , int mul){
	n=Nb;
	val = new int[n];
	for(int i=0; i<n; i++){
		val[i]= i*mul;
	}
}

SuiteAr :: ~SuiteAr(){
	delete val;
}

void SuiteAr :: Afficher(){
	for(int i=0; i < n; i++){
		cout << val[i] << " ";
	}
	
	cout << "\n";
}

int main(){
	SuiteAr U(10,4);
	SuiteAr V(6,2);
	
	U.Afficher();
	V.Afficher();
	return 0;
}
