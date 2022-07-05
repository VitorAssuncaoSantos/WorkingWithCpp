#include <iostream>
#include <string>
#include <locale.h>
using namespace std;

enum Tmes{Janeiro=1,Fevereiro, Marco, Abril, Maio, Junho, Julho, Agosto, Setembro, Outubro,Novembro, Dezembro
};

struct TData{
	int dia, ano;
	enum Tmes mes;
};

int AnoBissexto(int ano)
{
	if(ano%4==0&&ano%100!=0||ano%400==0)
		return 1;
	else return 0;
}

string TMesParaTexto(enum Tmes mes)
{
	switch(mes)
	{
		case Janeiro: return("Janeiro");
		break;
		case Fevereiro:return("Fevereiro");
		break;
		case Marco:return("Março");
		break;
		case Abril: return ("Abril");
		break;
		case Maio: return ("Maio");
		break;
		case Junho: return ("Junho");
		break;
		case Julho: return ("Julho");
		break;
		case Agosto: return ("Agosto");
		break;
		case Setembro: return ("Setembro");
		break;
		case Outubro: return ("Outubro");
		break;
		case Novembro: return ("Novembro");
		break;
		case Dezembro: return ("Dezembro");
		break;		
	}
}

int ValidaData(struct TData data)//0=fals0  1=verdadeiro
{
	switch(data.mes)
	{
		case Janeiro:
		case Marco:
		case Maio:
		case Julho:
		case Agosto:
		case Outubro:
		case Dezembro: if (data.dia<=31)
							return 1;
						else return 0;
		case Abril:
		case Junho:
		case Setembro:
		case Novembro: if(data.dia<=30)
							return 1;
						else return 0;
		case Fevereiro: if(AnoBissexto(data.ano))
						{
							if(data.dia<=29)
								return 1;
							else return 0;
						}
						else
						{
							if(data.dia<=28)
								return 1;
							else return 0;
						}
		default: return 0;						
	}
}

main()
{
	setlocale(LC_ALL, "portuguese");
	int i,j=1;
	struct Tpessoa{
		string nome;
		struct TData dataDeNascimento;
	}pessoa;
	cout<<"Informe seu nome: ";
	getline(cin,pessoa.nome);
	while(j>0)
	{
		cout<<pessoa.nome<<",informe dia, mês e ano de nascimento sepados por ENTER:";
		cout<<"\n\nAVISO: o mês deve ser escrito em algarismo sem caracteres especiais\n";
		cout<<"Dia:";
		cin>>pessoa.dataDeNascimento.dia;
		cout<<"Mês:";
		cin>>i;
		pessoa.dataDeNascimento.mes=(Tmes)i;
		cout<<"Ano:";
		cin>>pessoa.dataDeNascimento.ano;
		if(ValidaData(pessoa.dataDeNascimento)==1)
		{
			cout<<"Você nasceu em "<<pessoa.dataDeNascimento.dia<<" de "<<TMesParaTexto(pessoa.dataDeNascimento.mes)<<" de "<<pessoa.dataDeNascimento.ano;
			--j;
		}
		else cout<<"Data inválida! Forneça uma data correta!";
	}
	getchar();
}
