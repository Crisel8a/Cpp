/*Hagamos una locura...

0 REINOS

1 Reino Animalia (animales)

2 Reino Plantae (plantas)

3 Reino Fungi (hongos)

4 Reino Protozoa (protozoarios)

5 Reino Chromista (cromistas)

6 Reino Archaea (arqueas)

7 Reino Bacteria (bacterias)

*/

#include <iostream>

using namespace std;

                                                  //CLASES

class REINOS{ //Clase Padre
	private:
		string name;
		string sexo;
		int edad;
		string OrganizacionCelular;
		string TipoDeCelula;
		string Reproduccion;
		string Nutricion;
		string Locomocion;
		string Respiracion;
	public:
		REINOS(string, string, int, string, string, string, string, string, string);//instructor
		virtual void eat();//el virtual es para el polimorfismo
};

class Animalia : public REINOS{//Clase 1
	private:
	 	string VertebraONo;
	public:
		Animalia(string, string, int,string, string, string, string, string, string, string);
		void eat();
};

class Plantae : public REINOS{ //Clase 2
	private://atrubitos
		string Fotosintesis;
	public://mÈtodos
		Plantae(string, string, int,string, string, string, string, string, string, string);
		void eat();
};

class Fungi : public REINOS{  //Clase 3
	private:
		string Parasitos;
	public:
		Fungi(string, string, int,string, string, string, string, string, string, string);
		void eat();
};

class Protozoa : public REINOS{//Clase 4
	private:
		string LosRarosDelGrupo;
	public:
		Protozoa(string, string, int,string, string, string, string, string, string, string);
		void eat();
};

class Chromista : public REINOS{//clase 5
	private:
		string Nucleo;
	public:
		Chromista(string, string, int,string, string, string, string, string, string, string);
		void eat();
};

class Archaea : public REINOS{//clase 6
	private:
		string Procariotas;
	public:
		Archaea(string, string, int,string, string, string, string, string, string, string);
		void eat();
};

class Bacteria : public REINOS{//clase 7
	private:
		string Gram;
	public:
		Bacteria(string, string, int,string, string, string, string, string, string, string);
		void eat();
};


                                                  //CONSTRUCTORES
                                                  
                                        
REINOS::REINOS(string _name, string _sexo, int _edad, string _OrganizacionCelular, 
                string _TipoDeCelula, string _Reproduccion, string _Nutricion, 
				string _Locomocion, string _Respiracion){
	name=_name;
	sexo=_sexo;
	edad=_edad;
	OrganizacionCelular=_OrganizacionCelular;
	TipoDeCelula=_TipoDeCelula;
	Reproduccion=_Reproduccion;
	Nutricion=_Nutricion;
	Locomocion=_Locomocion;
	Respiracion=_Respiracion;
	
}
 
Animalia::Animalia(string _name, string _sexo, int _edad, string _OrganizacionCelular, 
                string _TipoDeCelula, string _Reproduccion, string _Nutricion, 
				string _Locomocion, string _Respiracion, string _VertebraONo)
				: REINOS(_name, _sexo, _edad, _OrganizacionCelular, 
                _TipoDeCelula,  _Reproduccion, _Nutricion, 
				 _Locomocion,  _Respiracion)
                 {
	                VertebraONo=_VertebraONo;
                 }

Plantae::Plantae(string _name, string _sexo, int _edad, string _OrganizacionCelular, 
                string _TipoDeCelula, string _Reproduccion, string _Nutricion, 
				string _Locomocion, string _Respiracion, string _Fotosintesis)
				: REINOS(_name, _sexo, _edad, _OrganizacionCelular, 
                _TipoDeCelula,  _Reproduccion, _Nutricion, 
				 _Locomocion,  _Respiracion)
				 {
				 	Fotosintesis=_Fotosintesis;
				 }
				 
Fungi::Fungi(string _name, string _sexo, int _edad, string _OrganizacionCelular, 
                string _TipoDeCelula, string _Reproduccion, string _Nutricion, 
				string _Locomocion, string _Respiracion, string _Parasitos)
				: REINOS(_name, _sexo, _edad, _OrganizacionCelular, 
                _TipoDeCelula,  _Reproduccion, _Nutricion, 
				 _Locomocion,  _Respiracion)
				 {
				 	Parasitos=_Parasitos;
				 }

Protozoa::Protozoa(string _name, string _sexo, int _edad, string _OrganizacionCelular, 
                string _TipoDeCelula, string _Reproduccion, string _Nutricion, 
				string _Locomocion, string _Respiracion, string _LosRarosDelGrupo)
				: REINOS(_name, _sexo, _edad, _OrganizacionCelular, 
                _TipoDeCelula,  _Reproduccion, _Nutricion, 
				 _Locomocion,  _Respiracion)
				 {
				 	LosRarosDelGrupo=_LosRarosDelGrupo;
				 }

Chromista::Chromista(string _name, string _sexo, int _edad, string _OrganizacionCelular, 
                string _TipoDeCelula, string _Reproduccion, string _Nutricion, 
				string _Locomocion, string _Respiracion, string _Nucleo)
				: REINOS(_name, _sexo, _edad, _OrganizacionCelular, 
                _TipoDeCelula,  _Reproduccion, _Nutricion, 
				 _Locomocion,  _Respiracion)
				 {
				 	Nucleo=_Nucleo;
				 }

