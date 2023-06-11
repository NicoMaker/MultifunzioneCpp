#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<math.h>
using namespace std;

void radice_quadrata();

int main()
{
	system("color b");
	radice_quadrata();
	
	system("pause");
	return 0;
}

void radice_quadrata()
{
	float num, rq=0;
	cout<<"inserisci il numero di cui voglio ricavare la radice quadrata"<<endl;
	cin>>num;
	rq=sqrt(num);
	cout<<" "<<endl;
	cout<<"la radice quadrata di "<<num<<" e'"<<endl;
	cout<<rq<<endl;
	cout<<" "<<endl;
}
