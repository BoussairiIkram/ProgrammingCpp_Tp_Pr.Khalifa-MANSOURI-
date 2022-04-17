#include<iostream>
using namespace std;

class List{
	int Taille;
	float *adr;
	
	public :
		List(int);
		List(List &);
		~List();
};

List :: List(int T){
	Taille = T;
	adr = new  float(Taille);
	
	cout << "Constructeur : \n";
	cout << "Adresse de l'objet : " << this << endl;
	cout << "Adresse de la liste : " << adr << endl;
}

List :: List(List &v){
	Taille = v.Taille;
	adr = new float(Taille);
	
	for(int i =0; i< Taille ; i++){
		adr[i] = v.adr[i];
	}
	
	cout << "Constructeur par recopie : \n";
	cout << "Adresse de l'objet : " << this << endl;
	cout << "Adresse de list : " << adr<< endl;
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