Archaea::Archaea(string _name, string _sexo, int _edad, string _OrganizacionCelular, 
                string _TipoDeCelula, string _Reproduccion, string _Nutricion, 
				string _Locomocion, string _Respiracion, string _Procariotas)
				: REINOS(_name, _sexo, _edad, _OrganizacionCelular, 
                _TipoDeCelula,  _Reproduccion, _Nutricion, 
				 _Locomocion,  _Respiracion)
				 {
				 	Procariotas=_Procariotas;;
				 }

Bacteria::Bacteria(string _name, string _sexo, int _edad, string _OrganizacionCelular, 
                string _TipoDeCelula, string _Reproduccion, string _Nutricion, 
				string _Locomocion, string _Respiracion, string _Gram)
				: REINOS(_name, _sexo, _edad, _OrganizacionCelular, 
                _TipoDeCelula,  _Reproduccion, _Nutricion, 
				 _Locomocion,  _Respiracion)
				 {
				 	Gram=_Gram;
				 }

                                                   //POLIMORFISMO
 
void REINOS::eat(){
	cout<<"Hola soy "<<name<<", soy "<<sexo<<" y mi edad es: "<<edad<<endl;
	cout<<"Mi tipo de Celula es: "<<TipoDeCelula<<endl;
	cout<<"Mi nutricion es: "<<Nutricion<<endl;
	cout<<"Mi respiracion es: "<<Respiracion<<endl;
	cout<<"Mi locomocion es: "<<Locomocion<<endl;
	cout<<"Mi reprodccion es: "<<Reproduccion<<endl;
	cout<<"Mi organizacion Celular es: "<<OrganizacionCelular<<endl;
	
} 

void Animalia::eat(){
	REINOS::eat();
	cout<<"Soy parte del reino Animalia."<<endl;
	cout<<"Yo como plantitas y otros animales."<<endl;
	cout<<"Soy "<<VertebraONo<<endl;
	cout<<"\n"<<endl;
 } 

void Plantae::eat(){
	REINOS::eat();
	cout<<"Soy parte del reino Plantae."<<endl;
	cout<<"Yo como aire, agua y luz lol. "<<endl;
	cout<<"Hago "<<Fotosintesis<<endl;
	cout<<"\n"<<endl;
}

void Fungi::eat(){
	REINOS::eat();
	cout<<"Soy parte del reino Fungi."<<endl;
	cout<<"Yo robo comida."<<endl;
	cout<<"Soy un "<<Parasitos<<endl;
	cout<<"\n"<<endl;
}

void Protozoa::eat(){
	REINOS::eat();
	cout<<"Soy parte del reino Protozoa."<<endl;
	cout<<"AKI KE VA?"<<endl;
	cout<<"Somos"<<LosRarosDelGrupo<<endl;
	cout<<"\n"<<endl;
}

void Chromista::eat(){
	REINOS::eat();
	cout<<"Soy parte del reino Chromista."<<endl;
	cout<<"AKI NO SE QUE PONER"<<endl;
	cout<<"Tenemos "<<Nucleo<<endl;
	cout<<"\n"<<endl;
} 

void Archaea::eat(){
	REINOS::eat();
	cout<<"Soy parte del reino Archaea."<<endl;
	cout<<"NI AKI"<<endl;
	cout<<"Somos "<<Procariotas<<endl;
	cout<<"\n"<<endl;
}

void Bacteria::eat(){
	REINOS::eat();
	cout<<"Soy parte del reino Bacteria."<<endl; 
	cout<<"AKI SOLO QUE ES EUCARIOTA"<<endl;
	cout<<"Gram "<<Gram<<endl;
	cout<<"\n"<<endl;
} 


                                         //MAIN
int main(){
	//REINOS R1("Lalo", "macho", 15, "Pluricelular", "Procariota", "Sexual","Heterotrofa", "Locomocion", "Aerobia");
	Animalia A1("Uno", "macho", 15, "Organizacion Celular", "Tipo de Celula", "Reproduccion","Nutricion", "Locmocion ", "Respiracion","Vertebrado");
	Plantae P1("Dos", "hembra", 20, "Organizacion Celular", "Tipo de Celula", "Reproduccion","Nutricion", "Locmocion ", "Respiracion","Fotosintesis");
	Bacteria B1("TRes", "macho", 15, "Organizacion Celular", "Tipo de Celula", "Reproduccion","Nutricion", "Locmocion ", "Respiracion","Gram");
	Archaea Ar1("Cuatro", "macho", 15, "Organizacion Celular", "Tipo de Celula", "Reproduccion","Nutricion", "Locmocion ", "Respiracion","Procariotas");
	Chromista C1("Cinco", "macho", 15, "Organizacion Celular", "Tipo de Celula", "Reproduccion","Nutricion", "Locmocion ", "Respiracion","Nucleo");
	Protozoa Pr1("Seis", "macho", 15, "Organizacion Celular", "Tipo de Celula", "Reproduccion","Nutricion", "Locmocion ", "Respiracion","raros");
	Fungi F1("siete", "macho", 15, "Organizacion Celular", "Tipo de Celula", "Reproduccion","Nutricion", "Locmocion ", "Respiracion","Parasito");
	
	//R1.eat();	
	A1.eat();
	P1.eat();
	B1.eat();
	Ar1.eat();
	C1.eat();
	Pr1.eat();
	
	return 0;
} 

/*PREGUNTAS
1.- øcu·les son unicelulares y pluricelulares?
2.- øcuales tienen sexo?
3.- øcu·l es el rango de edad de cada uno?
4.- øcu·l es la respiraciÛn de cada uno?
*/


