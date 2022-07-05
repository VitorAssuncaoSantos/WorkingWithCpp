#include <iostream>

using namespace std;

void adicao(float nx,float dx,float ny,float dy,float &nr, float &dr)
{
	nr= nx*dy + ny*dx;
	dr = dx * dy;
}

int main()
{
	float numx,denx,numy,deny;
	float numr,denr;
	cout<<"qual e o valor do numerador do primeiro numero?";
	cin>>numx;
	cout<<"qual e o valor do denomirador do primeiro numero?";
	cin>>denx;
	cout<<"qual e o valor do numerador do segundo numero?";
	cin>>numy;
	cout<<"qual e o valor do denomirador do segundo numero?";
	cin>>deny;
	
	adicao(numx,denx,numy,deny,numr,denr);

	cout<<"adicao: \n";
	cout<<"numerador: "<<numr<<endl;
	cout<<"denominador: "<<denx;
}
