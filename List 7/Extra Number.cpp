#include <iostream>
#include <conio.h>
using namespace std;
int strlen(char t[])
{
	int l=0;
	while(t[l]!='\0')
		l++;
	return l;
	
}
void strcpy(char v1[],char v2[])
{
	int i;
	for(i=0;i<strlen(v2);i++)
		v1[i]=v2[i];
	
}
int main()
{
	int lg=1000;
	int i;
	char vector1[lg],vector2[lg];
	
	cout<<"What is your name?";
	gets(vector2);
	
	strcpy(vector1,vector2);
	cout<<"Hi ";
	
	for(i=0;i<strlen(vector1);i++)
		cout<<vector1[i];
	getch();	
}
