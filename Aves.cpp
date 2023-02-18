#include <iostream>
#include <cstdlib>

using namespace std;

class Ave {
	public:
		Ave(void) {};
		virtual ~Ave(void);
		virtual void Volar(void) const = 0;
		virtual void Comer(void) const = 0;
		virtual void Plumas(void) const = 0;
		virtual void Tipo(void) const = 0;
};

Ave::~Ave(void) 
{
	cout << "esta ave se murió\n";
};

class Gallina : public Ave {
	public:
		Gallina(void) {};
		virtual ~Gallina(void);
		virtual void Volar(void) const;
		virtual void Comer(void) const;
		virtual void Plumas(void) const;
		virtual void Tipo(void) const;
};

Gallina::~Gallina(void)
{
	cout << "me hicieron caldo\n";
}

void Gallina::Volar(void) const
{
	cout << "no sé volar\n";
}

void Gallina::Comer(void) const
{
	cout << "quiero maíz\n";
}

void Gallina::Plumas(void) const
{
	cout << "mis plumas son blancas\n";
}

void Gallina::Tipo(void) const
{
	cout << "soy una gallina\n";
}


class Gaviota : public Ave {
	public:
		Gaviota(void) {};
		virtual ~Gaviota(void);
		virtual void Volar(void) const;
		virtual void Comer(void) const;
		virtual void Plumas(void) const;
		virtual void Tipo(void) const;
};

Gaviota::~Gaviota(void)
{
	cout << "me comió un tiburón\n";
}

void Gaviota::Volar(void) const
{
	cout << "me enseño a volar Juan Salvador Gaviota\n";
}

void Gaviota::Comer(void) const
{
	cout << "quiero un pez\n";
}

void Gaviota::Plumas(void) const
{
	cout << "mis plumas son blancas\n";
}

void Gaviota::Tipo(void) const
{
	cout << "soy una gaviota\n";
}

class Perico : public Ave {
	public:
		Perico(void) {};
		virtual ~Perico(void);
		virtual void Volar(void) const;
		virtual void Comer(void) const;
		virtual void Plumas(void) const;
		virtual void Tipo(void) const;
};

Perico::~Perico(void)
{
	cout << "me comió el gato\n";
}

void Perico::Volar(void) const
{
	cout << "Puedo volar\n";
}

void Perico::Comer(void) const
{
	cout << "quiero una galleta\n";
}

void Perico::Plumas(void) const
{
	cout << "mis plumas son verdes\n";
}

void Perico::Tipo(void) const
{
	cout << "soy un perico\n";
}

int main(int argc, char* argv[])
{
	Ave *a;
	int c;
	cout << "¿qué ave quieres?\n";
	cout << "1= gallina\n"
			"2= gaviota\n"
			"3= perico\n";
	cin >> c;

	switch (c) {
		case 1:	a= new Gallina;
				break;
		case 2:	a= new Gaviota;
				break;
		case 3:	a= new Perico;
				break;
	}

	a->Volar();
	a->Comer();
	a->Plumas();
	a->Tipo();

	delete a;
	return EXIT_SUCCESS;
}