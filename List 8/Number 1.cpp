#include <iostream>
#include <locale.h>
using namespace std;

typedef enum Tcivil_{solteiro=1,casado,viuvo,separado,desquitado}Tcivil;
typedef enum Tsexo_{masculino=1,feminino}Tsexo;
typedef struct Tcadastro_{
	Tcivil c;
	Tsexo s;
}Tcadastro;

string TcivilparaString(Tcivil c)
{
	switch(c)
	{
		case solteiro: return("Solteiro");
		break;
		case casado: return("Casado");
		break;
		case viuvo: return ("Viúvo");
		break;
		case separado: return("Separado");
		break;
		case desquitado: return ("Desquitado");
		break;
	}
}
string TsexoparaString(Tsexo s)
{
	switch(s)
	{
		case masculino: return("Masculino");
		break;
		case feminino: return("Feminino");
		break;
	}
}
int Verificacao(Tcadastro ca)
{
	if(ca.s==1)
	{
		switch(ca.c)
		{
			case solteiro: return 1;
			break;
			case casado: return 2;
			break;
			case viuvo: return 3;
			break;
			case separado: return 4;
			break;
			case desquitado: return 5;
			break;
			default:return -1;
		}	
	}	
	else
	{
		if(ca.s==2)
		{
			switch(ca.c)
			{
				case solteiro: return 1;
				break;
				case casado: return 2;
				break;
				case viuvo: return 3;
				break;
				case separado: return 4;
				break;
				case desquitado: return  5;
				default:return -1;
				break;
			}
		}	
		else return -1;
	}
}

int main()
{
	//Definindo a localidade da língua do programa
	setlocale(LC_ALL,"Portuguese");
	int i=1,j;
	Tcadastro cadastro; 
	while(i>0)
	{
		//Menu de orientação 
		cout<<"****MENU****\n\n";
		cout<<"1-Solteiro\n";
		cout<<"2-Casado\n";
		cout<<"3-Viúvo\n";
		cout<<"4-Separado\n";
		cout<<"5-Desquitado\n";
		cout<<"Escolha um número que relacione ao seu estado civil: ";
		cin>>j;
		cadastro.c=(Tcivil)j;
		
		cout<<"\n1-Masculino\n";
		cout<<"2-Feminino\n";
		cout<<"Escolha um número que relacione ao seu sexo: ";
		cin>>j;
		cadastro.s=(Tsexo)j;
		if(Verificacao(cadastro)==-1)
			cout<<"\nInsirá valores corretos!\n\n";
		else --i;
	}	
	//Mostrando as informações dadas para o usuário
	cout<<"Estado civil: "<<TcivilparaString(cadastro.c)<<endl;
	cout<<"Sexo: "<<TsexoparaString(cadastro.s);
	getchar();
}

