#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<math.h>
using namespace std;
const int DIM=99999;

void Valore_assoluto(float valore_assoluto[DIM]);

int main()
{
	float valore_assoluto[DIM];
	
	system("color b");
	Valore_assoluto(valore_assoluto);
	
	system("pause");
	return 0;
}

void Valore_assoluto(float valore_assoluto[DIM])
{
	int l, nva;
	
	cout<<"inserisci quanti valori assoluti vuoi trovare"<<endl;
	cin>>l;
	
	for(int i=0;i<l;i++)
	{
		cout<<"inserisci il "<<i+1<<" valore assoluto"<<endl;
		cin>>valore_assoluto[i];
	
		if(valore_assoluto[i]>=0)
		{
			nva=valore_assoluto[i];
			cout<<" "<<endl;
			cout<<"il valore assoluto di "<<valore_assoluto[i]<<" e' "<<nva<<endl;
			cout<<" "<<endl;
		}
		else
		{
			cout<<" "<<endl;
			nva=valore_assoluto[i]*(-1);
			cout<<"il valore assoluto di "<<valore_assoluto[i]<<" e' "<<nva<<endl;
			cout<<" "<<endl;
		}		
	}
}
