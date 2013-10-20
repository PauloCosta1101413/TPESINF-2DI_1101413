#ifndef LocalTuris_
#define LocalTuris_

#include <stdio.h>

class LocalTuris
{
private:
	string descricao; // Atributo geral dos locais turisticos: descrição
	
public:

	// Construtores
	LocalTuris();
	LocalTuris(string desc);
	LocalTuris(const LocalTuris &lt);
	virtual ~LocalTuris();
	// End Construtores

	// Modificadores de Acesso ↓↓
	void setDescricao(string desc);
	string getDescricao() const;


	virtual void listar()const; //Declaração de métodos
	// End Modificadores de Acesso ↑↑
};

LocalTuris::LocalTuris(){ // Construtor por defeito
	descricao = "";
}

LocalTuris::LocalTuris(string desc){ // Construtor com parâmetros
	descricao = desc;
}

LocalTuris::LocalTuris(const LocalTuris &lt){ // Construtor Cópia
	setDescricao(lt.descricao);
}

LocalTuris:: ~LocalTuris(){} //Destrutor


// Modificadores de Acesso ↓↓

void LocalTuris::setDescricao(string desc){
	descricao = desc;
}
string LocalTuris::getDescricao() const{
	return descricao;
}

// End Modificadores de Acesso ↑↑


// Método de listar/imprimir no ecrã ↓↓
void LocalTuris::listar() const{
	cout << "Descricao:" << descricao << endl;
}




#endif