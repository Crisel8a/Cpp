#include<iostream>
#include<cstdlib>

using namespace std;

int main(int argc, char* argv[])
{
	int n;
	cout << "Dar n:\n";
	cin >> n;

	bool c[n];
	c[0]= c[1]= false;
	for (int k=2; k<n; ++k)	//  todos a la criba
		c[k]= true;

	for (int b=2; b<n; ++b) {				
		if (c[b]==true) {				//  b esta presente?
			cout << b << '\t';			//  b es primo
			for (int m= b; m<n; m+= b)  //  quitamos a los multiplos
				c[m]= false;
		}
	}
    return EXIT_SUCCESS;
}

