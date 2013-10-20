#ifndef ViaLig_
#define ViaLig_

#include <stdio.h>

class ViaLig
{
private:
	string cod_via; //	Atributos gerais das vias: codigo da via
	int total_kms;	//	total de kms da via
	int tempo_med;	//	tempo medio entre a origem e o destino

public:

	// Construtores
	ViaLig();
	ViaLig(string cv, int kms, int tm);
	ViaLig(const ViaLig &vl);
	virtual ~ViaLig();
	// End Construtores

	// Modificadores de Acesso ↓↓
	void setCodVia(string codvia);
	void setTotalKms(int totalkms);
	void setTempoMed(int tempomed);
	string getCodVia() const;
	int getTotalKms() const;
	int getTempoMed() const;
	// End Modificadores de Acesso ↑↑

};

ViaLig::ViaLig(){ //  Construtor por defeito
	cod_via = "";
	total_kms = 0;
	tempo_med = 0;
}

ViaLig::ViaLig(string cv, int kms, int tm){ // Construtor com parâmetros
	cod_via = cv;
	total_kms = kms;
	tempo_med = tm;
}

ViaLig::ViaLig(const ViaLig &vl){ // Construtor Cópia
	setCodVia(vl.cod_via);
	setTotalKms(vl.total_kms);
	setTempoMed(vl.tempo_med);
}

ViaLig:: ~ViaLig(){} //Destrutor


// Modificadores de Acesso ↓↓
void ViaLig::setCodVia(string cv){
	cod_via = cv;
}
string ViaLig::getCodVia() const{
	return cod_via;
}

void ViaLig::setTotalKms(int kms){
	total_kms = kms;
}
int ViaLig::getTotalKms() const{
	return total_kms;
}

void ViaLig::setTempoMed(int tm){
	tempo_med = tm;
}
int ViaLig::getTempoMed() const{
	return tempo_med;
}
// End Modificadores de Acesso ↑↑



#endif