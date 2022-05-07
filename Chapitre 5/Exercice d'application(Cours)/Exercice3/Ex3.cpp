#include<iostream>
using namespace std;

class Liste{
	int taille;
	float *adr;
	
	public :
		Liste(int); // Constructeur
	    Liste(Liste &); //Constructeur par recopie
		~Liste(); //Destricteur
		
		void saisie();
		void affiche();
		void operator=(Liste &); // surdeffinition de l'operateur =
		
};

Liste :: Liste(int n){
	taille =n;
	adr = new float[taille];
	
	cout << "Adresse de l'objet : " << this << "\n";
	cout << "Adresse de la liste : " << adr << "\n";
}

Liste :: Liste(Liste &v){
	taille=v.taille;
	adr = new float[taille];
	
	for(int i=0;i < taille; i++)
		adr[i]= v.adr[i];
	
	cout << "\n Constructeur par recopie : \n";
	cout << "Adresse de l'objet: " << this << "\n";
	cout << "Adresse de la liste : "<< adr << "\n";
}

void Liste :: saisie(){
	for(int i=0 ;i< taille ; i++){
		cout << "Entrer un nombre : ";
		cin >> adr[i];  // cin >> *(adr+i)
	}
}

void Liste :: affiche(){
	cout << "Adresse : " << this << "\n";
	for(int i=0;i< taille ; i++)
		cout << *(adr+i)<< " ";
	
	cout << "\n\n";
}

void Liste :: operator=(Liste &L){
	taille =L.taille;
	delete adr;
	adr = new float[taille];
	
	for(int i=0;i< taille ;i++)
	adr[i]=L.adr[i];
	
}

Liste :: ~Liste(){
	cout << "Destructeur l'objet d'adresse :" << this<< "\n";
	cout << "Adresse de Liste :" << adr << "\n";
	
	delete adr;
}

int main(){
	cout << "Debut Main() : \n";
	
	Liste a(5), b(2);
	a.saisie();
	a.affiche();
	
	b.saisie();
	b.affiche();
	
	b=a;
	
	b.affiche();
	a.affiche();
	
	return 0;
}
