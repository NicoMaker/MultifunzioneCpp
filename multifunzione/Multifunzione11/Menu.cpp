#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<windows.h>
using namespace std;

int Menu();

int main()
{
	int s;
	do
    {
      s=Menu();
      switch(s)
      {   
	  	case 1:
	  			ShellExecute (NULL, "open", "casuale.exe", NULL, NULL, SW_SHOW); 
	  			system("cls");
	  			break;
				
		case 2:
				ShellExecute (NULL, "open", "moneta.exe", NULL, NULL, SW_SHOW);
				system("cls");
				break;
				
		case 3:
				ShellExecute (NULL, "open", "dadi.exe", NULL, NULL, SW_SHOW);
				system("cls");
				break;
				
		case 4: 
				ShellExecute (NULL, "open", "Pasqua.exe", NULL, NULL, SW_SHOW);
				system("cls");
				break;
				
		case 5:
				ShellExecute (NULL, "open", "tabelline.exe", NULL, NULL, SW_SHOW);
				system("cls");
				break;
		
		case 6:
				ShellExecute (NULL, "open", "radice_quadrata.exe", NULL, NULL, SW_SHOW);
				system("cls");
				break;
				
		case 7:
				ShellExecute (NULL, "open", "radice_nsima.exe", NULL, NULL, SW_SHOW);
				system("cls");
				break;
				
		case 8: 
				ShellExecute (NULL, "open", "eredita.exe", NULL, NULL, SW_SHOW);
				system("cls");
				break;
				
		case 9:
				ShellExecute (NULL, "open", "Fattoriale.exe", NULL, NULL, SW_SHOW);
				system("cls");
				break;
				
		case 10: 
				ShellExecute (NULL, "open", "Valore_assoluto.exe", NULL, NULL, SW_SHOW);
				system("cls");
				break;
				
		case 11:
			    ShellExecute (NULL, "open", "logaritmo.exe", NULL, NULL, SW_SHOW);
			    system("cls");
				break;
		
		case 12:
				ShellExecute (NULL, "open", "Lettere_Casuali.exe", NULL, NULL, SW_SHOW);
				system("cls");
				break;
				
		case 13:
				ShellExecute (NULL, "open", "Info.exe", NULL, NULL, SW_SHOW);
				system("cls");
				break;
    }
    }while(s!=0);
    
    ShellExecute (NULL, "open", "Info.exe", NULL, NULL, SW_SHOW);
	system("cls");
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
