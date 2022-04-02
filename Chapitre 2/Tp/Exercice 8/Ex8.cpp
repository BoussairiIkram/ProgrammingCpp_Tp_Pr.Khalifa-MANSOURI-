#include<iostream>
#include<cmath>
using namespace std;

class Complexe{
	double rel;
	double img;
	
	public:
	Complexe(double, double);
	Complexe(double);
	Complexe();
	double Module();
	void Afficher();
};

Complexe :: Complexe(double x, double y){
	rel=x;
	img=y;
}
Complexe :: Complexe(double a){
	rel=a;
	img=a;
}
Complexe :: Complexe(){
	rel=0;
	img=0;
}
double Complexe :: Module(){
    return sqrt(rel*rel+img*img);
}
void Complexe :: Afficher(){
	
	if(img!=0){
		if(rel<0)
		cout << img << "i" <<rel<< endl ;
		else if(rel>0) cout << img << "i+" <<rel << endl ;
		else cout << "0"<< endl;
	}
	else cout << rel<< endl;
}

int main(){
	Complexe A,B(2,-4),C(-3);
	
	A.Afficher();
	B.Afficher();
	C.Afficher();
	
	cout << "Module de A : " << A.Module() <<endl;
	cout << "Module de B : " << B.Module() <<endl;
	cout << "Module de C : " << C.Module() <<endl;
	
	return 0;
}
