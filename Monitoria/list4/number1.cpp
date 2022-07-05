#include <iostream>
#include <conio.h>
using namespace std;


bool isLowerCase(char letter)
{
	if(letter>='a'&& letter<='z')
		return true;
	return false;
}

bool isUpperCase(char letter)
{
	if(letter>='A'&&letter<='Z')
		return true;	
	return false;
}

bool isLetter(char letter)
{
	if(letter>='A'&&letter<='Z'||letter>='a'&&letter<='z')
		return true;
	return false;
}

bool isVowel(char letter)
{
	if(letter=='A'||letter=='E'||letter=='I'||letter=='O'||letter=='U'||letter=='a'||letter=='e'||letter=='i'||letter=='o'||letter=='u')
		return true;
	return false;
}

bool isConsonant(char letter)
{
	if(letter=='B'||letter=='C'||letter=='D'||letter=='F'||letter=='G'||letter=='H'||letter=='J'||letter=='K'||letter=='L'||letter=='M'||letter=='N'||letter=='P'||letter=='Q'||letter=='R'||letter=='S'||letter=='T'||letter=='V'||letter=='W'||letter=='X'||letter=='Y'||letter=='Z'||letter=='b'||letter=='c'||letter=='d'||letter=='f'||letter=='g'||letter=='h'||letter=='j'||letter=='k'||letter=='l'||letter=='m'||letter=='n'||letter=='p'||letter=='q'||letter=='r'||letter=='s'||letter=='t'||letter=='v'||letter=='w'||letter=='x'||letter=='y'||letter=='z')
		return true;
	return false;
}

bool isDigit(char character)
{
	if(character>='0'&&character<='9')
		return true;
	return false;
}

int main()
{
	char c;
	cout<<"Caracter:";
	cin>>c;

	if(isLetter(c))
		cout<<"is a letter\n";
	else cout<<"is not a letter\n";
	
	if(isDigit(c))
		cout<<"is a digit\n";
	else cout<<"is not a digit\n";
	
	if(isLowerCase(c))
		cout<<"is lowercase\n";
	else cout<<"is not lowercase\n";
	
	if(isUpperCase(c))
		cout<<"is uppercase\n";
	else cout<<"is not uppercase\n";
	
	if(isVowel(c))
		cout<<"is vowel\n";
	else cout<<"is not vowel\n";
	
	if(isConsonant(c))
		cout<<"is consonant\n";
	else cout<<"is not consonant\n";
	
	getch();
	
	return 1;
}


