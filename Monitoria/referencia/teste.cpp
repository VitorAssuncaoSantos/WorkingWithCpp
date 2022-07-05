#include <iostream>
using namespace std;

void troca(int &x, int &y)
{
	int aux;
	aux=x;
	x=y;
	y=aux;
}

int main()
{
	int a, b;
	cout<<"Escreva um numero para A------>";
	cin>>a;
	cout<<"\nEscreva outro numero para B->";
	cin>>b;
	troca(a,b);//espera que o valor de a e b sejam trocados
	cout<<"Os valores finais para A e B sao "<<a<<" e "<<b<<".";
	getchar();
}

