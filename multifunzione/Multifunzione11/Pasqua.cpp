#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<math.h>
using namespace std;

void Pasqua();

int main()
{
	system("color e");
	Pasqua();
	
	system("pause");
	return 0;
}

void Pasqua()
{
	int anno, anno_corrennte,a=0,b=0,c=0,d3=0,e=0,f=0;
	
	cout<<"inserisci l'anno in relazione al quale cercare il giorno della Pasqua"<<endl;
	cin>>anno;
	cout<<" "<<endl;
	cout<<"inserisci l'anno corrente"<<endl;
	cin>>anno_corrennte;
	
	a=anno%19;
	b=anno%4;
	c=anno%7;
	d3=((19*a)+24)%30;
	e=((2*b)+(4*c)+(6*d3)+5)%7;
	f=d3+e;
	
	if(anno<anno_corrennte)
	{
		if((d3==28) && (e==6))
		{
			cout<<" "<<endl;
			cout<<"il giorno di Pasqua nell' anno "<<anno<<" e' stato  il 18 Aprile"<<endl;
		} 
		else 
		{
			if((d3==29) && (e==6))
		 	{
				cout<<" "<<endl;
				cout<<"il giorno di Pasqua nell' anno "<<anno<<"e' stato il 19 Aprile"<<endl;
     	 	}
	
    			else 
    			{
   					if(f<=9)
      				{
						cout<<" "<<endl;
						cout<<"il giorno di Pasqua nell' anno "<<anno<<" e' stato il "<<f+22<<" "<<"Marzo"<<endl;
	  				}
					else
	  				{			
	    				cout<<" "<<endl;
        				cout<<"il giorno di Pasqua nell' anno "<<anno<<" e' stato il "<<f-9<<" "<<"Aprile"<<endl;
	  				}
	  			}
		}
	}
	else
	{
		if((d3==28) && (e==6))
		{
			cout<<" "<<endl;
			cout<<"il giorno di Pasqua nell' anno "<<anno<<" sara' il 18 Aprile"<<endl;
		} 
			else 
		{
			if((d3==29) && (e==6))
		 	{
				cout<<" "<<endl;
				cout<<"il giorno di Pasqua nell' anno "<<anno<<"sara' il 19 Aprile"<<endl;
     	 	}
			else 
    		{
   				if(f<=9)
      			{
					cout<<" "<<endl;
					cout<<"il giorno di Pasqua nell' anno "<<anno<<" sara' il "<<f+22<<" "<<"Marzo"<<endl;
	  			}
				else
	  			{
	    			cout<<" "<<endl;
        			cout<<"il giorno di Pasqua nell' anno "<<anno<<" sara' il "<<f-9<<" "<<"Aprile"<<endl;
	  			}
	  		}
		}
	}			
	cout<<" "<<endl;
}
