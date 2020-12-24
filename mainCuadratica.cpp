#include <iostream>
#include <cmath>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float a,b,c,r,x,f,d;
	cout<<"Digite coeficiente a ";
	cin>>a;
	cout<<"Digite coeficiente b ";
	cin>>b;
	cout<<"Digite coeficiente c ";
	cin>>c;
	r=(b*b)-(4*a*c);
	x=(-b+sqrt(r));
	d=2*a;
	f=x/d;
	if (f>0){cout<<"El valor del discriminante es mayor que 0 es: " <<f;
	}else if(f==0){cout<<"El valor del discriminante es igual que 0 es: ";
	}else if(f<0){cout<<"El valor del discriminante es menor que 0 es: "<<f;
	}else {cout<<"El valor del discriminante no existe ";}
	return 0;
}
