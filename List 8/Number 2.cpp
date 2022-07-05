#include <iostream>
#include <locale.h>
using namespace std;

//Definindo os tipos
enum TState {AC=1,AL,AP,AM,BA,CE,ES,GO,MA,MT,MS,MG,PA,PB,PR,PE,PI,RJ,RN,RS,RO,RR,SC,SP,SE,TO};
struct Taddress
{
	string city;
	string neighborhood;
	enum TState state;
	bool district;
	int number;
	int cep;
};

string TStatetoString(TState s)
{
	switch(s)
	{
		case AC: return("Acre");
		break;
		case AL: return("Alagoas");
		break;
		case AP: return("Amap�");
		break;
		case AM: return("Amazonas");
		break;
		case BA: return("Bahia");
		break;
		case CE: return("Cear�");
		break;
		case ES: return("Esp�rito Santo");
		break;
		case GO: return("Goi�s");
		break;
		case MA: return("Maranh�o");
		break;
		case MT: return("Mato Grosso");
		break;
		case MS: return("Mato Grosso do Sul");
		break;
		case MG: return("Minas Gerais");
		break;
		case PA: return("Par�");
		break;
		case PB: return("Para�ba");
		break;
		case PR: return("Paran�");
		break;
		case PE: return("Pernambuco");
		break;
		case PI: return("Piau�");
		break;
		case RJ: return("Rio de Janeiro");
		break;
		case RN: return("Rio Grande do Norte");
		break;
		case RS: return("Rio Grande do Sul");
		break;
		case RO: return("Rond�nia");
		break;
		case RR: return("Roraima");
		break;
		case SC: return("Santa Catarina");
		break;
		case SP: return("S�o Paulo");
		break;
		case SE: return("Sergipe");
		break;
		case TO: return("Tocantins");
	}
}

int main()
{	
	//Definindo a linguagem do programa
	setlocale(LC_ALL,"Portuguese");
	struct Taddress ad;
	int i=1,j,k=1,q=1;
	while(i>0)
	{
		cout<<"****MENU****\n";
		cout<<"0-n�o\n";
		cout<<"1-sim\n";
		cout<<"Voc� mora no distrito federal?Forne�a os valores n�mericos.\n";
		cin>>ad.district;
		if(ad.district==1)
		{
			while(k>0)
			{
				cout<<"Qual cidade voc� mora?\n";
				cin>>ad.city;
				cout<<"Qual bairro voc� mora?\n";
				cin>>ad.neighborhood;
				cout<<"Qual � o n�mero da sua casa?\n";
				cin>>ad.number;
				cout<<"Qual � o seu CEP?\n";
				cin>>ad.cep;
				if(ad.cep>99999999)
				{
					--k;
					--i;
				}
				else cout<<"\nForne�a os dados corretos\n";
			}
		}
		else
		{
			if(ad.district==0)
			{
				while(k>0)
				{
					while(q>0)
					{
						cout<<"****MENU****\n";
						cout<<"1-Acre\n";
						cout<<"2-Alagoas\n";
						cout<<"3-Amap�\n";
						cout<<"4-Amazonas\n";
						cout<<"5-Bahia\n";
						cout<<"6-Cear�\n";
						cout<<"7-Esp�rito Santos\n";
						cout<<"8-Goi�s\n";
						cout<<"9-Maranh�o\n";
						cout<<"10-Mato Grosso \n";
						cout<<"11-Mato Grosso do Sul\n";
						cout<<"12-Minas Gerais\n";
						cout<<"13-Par�\n";
						cout<<"14-Para�ba\n";
						cout<<"15-Paran�\n";
						cout<<"16-Pernambuco\n";
						cout<<"17-Piau�\n";
						cout<<"18-Rio de Janeiro\n";
						cout<<"19-Rio Grande do Norte\n";
						cout<<"20-Rio Grande do Sul\n";
						cout<<"21-Rond�nia\n";
						cout<<"22-Roraima\n";
						cout<<"23-Santa Catarina\n";
						cout<<"24-S�o Paulo\n";
						cout<<"25-Sergipe\n";
						cout<<"26-Tocantins\n";
						cout<<"Qual estado que voc� mora?Forne�a os valores n�mericos.\n";
						cin>>j;
						if(j<=26 && j>=1)
							--q;
						else cout<<"\nFORNE�A O VALOR CORRETO!\n";
					}
					ad.state=(TState)j;
					getchar();
					cout<<"Qual cidade voc� mora?\n";
					getline(cin,ad.city);
					cout<<"Qual bairro voc� mora?\n";
					getline(cin,ad.neighborhood);
					cout<<"Qual � o n�mero da sua casa?\n";
					cin>>ad.number;
					cout<<"Qual � o seu CEP?\n";
					cin>>ad.cep;
					if(ad.cep>99999999)
					{
						--k;
						--i;
					}
					else cout<<"\nForne�a os dados corretos\n";
				}
			}
			else cout<<"\nFORNE�A DADOS CORRETOS!\n";
		}
	}
	if(ad.district==1)
	{
		cout<<"Distrito federal"<<endl;
		cout<<"CIDADE: "<<ad.city<<endl;
		cout<<"BAIRRO: "<<ad.neighborhood<<endl;
		cout<<"N�MERO: "<<ad.number<<endl;
		cout<<"CEP: "<<ad.cep<<endl;
	}
	else
	{
		cout<<"ESTADO: "<<TStatetoString(ad.state)<<endl;
		cout<<"CIDADE: "<<ad.city<<endl;
		cout<<"BAIRRO: "<<ad.neighborhood<<endl;
		cout<<"N�MERO: "<<ad.number<<endl;
		cout<<"CEP: "<<ad.cep<<endl;
	}
	getchar();
	
}
