//Transpuesta de una matriz

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	
	int matriz[100][100],filas,columnas;
	
	cout<<"Digite el numero de filas: "; cin>>filas;
	cout <<"Digite el numero de columas: "; cin >> columnas;
	
	
	for (int i=0;i<filas;i++){
		for (int j=0;j<columnas;j++){
			cout <<"Digite un numero: ["<<i<<"]["<<j<<"]: ";
			cin >>matriz[i][j];
		}
	}
	
	cout<<"Matriz original: \n"; 
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout << matriz[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"\nMatriz transpuesta: \n";
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<matriz[j][i]<<" ";
		}
	cout<<"\n";
    }
    
    if(filas==columnas){
    	for(int i=0;i<filas;i++){
    		for(int j=0;j<columnas;j++){
    			if(matriz[i][i]==columnas==filas){
    				cout<<"Es simetrica.";
				} 
			}
		}
	}
	else{ 
		cout<<"No es una matriz simetrica.";
	}
	return EXIT_SUCCESS;
}

