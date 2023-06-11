#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<math.h>
using namespace std;

void Tabelline();

int main()
{
	system("color f");
	Tabelline();
	
	system("pause");
	return 0;
}

void Tabelline()
{
	int nt, ft, tot;
	cout<<"inserisci un numero di cui voglio trovare la tabellina"<<endl;
	cin>>nt;
	cout<<" "<<endl;
	cout<<"inserisci fino a che numero vuoi ricavare la tabellina"<<endl;
	cin>>ft;
	cout<<" "<<endl;
	cout<<"la tabellina del "<<nt<<" e'"<<endl;	
	cout<<" "<<endl;
	
	if(ft>=0)
	{
		for(int i=0;i<=ft;i++)
		{
			tot=i*nt;
			cout<<nt<<" * "<<i<<" = "<<tot<<endl;
		}
		cout<<" "<<endl;
	}
	else
	{
		for(int i=0;i>=ft;i--)
		{
			tot=i*nt;
			cout<<nt<<" * "<<i<<" = "<<tot<<endl;
		}
		cout<<" "<<endl;
	}		
}
