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
	if( Value >= 18) return "Exellent";
	else if( Value >= 16 ) return "Trés Bien";
	else if(Value>=14)  return "Bien";
	else if(Value>=12) return "Assez Bien";
	else if(Value>=10) return "Passable";
	
	 return "Rattrapage";
}

int main(){
	Note n;
	
	n.input();
	
	float nbr=n.get();
	cout << nbr << endl;
	
	n.set(20);
	n.print();
	
	 cout << n.apprecier() ;
	
	return 0;
}
