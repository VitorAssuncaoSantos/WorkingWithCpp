#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int length(char t[])
{
	int l=0;
	while(t[l]!='\0')
		l++;
	return l;
	
}
int main()
{
	char text[100];
	int i;
	
	strcpy(text,"The lenght is ");
	
	for(i=0;i<length(text);i++)
		cout<<text[i];
	cout<<length(text);
	getch();
}
