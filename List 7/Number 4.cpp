#include <iostream>
#include <conio.h>
using namespace std;
void toupper(char &c)
{
	if(c>='a' && c<='z')
		c=c+('A'-'a');	
}
int main()
{
	char character; 
	cout<<"Give one letter: ";
	cin>>character;
	toupper(character);
	cout<<character;
	getch();	
}
