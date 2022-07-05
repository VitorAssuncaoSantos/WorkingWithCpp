#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

//forma 1

//float tangente(float ang)
//{
//	float seno, cosseno, tangente;
//	seno=sin(ang);
//	cosseno=cos(ang);
//	tangente=seno/cosseno;
//	
//	return tangente;
//}
//
//int main()
//{
//	float tg,a;
//	cout<<"ENTRE COM O VALOR DO ANGULO ---> ";
//	cin>>a;
//	tg=tangente(a);
//	cout<<"A TANGENTE DE "<<a<<" VALE "<< tg;
//	
//	getch();
//}

//forma 2

double tangente(double ang)
{
	double seno, cosseno, tangente;
	seno=sin(ang);
	cosseno=cos(ang);
	tangente=seno/cosseno;
	
	return tangente;
}

int main()
{
	double tg,a;
	cout<<"ENTRE COM O VALOR DO ANGULO ---> ";
	cin>>a;
	tg=tangente(a);
	cout<<"A TANGENTE DE "<<a<<" VALE "<< tg;
	
	getch();
}
