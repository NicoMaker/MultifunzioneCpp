#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<math.h>
using namespace std;
const int DIM=99999;

void Casuale(int numero[DIM]);
void Testa(int t[DIM]);
int Dadi();
void Pasqua();
void Tabelline();
void radice_quadrata();
void radice_nsima();
void Eredita();
void Fattoriale();
void Valore_assoluto(float valore_assoluto[DIM]);
void Logarirmo();
void Lettere_Casuali();
void Info();
int Menu();

int main()
{
    int s, n, t[DIM], d, rd, d2, anno,  anno_corrennte, a=0, b=0, c=0, d3=0, e=0, f=0, nt, ft, tot,num2, fattoriale=1, i, nc, numero[DIM];
    float rq=0, num, rn=0, base, credito, credito2, credito4, credito6, credito8, credito10,nva, valore_assoluto[DIM];
    string parola1, parola2, parola, parola3, parola4, parola5, parola6, parola7, parola8, parola9, parola10;
    
    do
    {
      s=Menu();
      switch(s)
      {   
	  	case 1:
	  			system("cls");
	  			system("color b");
	  			Casuale(numero);
				break; 
				
		case 2:
				system("cls");
				system("color c");
				Testa(t);
				break;
				
		case 3:
				system("cls");
				system("color d");
				rd=Dadi();
				cout<<"il numero generato dal lancio dei dadi e'"<<endl;
				cout<<rd<<endl;
				cout<<" "<<endl;
				break;
				
		case 4: 
				system("cls");
				system("color e");
				Pasqua();
				break;
				
		case 5:
				system("cls");
				system("color f");
				Tabelline();
				break;
		
		case 6:
				system("cls");
				system("color b");
				radice_quadrata();
				break;
				
		case 7:
				system("cls");
				system("color c");
				radice_nsima();
				break;
				
		case 8: 
				system("cls");
				system("color d");
				Eredita();
				break;
				
		case 9:
				system("cls");
				system("color e");
				Fattoriale();
				break;
				
		case 10: 
				system("cls");
				system("color b");
				Valore_assoluto(valore_assoluto);
				break;
				
		case 11:
			    system("cls");
			    system("color c");
			    Logarirmo();
			    cout<<endl;
			    break;
		
		case 12:
				system("cls");
				Lettere_Casuali();
				cout<<endl;
				break;
				
		case 13:
				system("cls");
				cout<<endl;
				Info();
				cout<<endl;
    }
    }while(s!=0);
    
    system("cls");
    system("color f");
    cout<<""<<endl;
    Info();
    cout<<endl;
    system("pause");
    return 0;
}

