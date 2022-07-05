#include <iostream>
#include <conio.h>
using namespace std;

int divisao(int &a,int b)
{
	int x,resto;
	x = a/b;
	resto= a%b;
	a=resto;
	return x;
}

int main()
{
	int dividendo, divisor;
	cout<<"DIVISAO INTEIRA\n\n";
	cout<<"ENTRE COM O DIVIDENDO ---> ";
	cin>>dividendo;
	cout<<"ENTRE COM O DIVISOR -----> ";
	cin>>divisor;
	
	int quosiente= divisao(dividendo,divisor);
	
	if(dividendo!=0)
		cout<<"RESULTADO : "<<quosiente <<" + "<< dividendo<<"/"<<divisor;
	else cout<<"RESULTADO : "<<quosiente;

	getch();
}
