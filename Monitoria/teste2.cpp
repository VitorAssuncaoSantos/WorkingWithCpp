#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

void raizes(int A,int B, int C, float &x1,float &x2 )
{
	int delta;
	delta= pow (B,2)-(4*A*C);
	x1=(-B-sqrt(delta))/2*A;
	x2=(-B+sqrt(delta))/2*A;
}

int main()
{
	int A1,B2,C3;
	float raiz1,raiz2;
	cout<<"Qual e o valor de A?";
	cin>>A1;
	cout<<"Qual e o valor de B?";
	cin>>B2;
	cout<<"Qual e o valor de C?";
	cin>>C3;
	
	raizes(A1,B2,C3,raiz1,raiz2);
	
	cout<<raiz1<<endl;
	cout<<raiz2;
	getchar();
}
