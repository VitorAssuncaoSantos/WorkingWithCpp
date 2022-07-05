#include <iostream>
#include <conio.h>
#include <string.h>
#include <locale.h>
using namespace std;
main()
{
	setlocale(LC_ALL,"portuguese");
	//Declarando as variáveis
	string s;
	int tam,i,j,k;
	//Pedindo e recebendo um texto do usuário
	cout<<"ENTRE COM O SEU TEXTO:\n\n";
	getline(cin,s);
	//Definindo a quantidade de caracteres do texto
	tam=s.length();
	//Definindo a matriz quadrada 
	char m[tam][tam];
	//Realizando as rotações
	for(j=0;j<tam;j++)
		m[0][j]=s[j];
	cout<<endl;
	for(i=1;i<tam;i++)
	{

		for(j=0;j<tam;j++)
		{
			m[i][j]=m[i-1][j-1];
			if(j==0)
			{
				m[i][j]=m[i-1][j+(tam-1)];
			}
		}
	}
	
	//Imprimindo a matriz
	for(i=0;i<tam;i++)
	{
		for(j=0;j<tam;j++)	
			cout<<m[i][j];
		cout<<endl;
	}
	getch();
}