int Menu()
{
	system("color a");
    int s;
    cout<<endl;
    cout<<"<<<<<<<<<<<<<<|ELENCO FUNZIONALITA' APP MULTIFUNZIONE|>>>>>>>>>>>>>>>>>>"<<endl;
    cout<<endl;
    cout<<"1. GENERA N NUMERI CASUALI"<<endl;
    cout<<"2. LANCIA N MONETE"<<endl;
    cout<<"3. LANCIA N DADI PER UNA VOLTA"<<endl;
    cout<<"4. CALCOLA LA DATA DI PASQUA"<<endl;
    cout<<"5. FAI LA TABELLINA "<<endl;
    cout<<"6. CALCOLA LA RADICE QUADRATA"<<endl;
    cout<<"7. CALCOLA LA RADICE N-SIMA"<<endl;
    cout<<"8. GIOCO DELL' EREDITA'"<<endl;
    cout<<"9. CALCOLO DEL FATTORIALE"<<endl;
    cout<<"10. CALCOLO N VALORI ASSOLUTI"<<endl;
    cout<<"11. CALCOLO LOGARITMO IN BASE 10 E IN BASE E"<<endl;
    cout<<"12. GENERAZIONE LETTERE CASUALI"<<endl;
    cout<<"13. INFORMAZIONI APP"<<endl;
    cout<<"0. USCITA"<<endl;
    cin>>s;
    return s;
    cout<<" "<<endl;
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

void radice_nsima()
{
	float num,rn=0, base;
	cout<<"inserisci il numero di cui voglio calcolare la radice n-sima "<<endl;
	cin>>num;
	cout<<" "<<endl;
	cout<<"inserisci l'esponente di cui voglio calcolare la radice"<<endl;
	cin>>base;
	cout<<" "<<endl;
	cout<<"la radice "<<base<<" di "<<num<<" e'"<<endl;
	rn=pow(num, 1.0/base);
	cout<<rn<<endl;
	cout<<" "<<endl;
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

void Logarirmo()
{
	double numero,esponente, loga, numero2, base,loga2;
	
	cout<<"inserisci il numero del logaritmo:"<<endl;
	cin>>numero;
	cout<<"inserisci l'esponente da elevare il numero:"<<endl;
	cin>>esponente;
	
	numero2=pow(numero,esponente);
	
	loga=log10(numero2);
	loga2=log(numero2);
	
	cout<<"il logaritmo in base 10 "<<" di "<<numero2<< " e': "<<loga<<endl;
	cout<<"il logaritmo in base E "<<" di "<<numero2<< " e': "<<loga2<<endl;
}

void Lettere_Casuali()
{
	srand((unsigned)time(NULL));
	int numero;
	
	numero=rand()%(25);
	numero=numero+1;
	
	if(numero==1)
	{
	    cout<<"la lettera e' la A"<<endl;
	}
	else
	{
		if(numero==2)
		{
			cout<<"la lettera e' la B"<<endl;
		}
		else
		{
			if(numero==3)
		    {
		 	  cout<<"la lettera e' la C"<<endl;
		    }
			else
			  if(numero==4)   
			  {
				cout<<"la lettera e' la D"<<endl;
			  }
			  else
			  {
			  	if(numero==5)
			  	{
			  		cout<<"la lettera e' la E"<<endl;
				}
				else
				{
					if(numero==6)
					{
						cout<<"la lettera e' la F"<<endl;
					}
					else
					{
						if(numero==7)
						{
							cout<<"la lettera e' la G"<<endl;
						}
						else
						{
							if(numero==8)
							{
								cout<<"la lettera e' la H"<<endl;
							}
							else
							{
								if(numero==9)
								{
									cout<<"la lettera e' la I"<<endl;
								}
								else
								{
									if(numero==10)
									{
										cout<<"la lettera e' la J"<<endl;
									}
									else
									{
										if(numero==11)
										{
											cout<<"la lettera e' la K"<<endl;
										}
										else
										{
											if(numero==12)
											{
												cout<<"la lettera e' la L"<<endl;
											}
											else
											{
												if(numero==13)
												{
													cout<<"la lettera e' la M"<<endl;
												}
												else
												{
													if(numero==14)
													{
														cout<<"la lettera e' la N"<<endl;
													}
													else
													{
														if(numero==15)
														{
															cout<<"la lettera e' la O"<<endl;
														}
														else
														{
															if(numero==16)
															{
																cout<<"la lettera e' la P"<<endl;
															}
															else
															{
																if(numero==17)
																{
																	cout<<"la lettera e' la Q"<<endl;
																}
																else
																{
																	if(numero==18)
																	{
																		cout<<"la lettera e' la R"<<endl;
																	}
																	else
																	{
																		if(numero==19)
																		{
																			cout<<"la lettera e' la S"<<endl;
																		}
																		else
																		{
																			if(numero==20)
																			{
																				cout<<"la lettera e' la T"<<endl;
																			}
																			else
																			{
																				if(numero==21)
																				{
																					cout<<"la lettera e' la U"<<endl;
																				}
																				else
																				{
																					if(numero==22)
																					{
																						cout<<"la lettera e' la V"<<endl;
																					}
																					else
																					{
																						if(numero==23)
																						{
																							cout<<"la lettera e' la X"<<endl;
																						}
																						else
																						{
																							if(numero==24)
																							{
																								cout<<"la lettera e' la Y"<<endl;
																							}
																							else
																							{
																								if(numero==25)
																								{
																									cout<<"la lettera e' la W"<<endl;
																								}
																								else
																								{
																									cout<<"la lettera e' la Z"<<endl;
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}	
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			  }
		}
	}
}

void Info()
{
	cout<<"APP MULTIFUNZIONE INFORMAZZIONI"<<endl;
	cout<<endl;
	cout<<"l'app ha la versione numero 10"<<endl;
	cout<<"lo sviluppatore e' NIC++"<<endl;
	cout<<"il linguaggio utilizzato e' C++"<<endl;
	cout<<"l'app e' stata realizzata dal 09 Marzo 2019 al 31 Ottobre 2019"<<endl;
}
