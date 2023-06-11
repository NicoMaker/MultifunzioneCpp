#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<math.h>
using namespace std;

void Fattoriale();

int main()
{
	system("color e");
	Fattoriale();
	
	system("pause");
	return 0;
}

void Fattoriale()
{
	int num2,fattoriale=1, i;
	
	cout<<"inserisci il numero da cui ricavare il fattoriale"<<endl;
	cin>>num2;
	i=num2;
	
	if(num2==0)
	{
		fattoriale=1;
	}
	
	while(num2>0)
	{
		fattoriale=fattoriale*num2;
		num2=num2-1;
	}
	
	cout<<" "<<endl;
	cout<<"il fattoriale di "<<i<<" e' "<<endl;
	cout<<fattoriale<<endl;
	cout<<" "<<endl;
}
