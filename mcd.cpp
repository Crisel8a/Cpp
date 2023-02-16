#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main() {
	cout<<"Este programa da el mcd\n";
	int a,b,r;
	cout<<"Dame los dos numeros: ";
	cin >>a>>b;
	while(b!=0){
		r=a%b;
		a=b;
		b=r;
	}
	cout<<"mdc = " <<a<<endl;
	return 0;
}