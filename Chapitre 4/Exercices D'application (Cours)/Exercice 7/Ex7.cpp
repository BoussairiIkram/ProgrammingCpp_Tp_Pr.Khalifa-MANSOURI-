#include<iostream>
using namespace std;

class List{
	int Taille;
	float *adr;
	
	public :
		List(int);
		~List();
};

List :: List(int T){
	Taille = T;
	adr = new  float(Taille);
	
	cout << "Constructeur : \n";
	cout << "Adresse de l'objet : " << this << endl;
	cout << "Adresse de la liste : " << adr << endl;
}

List :: ~List(){
	cout << "\nDestruction Adresse de l'objet : "<< this << endl;
	cout << "Adress de liste : " << adr << endl;
	
	delete adr;
}

int main(){
	List  a(3);
	List b=a;
	
	return 0;
}
