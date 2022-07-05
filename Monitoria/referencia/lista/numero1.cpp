#include <iostream>

using namespace std;
	
void medio(int xi,int yi, int xf, int yf, float &xm, float &ym)
{
	xm=(xi+xf)/2;
	ym=(yi+yf)/2;
}
	
int main()
{	
	int x1,x2,y1,y2;
	float x3,y3;
	cout<<"PONTO MEDIO DE UM SEGMENTO\n\n";
	cout<<"Forneca o valor para a abscissa do primeiro ponto: ";
	cin>>x1;
	cout<<"Forneca o valor para a coordenada do primeiro ponto: ";
	cin>>y1;
	cout<<"Forneca o valor para a abscissa do segundo ponto: ";
	cin>>x2;
	cout<<"Forneca o valor para a coordenada do segundo ponto: ";
	cin>>y2;
	medio(x1,y1,x2,y2,x3,y3);
	cout<<"O valor do ponto medio e: \n";
	cout<<"Xm:"<<x3<<endl;
	cout<<"Ym:"<<y3<<endl;
	getchar();
}
