 #include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
	cout<<"Termans pitagorita con numeros a y b menores a 1000."<<endl;
	 
	for(int a=1;a<100;a++){
		for(int b=a+1;b<100;b++){
			int c2= a*a + b*b;
			int c=(int)sqrt(c2);
			if(c*c ==c2){
				cout<<"a: "<<a<<" b: "<<b<<" c: "<<c<<endl;
			}
		}
	}
	
	return EXIT_SUCCESS;
}