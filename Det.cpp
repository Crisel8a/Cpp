#include <iostream>

using namespace std;

float determinante(float A[100][100], int n ){
	
	int i,j,k;
	
	float aux, pivote, pivote1,det=1;
	
	for(i=0;i<n;i++){
		pivote=A[i][i];
		
		for(j=i+1;j<n;j++){
			pivote1=A[j][i];
			aux=pivote1/pivote;
			
			for(k=0;k<n;k++){
				A[j][k]=A[j][k]-aux*A[i][k];
			}
		}
	}
	
	for(i=0;i<n;i++)
	{
	det=det*A[i][i];
    }
    
    for(i=0;i<n;i++){
    	for(j=0;j<n;j++){
    		cout<<A[i][j];
		}
	}
	
	return det;
}
int main(){
	   
	   int i,j,n;
	   float A[100][100],deter;
	   
	   cout<<"Introduzca el numero de elementos: "; cin >>n;
	   cout<<"Introduzca los valores de la matriz: ";
	   for(i=0;i<n;i++){
	   	for(j=0;j<n;j++){
	   		cin>>A[i][j];
		   }
	   }
	   
	   deter=determinante(A,n);
	   cout<<"\nLa determinate de A es: "<<deter<<endl;
	   
	return 0;
}