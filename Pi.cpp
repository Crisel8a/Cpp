//ESCALANTE OCHOA CRISEL equipo con CELDERON ORTIZ KEVIN y MARCO ANTONIO SILVA VARELA
//PROGRAMACI”N 1 EDUARDO VIRUE—A
//PROGRAMA PARA LA APROXIMACI”N DE PI

#include <iostream> 
#include <cmath>
using namespace std;

int main(){
    double cociente; 
    double PI=M_PI;
    int pmin=3000, qmin=1000;
    double error= abs(double(pmin)/double(qmin) -PI), e;
    for (int p=1; p<10000 ;p++){

        for (int q=1; q<10000 ;q++){
        e= abs(double(p)/double(q)-PI);//correcto
        
        if(e<error){ 
            pmin=p;
            qmin=q;
            error= e; //(double(pmin)/double(qmin))-PI; error negativo 
           }
        }
    }
    cout<<pmin<<"/"<<qmin<<"="<<double(pmin)/double(qmin)<<endl;
    return 0;
}
