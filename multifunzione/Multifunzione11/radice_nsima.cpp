#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<math.h>
using namespace std;

void radice_nsima();

int main()
{
	system("color c");
	radice_nsima();
	
	system("pause");
	return 0;
}

void radice_nsima()
{
	float num,rn=0, base;
	cout<<"inserisci il numero di cui voglio calcolare la radice n-sima "<<endl;
	cin>>num;
	cout<<" "<<endl;
	cout<<"inserisci l'esponente di cui voglio calcolare la radice"<<endl;
	cin>>base;
	cout<<" "<<endl;
	cout<<"la radice "<<base<<" di "<<num<<" e'"<<endl;
	rn=pow(num, 1.0/base);
	cout<<rn<<endl;
	cout<<" "<<endl;
}
