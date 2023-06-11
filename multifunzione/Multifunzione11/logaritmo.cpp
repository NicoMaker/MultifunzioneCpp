#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<math.h>
using namespace std;

void Logarirmo();

int main()
{
	system("color c");
	Logarirmo();
	
	system("pause");
	return 0;
}

void Logarirmo()
{
	double numero,esponente, loga, numero2, base,loga2;
	
	cout<<"inserisci il numero del logaritmo:"<<endl;
	cin>>numero;
	
	esponente=1;
	
	numero2=pow(numero,esponente);
	
	loga=log10(numero2);
	loga2=log(numero2);
	
	cout<<"il logaritmo in base 10 "<<" di "<<numero2<< " e': "<<loga<<endl;
	cout<<"il logaritmo in base E "<<" di "<<numero2<< " e': "<<loga2<<endl;
}
