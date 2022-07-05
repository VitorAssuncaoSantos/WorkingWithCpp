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
		case AP: return("Amapá");
		break;
		case AM: return("Amazonas");
		break;
		case BA: return("Bahia");
		break;
		case CE: return("Ceará");
		break;
		case ES: return("Espírito Santo");
		break;
		case GO: return("Goiás");
		break;
		case MA: return("Maranhão");
		break;
		case MT: return("Mato Grosso");
		break;
		case MS: return("Mato Grosso do Sul");
		break;
		case MG: return("Minas Gerais");
		break;
		case PA: return("Pará");
		break;
		case PB: return("Paraíba");
		break;
		case PR: return("Paraná");
		break;
		case PE: return("Pernambuco");
		break;
		case PI: return("Piauí");
		break;
		case RJ: return("Rio de Janeiro");
		break;
		case RN: return("Rio Grande do Norte");
		break;
		case RS: return("Rio Grande do Sul");
		break;
		case RO: return("Rondônia");
		break;
		case RR: return("Roraima");
		break;
		case SC: return("Santa Catarina");
		break;
		case SP: return("São Paulo");
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
		cout<<"0-não\n";
		cout<<"1-sim\n";
		cout<<"Você mora no distrito federal?Forneça os valores númericos.\n";
		cin>>ad.district;
		if(ad.district==1)
		{
			while(k>0)
			{
				cout<<"Qual cidade você mora?\n";
				cin>>ad.city;
				cout<<"Qual bairro você mora?\n";
				cin>>ad.neighborhood;
				cout<<"Qual é o número da sua casa?\n";
				cin>>ad.number;
				cout<<"Qual é o seu CEP?\n";
				cin>>ad.cep;
				if(ad.cep>99999999)
				{
					--k;
					--i;
				}
				else cout<<"\nForneça os dados corretos\n";
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
						cout<<"3-Amapá\n";
						cout<<"4-Amazonas\n";
						cout<<"5-Bahia\n";
						cout<<"6-Ceará\n";
						cout<<"7-Espírito Santos\n";
						cout<<"8-Goiás\n";
						cout<<"9-Maranhão\n";
						cout<<"10-Mato Grosso \n";
						cout<<"11-Mato Grosso do Sul\n";
						cout<<"12-Minas Gerais\n";
						cout<<"13-Pará\n";
						cout<<"14-Paraíba\n";
						cout<<"15-Paraná\n";
						cout<<"16-Pernambuco\n";
						cout<<"17-Piauí\n";
						cout<<"18-Rio de Janeiro\n";
						cout<<"19-Rio Grande do Norte\n";
						cout<<"20-Rio Grande do Sul\n";
						cout<<"21-Rondônia\n";
						cout<<"22-Roraima\n";
						cout<<"23-Santa Catarina\n";
						cout<<"24-São Paulo\n";
						cout<<"25-Sergipe\n";
						cout<<"26-Tocantins\n";
						cout<<"Qual estado que você mora?Forneça os valores númericos.\n";
						cin>>j;
						if(j<=26 && j>=1)
							--q;
						else cout<<"\nFORNEÇA O VALOR CORRETO!\n";
					}
					ad.state=(TState)j;
					getchar();
					cout<<"Qual cidade você mora?\n";
					getline(cin,ad.city);
					cout<<"Qual bairro você mora?\n";
					getline(cin,ad.neighborhood);
					cout<<"Qual é o número da sua casa?\n";
					cin>>ad.number;
					cout<<"Qual é o seu CEP?\n";
					cin>>ad.cep;
					if(ad.cep>99999999)
					{
						--k;
						--i;
					}
					else cout<<"\nForneça os dados corretos\n";
				}
			}
			else cout<<"\nFORNEÇA DADOS CORRETOS!\n";
		}
	}
	if(ad.district==1)
	{
		cout<<"Distrito federal"<<endl;
		cout<<"CIDADE: "<<ad.city<<endl;
		cout<<"BAIRRO: "<<ad.neighborhood<<endl;
		cout<<"NÚMERO: "<<ad.number<<endl;
		cout<<"CEP: "<<ad.cep<<endl;
	}
	else
	{
		cout<<"ESTADO: "<<TStatetoString(ad.state)<<endl;
		cout<<"CIDADE: "<<ad.city<<endl;
		cout<<"BAIRRO: "<<ad.neighborhood<<endl;
		cout<<"NÚMERO: "<<ad.number<<endl;
		cout<<"CEP: "<<ad.cep<<endl;
	}
	getchar();
	
}
