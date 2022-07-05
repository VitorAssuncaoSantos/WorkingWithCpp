#include <iostream>
#include <conio.h>
using namespace std;
void ASCII()
{
	char c;
	int i;
	for(i=0;i<256;i++)
	{
		c=(char)i;//converting int to char
		cout<<i<<"-->"<<c<<endl;
	}
}
int main()
{
	cout<<"Listing an ASCII table\n\n";
	ASCII();
	getch();
	getch();
}
