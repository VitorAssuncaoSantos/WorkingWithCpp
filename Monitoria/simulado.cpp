#include <iostream>
#include <locale.h>

using namespace std;

float farenheit_celsius(float tempF)
{
	float tempC;
	tempC= (5*(tempF-32))/9;
	return tempC;	
}

float celsius_kelvin(float tempC)
{
	float tempK;
	tempK= tempC + 273.15;
	return tempK;
}

float farenheit_kelvin(float tempF)
{
	float cel;
	cel = farenheit_celsius(tempF);
	return celsius_kelvin(cel);
}

int main()
{
	setlocale(LC_ALL,"portuguese");
	float temperatura;
	cout<<"Dê um valor de uma certa temperatura em Farenheit: ";
	cin>>temperatura;
	cout<<"Conversão para: \n";
	cout<<"Celsius: "<<farenheit_celsius(temperatura)<<endl;
	cout<<"Kelvin: "<<farenheit_kelvin(temperatura)<<endl;
	getchar();
	
}

