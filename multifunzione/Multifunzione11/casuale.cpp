#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<math.h>
using namespace std;
const int DIM=99999;

void Casuale(int numero[DIM]);

int main()
{
	int numero[DIM];
	
	system("color b");
	Casuale(numero);
	
	system("pause");
	return 0;
}

void Casuale(int numero[DIM])
{
	int n,nc, l;
	
	srand((unsigned)time(NULL));
	
	cout<<"quanti numeri vuoi generare"<<endl;
	cin>>l;
	
	for(int i=0;i<l;i++)
	{
		cout<<" "<<endl;
		cout<<"inserisci il numero intero minimo dell' intervallo dei numeri casuali del "<<i+1<<" numero"<<endl;
		cin>>nc;
		cout<<" "<<endl;
		cout<<"inserisci il numero intero massimo dell' intervallo dei numeri casuali del "<<i+1<<" numero"<<endl;
		cin>>n;
	
		if(n<nc)
		{	
			numero[i]=rand()%(nc-n)+n;
			cout<<" "<<endl;
			cout<<"il "<<i+1<<" numero casuale e'"<<endl;
			cout<<numero[i]<<endl;
			cout<<" "<<endl;
		}	
		else
		{
			numero[i]=rand()%(n-nc)+nc;
			cout<<" "<<endl;
			cout<<"il "<<i+1<<" numero casuale e'"<<endl;
			cout<<numero[i]<<endl;
			cout<<endl;
		}		
	}
}
