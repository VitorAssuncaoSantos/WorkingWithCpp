#include <iostream>
#include <conio.h>
using namespace std;

int divisao(int &dive, int divs)
{
	int quosiente=dive/divs;
	dive= dive%divs;
	return quosiente;
}

int main()
{
	int dividendo, divisor;
	cout<<"DIVISAO INTEIRA\n\n";
	cout<<"ENTRE COM O DIVIDENDO --->";
	cin>>dividendo;
	cout<<"ENTRE COM O DIVISOR ----->";
	cin>>divisor;

	int quosiente = divisao(dividendo,divisor);
	cout<<"RESULTADO: "<<quosiente<<"+"<<dividendo<<"/"<<divisor;
	getch(); 
}
