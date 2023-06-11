#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<math.h>
using namespace std;

int Casuale();
int Testa();
int Dadi();
int Pasqua();
int Tabelline();
float radice_quadrata();
float radice_nsima();
float Eredita();
float Fattoriale();
int Menu();

int main()
{
    int s, n, numero, t, d, rd, d2, anno,  anno_corrennte, a=0, b=0, c=0, d3=0, e=0, f=0, nt, ft, tot,num2, fattoriale=1, i;
    float rq=0, num, rn=0, base, credito, credito2, credito4, credito6, credito8, credito10;
    string parola1, parola2, parola, parola3, parola4, parola5, parola6, parola7, parola8, parola9, parola10;
    
    do
    {
      s=Menu();
      switch(s)
      {   
	  	case 1:
	  			numero=Casuale();
	  			cout<<" "<<endl;
		  		cout<<"il numero casuale e'"<<endl;
				cout<<numero<<endl;
				cout<<" "<<endl;
				break; 
				
		case 2:
				t=Testa();
				cout<<" "<<endl;
				if(t==0)
					cout<<"E' USCITO TESTA"<<endl;
				else
					cout<<"E' USCITO CROCE"<<endl;
					
				cout<<" "<<endl;
				break;
				
		case 3:
				rd=Dadi();
				cout<<" "<<endl;
				cout<<"il numero generato e'"<<endl;
				cout<<rd<<endl;
				cout<<" "<<endl;
				break;
				
		case 4: 
				Pasqua();
				break;
				
		case 5:
				Tabelline();
				break;
		
		case 6:
				radice_quadrata();
				break;
				
		case 7:
				radice_nsima();
				break;
				
		case 8: 
				Eredita();
				break;
				
		case 9:
				Fattoriale();
				break;
    }
    }while(s!=0);
    
    cout<<" "<<endl;
    cout<<"FATTO DA NIC++"<<endl;
    cout<<" "<<endl;
    system("pause");
    return 0;
}

int Menu()
{
    int s;
    cout<<"1. GENERA UN NUMERO CASUALE"<<endl;
    cout<<"2. LANCIA UNA MONETA"<<endl;
    cout<<"3. LANCIA N DADI PER UNA VOLTA"<<endl;
    cout<<"4. CALCOLA LA DATA DI PASQUA"<<endl;
    cout<<"5. FAI LA TABELLINA "<<endl;
    cout<<"6. CALCOLA LA RADICE QUADRATA"<<endl;
    cout<<"7. CALCOLA LA RADICE N-SIMA"<<endl;
    cout<<"8. GIOCO DELL' EREDITA'"<<endl;
    cout<<"9. CALCOLO DEL FATTORIALE"<<endl;
    cout<<"0. USCITA"<<endl;
    cin>>s;
    return s;
    cout<<" "<<endl;
}

int Casuale()
{
	int n, numero;
	srand((unsigned)time(NULL));
	cout<<" "<<endl;
	cout<<"inserisci fino a che numero vuoi generare un numero casuale"<<endl;
	cin>>n;
	
	numero=rand()%(n-1)+1;
	return numero;
}

int Testa()
{
	int t;
	srand((unsigned)time(NULL));
	t=rand()%2;		
	return t;	
}

