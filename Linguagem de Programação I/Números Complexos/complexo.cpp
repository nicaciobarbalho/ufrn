#include "complexo.h"

Complexo::~Complexo(){
	//Se usou alocação dinâmica, desalocar aqui.
}

//Não mudar
Complexo::Complexo(){
	a = 0.;
	b = 0.;
}

//Não mudar
void Complexo::imprimir(){
	//Imprime na tela "a+bi" (sem aspas) e sem espaços.
	cout << a<<"+"<<b<<"i";
}

//Para Fazer
Complexo::Complexo(Complexo const &i_){
}

//Para Fazer
Complexo::Complexo(float a_, float b_){
}

//Para Fazer
//Método de Potência de um número imaginário elevado a um número inteiro "i_"
Complexo Complexo::pow(int i_){
	return Complexo();
}

//Para Fazer
Complexo Complexo::operator+(Complexo &i_){
	return Complexo();
}

//Para Fazer
Complexo Complexo::operator-(Complexo &i_){
	return Complexo();
}

//Para Fazer
Complexo Complexo::operator*(Complexo &i_){
	return Complexo();
}

//Para Fazer
Complexo Complexo::operator/(Complexo &i_){
	return Complexo();
}

//Para Fazer
Complexo& Complexo::operator=(Complexo const &i_){
	return *this;
}

//Para Fazer
bool Complexo::operator==(Complexo const &i_){
	return true;
}

//Para Fazer
bool Complexo::operator!=(Complexo const &i_){
	return false;
}


