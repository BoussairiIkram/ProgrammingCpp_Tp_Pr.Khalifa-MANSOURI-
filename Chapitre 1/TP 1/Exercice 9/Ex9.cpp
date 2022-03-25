#include<iostream>
using namespace std;

struct essai{
	int n;
	float x;
};

void Remise_a_zero(struct essai &e){
	e.n=0;
	e.x=0.0;
}


int main(){
	struct essai v={12, 13.4};
	
	cout << " n = " << v.n << " x = " << v.x << endl;
	
	cout << "Apres Echange : " ;
    Remise_a_zero(v);
    
	cout << " n = " << v.n << " x = " << v.x << endl;  
	
	return 0;
}
