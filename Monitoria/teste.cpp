#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

float min_hora(int &horas)
{
	float min;
	min=horas%60;
	horas= floor(horas/60);
	return min;
}

int main()
{
	int minutos;
	float x;
	cout<<"Quanto minutos se passaram desde a meia-noite?";
	cin>>minutos;
	x = min_hora(minutos);
	cout<<minutos<<endl;
	cout<<x;
	getch();
}
