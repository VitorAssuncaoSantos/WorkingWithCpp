#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int comp(char t1[], char t2[])
{
	string s1,s2;
	s1=t1;
	s2=t2;
	if(s1>s2)
		return 1;
	else
		if(s1==s2)
			return 0;
		else
			return -1;
}

int main()
{
	char text1[100];
	char text2[100];
	
	strcpy(text1,"Primeiro texto");
	strcpy(text2,"Segundo texto");	
	
	if(comp(text1,text2)==1)
		cout<<"O primeiro texto e maior na comparacao alfabetica.\n";
	else
		if(comp(text1,text2)==0)
			cout<<"Os textos sao identicos.\n";
		else
			cout<<"O primeiro texto e menor na comparacao alfabetica.\n";
	getch();
}
