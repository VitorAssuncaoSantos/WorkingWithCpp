#include <iostream>
#include <locale.h>
#include <conio.h>
using namespace std;

enum Tf{peao=1,bispo=3,cavalo=4,torre=7,rainha=10,rei=11};

enum  Tc{branco=-1,preto=1};

struct Tp{
	enum Tf fig;
	enum  Tc col;
};

string TpToString(struct Tp p)
{
	if(p.col==branco)
	{
		switch(p.fig)
		{
			case peao:return("Peao branco");
			break;
			case bispo: return("Bispo branco");
			break;
			case cavalo: return ("Cavalo branco");
			break;
			case torre: return ("Torre branca");
			break;
			case rainha: return ("Rainha branca");
			break;
			case rei:return ("Rei Branco");
			break;
			default: return("Nao existe essa peça");		
		}
	}
	else
	{
		if(p.col==preto)
		{
			switch(p.fig)
			{
				case peao: return("Peao preto");
				break;
				case bispo: return("Bispo preto");
				break;
				case cavalo: return ("Cavalo preto");
				break;
				case torre: return ("Torre preto");
				break;
				case rainha: return ("Rainha preta");
				break;
				case rei: return ("Rei preto");
				break;
				default: return ("Nao existe essa peça"); 
			}
		}
		return("Não existe existe essa peça");
	}	
}

int TpToInt(struct Tp p)
{
	if(p.col==branco)
	{
		switch(p.fig)
		{
			case peao:return -1;
			break;
			case bispo: return -3;
			break;
			case cavalo: return -4;
			break;
			case torre: return -7;
			break;
			case rainha: return -10;
			break;
			case rei: return -11;
			break;
			default: return 0;
		}	
	}
	else
	{
		if(p.col==preto)
		{
			switch(p.fig)
			{
				case peao: return 1;
				break;
				case bispo: return 3;
				break;
				case cavalo: return 4;
				break;
				case torre: return 7;
				break;
				case rainha: return 10;
				break;
				case rei: return 11;
				break;
				default: return 0;
			}
		}
		return 0;
	}	
}
main()
{
	setlocale(LC_ALL,"Portuguese");
	struct Tp peca;
	int k,m,j=2;
	while(j>1)
	{
	cout<<"*** MENU ****\n";
	cout<<"1--peão \n";
	cout<<"3--bispo \n";
	cout<<"4--cavalo \n";
	cout<<"7--torre \n";
	cout<<"10-rainha\n";
	cout<<"11-rei\n";
	cout<<"Escolha um valor númerico para a sua peça: ";
	cin>>k;
	peca.fig=(enum Tf)k;
	
	cout<<"\n\n*** MENU ****\n";
	cout<<"-1--branca \n";
	cout<<"1--preto \n";
	cout<<"Escolha um valor númerico para a sua cor: ";
	cin>>m;
	peca.col=(enum Tc)m;
	
	if(TpToInt(peca)!=0)
		--j;
	else cout<<"\nDê um valor correto!\n\n";
	}
	cout<<"\nA peça escolhida: "<<TpToString(peca)<<endl;
	cout<<"O código da peça: "<<TpToInt(peca);
	getch();
}
