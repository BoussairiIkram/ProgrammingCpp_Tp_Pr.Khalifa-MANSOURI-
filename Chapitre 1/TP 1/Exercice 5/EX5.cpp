#include<iostream>
#include<conio.h>
using namespace std;

void Test(int n=0, float x=2.5){
	cout << "Fonction N1 : " ;
	cout << "n = "<< n <<" x = " << x <<"\n" ;
}

void Test(float x=4.1, int n=2){
	cout << "Fonction N2 : " ;
	cout << "n = "<< n <<" x = " << x <<"\n" ;
}

int main(){
	int i = 5;
	float r=3.2;
	
	Test(i,r);   //Fonction N 1
	Test(r,i);  //Fonction N 2
	Test(i);   //Fonction N 1
	Test(r);  //Fonction N 2

//Les appels suivants, ambigues, sont rejetés par le compilateur	
	//Test();  
	//Test(i,i);
	//Test(r,r);
	return 0;
}
