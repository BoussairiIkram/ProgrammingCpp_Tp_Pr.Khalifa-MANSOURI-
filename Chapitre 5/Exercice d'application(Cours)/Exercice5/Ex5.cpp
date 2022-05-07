#include<iostream>
#include<string.h>
using namespace std;

class chaine{
	int L;
	char *adr;
	
	public :
		chaine();
		chaine(char *);
		chaine(chaine &);
		
		void operator=(chaine );
		bool operator==(chaine );
		void operator+(chaine );
		char operator[](int);
		
		void afficher();
		
		~chaine();
};

chaine :: chaine(){
	L=0;
	adr=NULL;
}

chaine :: chaine(char *T){
	L= strlen(T);
	adr = new char[L+1];
	
	for(int i=0;i<L;i++)
		adr[i]= T[i];
}

chaine :: chaine(chaine &C){
	L = C.L;
	adr = new char[L+1];
	
	for(int i=0;i<L;i++)
		adr[i]= C.adr[i];
	
}

chaine ::  ~chaine(){
	delete adr;
}

void chaine :: afficher(){
	for(int i=0;i<L;i++)
		cout << adr[i];
	
	cout << "\n";
}

void chaine :: operator=(chaine C ){
	L=C.L;
	delete adr;
	adr= new char[L+1];
	
	for(int i=0;i<L;i++){
		adr[i] = C.adr[i];
	}
}

bool chaine :: operator==(chaine C){
	if(L != C.L) return false;
	for(int i=0; i< L ; i++){
		if(adr[i]!= C.adr[i]) return false;
	}
	
	return true;
}

void chaine :: operator+(chaine C){
	int n=L;
	char T[n+1];
	for(int i=0; i<L;i++)   
		 T[i]= adr[i];
		 
    L +=C.L +1;     
    delete adr;
    adr = new char[L]; 
	
	for(int i=0; i<n;i++)    
		 adr[i]= T[i];
	
	for(int i=n;i< L;i++)    
		adr[i]= C.adr[i-n];  
	
	
}

char chaine :: operator[](int i){
	return adr[i];
}


int main(){
	char T[6]="Hello";
	chaine a(T),b,c;
	
	a.afficher();
	
	b=a;
	b.afficher();

	a+b;
	a.afficher();
	return 0;
}
