#include<iostream>
#include<string>
using namespace std;

int main(){
	int n;
	string Tc;
	char c;
	float x;
	
	cout << "Saisir un entier : ";
	cin >> n;
	
	cout << "Saisir un réel : ";
	cin >> x;
	
	cout << n << " " << x << " ";
	cin.ignore();
	
	cout << "Saisir une phrase : ";
    getline(cin,Tc);
    
    	cout << Tc << " " << c << "\n" ;

//	cout << "Saisir une lettre : ";
//	cin >> c;
	

	
	
	return 0;
}
