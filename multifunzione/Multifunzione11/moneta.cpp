#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<math.h>
using namespace std;
const int DIM=99999;

void Testa(int t[DIM]);

int main()
{
	int t[DIM];
	system("color c");
	Testa(t);
	
	system("pause");
	return 0;
}

void Testa(int t[DIM])
{
	int l, croce=0,testa=0;
	
	srand((unsigned)time(NULL));
	cout<<"quante monete vuoi lanciare"<<endl;
	cin>>l;
	cout<<endl;
	
	for(int i=0;i<l;i++)
	{
		t[i]=rand()%2;		
	
		if(t[i]==0)
			testa++;
		else
		    croce++;
	}
	
	cout<<"Nei lanci delle monete sono risultati: "<<endl;
	cout<<"TESTA: "<<testa<<endl;
	cout<<"CROCE: "<<croce<<endl;	
	cout<<endl;
}