int Dadi()
{
	int d, rd, d2;
	cout<<" "<<endl;
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

int Pasqua()
{
	int anno, anno_corrennte,a=0,b=0,c=0,d3=0,e=0,f=0;
	
	cout<<" "<<endl;
	cout<<"inserisci l'anno da calcolare la Pasqua"<<endl;
	cin>>anno;
	
	cout<<" "<<endl;
	cout<<"inserisci l'anno corente"<<endl;
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

int Tabelline()
{
	int nt, ft, tot;
	cout<<" "<<endl;
	cout<<"inserisci un numero da fare la tabellina"<<endl;
	cin>>nt;
	cout<<" "<<endl;
	cout<<"inserisci fino a che numero fare la tabellina"<<endl;
	cin>>ft;
	cout<<" "<<endl;
	cout<<"la tabellina del "<<nt<<" e'"<<endl;	
	cout<<" "<<endl;
			
	for(int i=0;i<=ft;i++)
	{
		tot=i*nt;
		cout<<nt<<" * "<<i<<" = "<<tot<<endl;
	}
	cout<<" "<<endl;
}

float radice_quadrata()
{
	float num, rq=0;
	cout<<" "<<endl;
	cout<<"inserisci il numero da calcolare la radice quadrata"<<endl;
	cin>>num;
	rq=sqrt(num);
	cout<<" "<<endl;
	cout<<"la radice quadrata di "<<num<<" e'"<<endl;
	cout<<rq<<endl;
	cout<<" "<<endl;
}

float radice_nsima()
{
	float num,rn=0, base;
	cout<<" "<<endl;
	cout<<"inserisci il numero da calcolare la radice n-sima "<<endl;
	cin>>num;
	cout<<" "<<endl;
	cout<<"inserisci l'esponente da calcolare la radice"<<endl;
	cin>>base;
	cout<<" "<<endl;
	cout<<"la radice "<<base<<" di "<<num<<" e'"<<endl;
	rn=pow(num, 1.0/base);
	cout<<rn<<endl;
	cout<<" "<<endl;
}

float Eredita()
{
	string parola1, parola2, parola, parola3, parola4, parola5, parola6, parola7, parola8, parola9, parola10;
	float credito, credito2, credito4, credito6, credito8, credito10;
	
	cout<<" "<<endl;
	cout<<"GIOCO DELL' EREDITA'"<<endl;
	cout<<" "<<endl;
	
	cout<<"inserisci il tuo credito"<<endl;
	cin>>credito;
	cout<<" "<<endl;
	
	cout<<"PRIMA SCELTA"<<endl;
	cout<<" "<<endl;
	
	cout<<"inserisci prima parola"<<endl;
	cin>>parola1;
	cout<<" "<<endl;
	cout<<"inserisci seconda parola"<<endl;
	cin>>parola2;
	
	cout<<" "<<endl;
	cout<<"scegli la parola tra "<<parola1<<" e "<<parola2<<endl;
	cin>>parola;
	
	if(parola==parola1)
	{
		credito2=credito;
		cout<<" "<<endl;
		cout<<"il tuo credito e' "<<credito2<<endl;
		cout<<" "<<endl;
		cout<<"la parola giusta e'"<<endl;
		cout<<parola1<<endl;
		cout<<" "<<endl;
	}
	else
	{
		credito2=credito/2;	
		cout<<" "<<endl;
		cout<<"il tuo credito e' "<<credito2<<endl;
		cout<<" "<<endl;
		cout<<"la parola giusta e'"<<endl;
		cout<<parola1<<endl;
		cout<<" "<<endl;
	}
	cout<<" "<<endl;
	cout<<"la parola e'"<<endl;
	cout<<parola1<<endl;
	cout<<" "<<endl;
	
	cout<<"SECONDA SCELTA"<<endl;
	cout<<" "<<endl;
	
	cout<<"inserisci prima parola"<<endl;
	cin>>parola3;
	cout<<" "<<endl;
	cout<<"inserisci seconda parola"<<endl;
	cin>>parola4;
	
	cout<<" "<<endl;
	cout<<"scegli la parola tra "<<parola3<<" e "<<parola4<<endl;
	cin>>parola;
	
	if(parola==parola3)
	{
		credito4=credito2;
		cout<<" "<<endl;
		cout<<"il tuo credito e' "<<credito4<<endl;
		cout<<" "<<endl;
		cout<<"la parola giusta e'"<<endl;
		cout<<parola3<<endl;
		cout<<" "<<endl;
	}
	else
	{
		credito4=credito2/2;
		cout<<" "<<endl;
		cout<<"il tuo credito e' "<<credito4<<endl;
		cout<<" "<<endl;
		cout<<"la parola giusta e'"<<endl;
		cout<<parola3<<endl;
		cout<<" "<<endl;
	}
	cout<<"le parole sono"<<endl;
	cout<<parola1<<endl;
	cout<<parola3<<endl;
	cout<<" "<<endl;
	
	cout<<"TERZA SCELTA"<<endl;
	cout<<" "<<endl;
	
	cout<<"inserisci prima parola"<<endl;
	cin>>parola5;
	cout<<" "<<endl;
	cout<<"inserisci seconda parola"<<endl;
	cin>>parola6;
	
	cout<<" "<<endl;
	cout<<"scegli la parola tra "<<parola5<<" e "<<parola6<<endl;
	cin>>parola;
	
	if(parola==parola6)
	{
		credito6=credito4;
		cout<<" "<<endl;
		cout<<"il tuo credito e' "<<credito6<<endl;
		cout<<" "<<endl;
		cout<<"la parola giusta e'"<<endl;
		cout<<parola6<<endl;
		cout<<" "<<endl;
	}
	else
	{
		credito6=credito4/2;
		cout<<" "<<endl;
		cout<<"il tuo credito e' "<<credito6<<endl;
		cout<<" "<<endl;
		cout<<"la parola giusta e'"<<endl;
		cout<<parola6<<endl;
		cout<<" "<<endl;
	}
	cout<<"la parole  sono"<<endl;
	cout<<parola1<<endl;
	cout<<parola3<<endl;
	cout<<parola6<<endl;
	cout<<" "<<endl;
	
	cout<<"QUARTA SCELTA"<<endl;
	cout<<" "<<endl;
	
	cout<<"inserisci prima parola"<<endl;
	cin>>parola7;
	cout<<" "<<endl;
	cout<<"inserisci seconda parola"<<endl;
	cin>>parola8;
	
	cout<<" "<<endl;
	cout<<"scegli la parola tra "<<parola7<<" e "<<parola8<<endl;
	cin>>parola;
	
	if(parola==parola8)
	{
		credito8=credito6;
		cout<<" "<<endl;
		cout<<"il tuo credito e' "<<credito8<<endl;
		cout<<" "<<endl;
		cout<<"la parola giusta e'"<<endl;
		cout<<parola8<<endl;
		cout<<" "<<endl;
	}
	else
	{
		credito8=credito6/2;
		cout<<" "<<endl;
		cout<<"il tuo credito e' "<<credito8<<endl;
		cout<<" "<<endl;
		cout<<"la parola giusta e'"<<endl;
		cout<<parola8<<endl;
		cout<<" "<<endl;
	}
	cout<<"la parole  sono"<<endl;
	cout<<parola1<<endl;
	cout<<parola3<<endl;
	cout<<parola6<<endl;
	cout<<parola8<<endl;
	cout<<" "<<endl;

	cout<<"QUINTA E ULTIMA SCELTA"<<endl;
	cout<<" "<<endl;
	
	cout<<"inserisci prima parola"<<endl;
	cin>>parola9;
	cout<<" "<<endl;
	cout<<"inserisci seconda parola"<<endl;
	cin>>parola10;
	
	cout<<" "<<endl;
	cout<<"scegli la parola tra "<<parola9<<" e "<<parola10<<endl;
	cin>>parola;
	
	if(parola==parola9)
	{
		credito10=credito8;
		cout<<" "<<endl;
		cout<<"il tuo credito e' "<<credito10<<endl;
		cout<<" "<<endl;
		cout<<"la parola giusta e'"<<endl;
		cout<<parola9<<endl;
		cout<<" "<<endl;
	}
	else
	{
		credito10=credito8/2;
		cout<<" "<<endl;
		cout<<"il tuo credito e' "<<credito10<<endl;
		cout<<" "<<endl;
		cout<<"la parola giusta e'"<<endl;
		cout<<parola9<<endl;
		cout<<" "<<endl;
	}
	cout<<"la parole  sono"<<endl;
	cout<<parola1<<endl;
	cout<<parola3<<endl;
	cout<<parola6<<endl;
	cout<<parola8<<endl;
	cout<<parola9<<endl;
	cout<<" "<<endl;
	
	cout<<"il tuo credito finale e'"<<endl;
	cout<<credito10<<endl;
	cout<<" "<<endl;
}

float Fattoriale()
{
	int num2,fattoriale=1, i;
	
	cout<<" "<<endl;
	cout<<"inserisci il numero"<<endl;
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
