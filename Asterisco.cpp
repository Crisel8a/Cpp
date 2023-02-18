//figuritas ...

#include <iostream>

using namespace std;

void ImprimirAsteriscos(int);
void CrearPiramide(int);

int main(){
	int a;
	cout<<"Dame la altura de la piramide: ";
	cin>>a;
	
	CrearPiramide(a);
	
	
	return 0;
}

void ImprimirAstericos(int n){
	
	for(int i=1;i<=2*n-1;i++){
		cout<<"* ";
	}
	cout<<endl;
	
}

void CrearPiramide(int a){
	for (int i=1;i<=a;i++){
		ImprimirAstericos(i);
	}
	cout<<"Final de la piramide."<<endl;
}