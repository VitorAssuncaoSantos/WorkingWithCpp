#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;

void cat(char t1[],char t2[])
{
	string s1,s2;
	s1=t1;
	s2=t2;
	s1=s1+s2;
	strcpy(t1,s1.c_str());
}

int main()
{
	char text1[3];
	char text2[2];
	
	strcpy(text1,"C");
	strcpy(text2,"++");
	
	cat(text1,text2);
	
	cout<<text1<<" is really fun\n";
	getch();
}
