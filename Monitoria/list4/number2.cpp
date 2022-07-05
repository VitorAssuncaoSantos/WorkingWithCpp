#include <iostream>
#include <conio.h>
using namespace std;

float fabs(float number)
{
	if(number<0)
		return (-number);
	return number;
}	
int main()
{
	float num;
	cout<<"Number:";
	cin>>num;
	
	cout<<"The absolute value: "<<fabs(num);
	getch();
	return 1;
}
