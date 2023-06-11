#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<math.h>
using namespace std;

int Dadi();

int main()
{
	int rd;
	
	system("color d");
	rd=Dadi();
	cout<<"il numero generato dal lancio dei dadi e'"<<endl;
	cout<<rd<<endl;
	cout<<" "<<endl;
	
	system("pause");
	return 0;
}

int Dadi()
{
	int d, rd, d2;
	cout<<"inserisci quanti dadi vuoi lanciare"<<endl;
	cin>>d;
	d2=d*6;
	srand((unsigned)time(NULL));
	for(int i=0;i<d;i++)
	{
		rd=rand()%(d2-i)+1;
		rd=rd+i;
	}		
	return rd;
}
