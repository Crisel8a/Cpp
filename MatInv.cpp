//Escalante Ochoa Crisel
//Programacion 1 ESFM Eduardo Vorueña
//Inversa y Determinante de una matriz cuadrada

#include<iostream>
#include<cmath> 
#include<cstdlib>
#include<iomanip> 

using namespace std;

int main() {
	
	int n;
	
	cout<<"Este programa calcula la inversa de una matriz cuadrada y su determinante.\n";
	cout<<"Introduzca el tamaño de la matriz nxn: "; cin >>n;
	cout <<"Introduzca las entradas de la matriz.\n";
	
	float Original[n][n], Identidad[n][n],auxinv, pivoteinv;
	float pivotedet,auxdet,pivotedet1,det=1;
	float Copia[n][n]; //DECLARANDO CADA VARIABLE QUE USAREMOS
	 
	
	for(int i=0;i<n;i++) 
	{//pidiendo los datos de la matriz
		for(int j=0;j<n;j++)
		{
			cin>>Original[i][j]; //esta matriz será usada para la inversa
			Copia[i][j]=Original[i][j];   //esta matriz será usada para la determinante
			Identidad[i][j]=0;
			
			if (i==j)
			{
				Identidad[i][j]=1;
			}
		}
	}
	
	//Reduccion por renglones
	for(int i=0;i<n;i++)
	{ //ciclo para movernos en la diagonal
		pivoteinv=Original[i][i];
		
		for(int k=0;k<n;k++)
		{
			Original[i][k]=Original[i][k]/pivoteinv;
			Identidad[i][k]=Identidad[i][k]/pivoteinv;
			
		}//convertir el pivote a 1 y aplicar la operacion en toda la fila y ambas matrices
		
		
		for(int j=0;j<n;j++){//ceros debajo y arriba del pivote
		
			if(i!=j){//no estamos en la diagonal y podemos hacer cero
				auxinv=Original[j][i];
				
				for(int k=0;k<n;k++){
					Original[j][k]=Original[j][k]-auxinv*Original[i][k];
					Identidad[j][k]=Identidad[j][k]-auxinv*Identidad[i][k];
				}
				 
			}
		}
	}
	 
	cout<<"\nMatriz inversa: \n";
	for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<Identidad[i][j]<<" "; 
			}
	cout<<"\n";
		
	}
	//TODO LO DE ARRIBA ES DE LA INVERSA 
	
	
	//INICIANDO DETERMINANTE
	
	//Reduccion por renglones a una forma triangular superior
	for(int i=0;i<n;i++)
	{
		pivotedet=Copia[i][i];
		for(int j=i+1;j<n;j++)
		{
			pivotedet1=Copia[j][i];
			auxdet=pivotedet1/pivotedet;
			for(int k=0;k<n;k++)
			{
				Copia[j][k]=Copia[j][k]-auxdet*Copia[i][k];
				
			}
		}
	}
	
	//DETERMINANTE
    for(int i=0;i<n;i++)
	{
    	det*=Copia[i][i]; //multiplicando la diagonal
	} 
	
	cout<<"\nMatriz triangular superior: \n";  
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{ 
			cout << Copia[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"El determinante de una matriz diagonal superior es el producto de las entradas en su diagonal principal.\n";
	cout<<"\n\nEl determinante de la matriz es: "<<det<<endl;
	 
	return 0;
}