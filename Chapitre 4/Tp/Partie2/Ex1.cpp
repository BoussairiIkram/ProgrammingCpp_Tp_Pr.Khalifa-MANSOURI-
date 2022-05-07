#include<iostream>
#include<string>
using namespace std;

// 1er Partie :

class Note{
	float Value;
	public : 
		void input();
		void print();
		void set(float);
		float get();
		string apprecier();	
};

void  Note :: input(){
	do{
		cout << "Entrez une Note : ";
		cin >> Value;
	}while( Value<0 || Value>20 );
}

void Note :: print(){
	cout << Value << endl;
}

void Note :: set(float N){
	Value = N;
}

float Note :: get(){
	return Value;
}

string Note :: apprecier(){
	string apr;
	if( Value >= 18){
		apr ="Exellent";return apr ;	
	} 
	else if( Value >= 16 ) {
		apr ="Trés Bien"; return apr ;
	}
	else if(Value>=14) {
		apr ="Bien"; return apr ;
	} 
	else if(Value>=12){
		apr ="Assez Bien"; return apr ;
	} 
	else if(Value>=10){
		apr ="Passable"; return apr ;
	} 
	 apr="Rattrapage";
	 return apr;
}


int main(){
		void Harmonise(Note &);
		float Moyenne(Note *, int);
		void Appreciation(Note *, int);
	 int n;
	 cout << "Entrez le nombre totale d'eleve :";
	 cin >> n;
	 
	 Note *Tab = new Note[n];
	 
	 for(int i=0; i < n ; i++)
	 	   Tab[i].input();
	
	cout << "\n" << Moyenne(Tab,n) << endl;
	
	Appreciation(Tab,n); 
	 	
	return 0;
}


void  Harmonise(Note &v){
	if(v.get() < 8) v.set(0) ;
	else v.set(8);
}

float Moyenne(Note *Tab, int n){
	float Somme=0;
	for(int i=0;i< n ;i++)
		Somme+=Tab[i].get();
		
	return (float) Somme/n;
}

void Appreciation(Note *Tab, int n){
	for(int i=0;i<n; i++)
		cout << Tab[i].apprecier() << "\n";
}
