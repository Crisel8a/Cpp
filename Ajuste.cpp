
//Programa para ajuste por minimos cuadrados
/*Tenemos la ecuacion de la recta de la forma y=mx+b donde m es la pendiente y b la ordenada al origen.
Pediremos al usuario las parejas de datos (x,y), calcularemos las sumas correspondientes. 
Finalmente, calcularemos con las formulas de minimos cuadrados a las constantes m y b para obtener la ecuacion ajustada
y'=mx+b, asi mismo calculamos el coeficiente de corelaciÛn de R*/

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>
 
using namespace std; 

int main() {
	double x,y,y2,m,b,R,sx=0,sy=0,sxy=0,sxx=0,syy=0,sR=0,spx=0,spy=0,potencia,px=0,py=0,xy=1,xx=1,sx2=0,vax;
	//declarando todas las sumas
	int n;//cantidad de parejas (x,y)
	
	cout<<"Este programa hace los calculos del ajuste por minimos cuadrados.\n";
	cout <<"Digite el numero de parejas (x,y): "; cin >> n;
	
		for(int i=0;i<n;i++)
		{
	       cout << "De la pareja "<<i+1<<" de  (x,y): "; 
		   cin >>x>>y;
		   sx+=x;
		   sy+=y; //calculando cada suma
		   sxy+=(x*y);
		   sxx+=(pow(x,2));
		   syy+=(pow(y,2));
		   sx2=pow(sx,2); 
		   vax=fabs(sx);
		   px=(sx/n);
		   py=(sy/n);
		   spx+=(x-px);
		   spy+=(y-py);
		   sR+=(spx*spy);
		}
		 
	    //imprimiendo las sumas
		cout<<"\nLa suma total de las x es: "<<sx;
		cout<<"\nLa suma total de las y es: "<<sy;
		cout<<"\nLa suma total del producto x*y es: "<<sxy;
		cout<<"\nLa suma total del cuadrado de las x es: "<<sxx;
		cout<<"\nElevando la suma total de las x al cuadrado: "<<sx2;
		cout<<"\nEl valor absoluto de la suma de las x es: "<<vax;
		cout<<"\nEl promedio de las x es: "<<px;
		cout<<"\nEl promedio de las y es: "<<py;
		
		//calculando m y b y R
		
		m=((n*sxy)-(sx*sy))/((n*sxx)-pow(vax,2));
		b=((sy*sxx)-(sx*sxy))/((n*sxx)-pow(vax,2));
        R= ( sxy- (sx*sy)/n ) / sqrt( (sxx -(sx*sx/n))*(syy -(sy*sy/n) ) ); 
		 
		cout<<showpos<<"\n\nLa pendiente ajustada es m = "<<m; 
		cout<<showpos<<"\nLa ordenada al origen ajustada es b = "<<b;
		cout<<showpos<<"\n\nAsi la ecuacion de la recta ajustada es y'="<<m<<"x"<<b;   //ec. ajustada
		cout<<showpos<<"\nEl coeficiente de corelacion es R = "<<R;
    
	 
return EXIT_SUCCESS; 
}
