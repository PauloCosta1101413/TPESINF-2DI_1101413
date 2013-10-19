#include <iostream>
using namespace std;
#include <string>

#include "LocalTuris.h"
#include "ViaLig.h"



void main(){

	Data dt(1971, 10, 10);
	Capitulo c("Esinf", 3);
	Capitulo x("Esinf", 4);
	Anotacao a1("AMD");
	Anotacao a2("MFC");
	Anotacao a3("AMD");
	Anotacao a4("MFC");
	Anotacao a5("AMD");

	Livro l(5);

	l.inserirPagina(&a1);
	l.inserirPagina(&a2);
	l.inserirPagina(&a3);
	l.inserirPagina(&c);
	l.inserirPagina(&x);

	l.listar();

	/*c.listar();
	x.listar();
	a1.listar();
	a1.setAutor("Ana Madureira");
	cout << a1.getAutor() << endl;
	Capa capaTese("Integração", "Ana Madureira", dt), cx, cy;
	capaTese.setTexto("-----ESINF-----");
	cout << "_________________" << endl;
	capaTese.listar();
	*/
	cin.get();
}