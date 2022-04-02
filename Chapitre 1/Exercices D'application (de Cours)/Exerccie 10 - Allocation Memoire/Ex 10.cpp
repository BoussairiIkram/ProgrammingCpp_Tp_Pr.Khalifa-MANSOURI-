#include<iostream>
using namespace std;

int main(){
	int *ptr1, *ptr2, *ptr3;
	
	//Allocation dynamique d'un entier :
	ptr1 = new int;
	
	//Allocation dynamique d'un tableau de 10 entiers :
	ptr2 = new int  [10];
	
	//Allocation dynamique d'un entier avec initialisation :
	ptr3 = new int(10);

typedef struct date{
	int Jour,mois,an;
}Date;

Date *ptr4, *ptr5, *ptr6, d = {25,4,1952};

	//Allocation dynamique d'une structure :
	ptr4 = new Date;
	
	//Allocation dynamique d'un tableau de structure :
	ptr4 = new Date [10];
	
	//Allocation dynamique d'une structure avec initialisation:
    ptr4 = new Date(d);
    
	return 0; }
