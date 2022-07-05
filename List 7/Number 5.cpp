#include <iostream>
#include <conio.h>
using namespace std;
void tolower(char &c)
{
	if(c>='A'&&c<='Z')
		c=c+('a'-'A');
}
int main()
{
	char character;
	cout<<"Give one letter:";
	cin>>character;
	tolower(character);
	cout<<character;
	getch();
}

