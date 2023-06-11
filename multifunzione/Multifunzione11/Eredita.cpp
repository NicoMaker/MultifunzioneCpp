#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<math.h>
using namespace std;

void Eredita();

int main()
{
	system("color d");
	Eredita();
	
	system("pause");
	return 0;
}

void Eredita()
{
	string parola1, parola2, parola, parola3, parola4, parola5, parola6, parola7, parola8, parola9, parola10;
	float credito, credito2, credito4, credito6, credito8, credito10;
	
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
