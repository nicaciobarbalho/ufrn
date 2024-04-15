#include <math.h>
#include "complexo.h"
#include "matematica.h"
using namespace std;

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
	cout << a<<"+"<<b<<"i" << endl;
}


//Para Fazer
Complexo::Complexo(Complexo const &i_){
	a = i_.a;
	b = i_.b;
}

//Para Fazer
Complexo::Complexo(float a_, float b_){
	a = a_;
	b = b_;
}

//Para Fazer
//Método de Potência de um número imaginário elevado a um número inteiro "i_"
Complexo Complexo::pow(int i_){

	float magnitude = Matematica::Raiz(a * a + b * b);
    float angulo_tang = Matematica::Tangente(b, a);
    
	float nova_magnitude = Matematica::Potencia(magnitude, i_);
	float novo_angulo = angulo_tang * i_;

	float real = Matematica::Precisao(nova_magnitude * Matematica::Cosseno(novo_angulo), 2);
	float img = Matematica::Precisao(nova_magnitude * Matematica::Seno(novo_angulo), 2);
    
	return Complexo(real, img);
}

Complexo Complexo::Calcular(char operacao, Complexo &i_){

    if (operacao == '+')
        return Complexo(a + i_.getA(), b + i_.getB());
    else if (operacao == '-')
        return Complexo(a - i_.getA(), b - i_.getB());
    else if (operacao == '*')
       return Complexo(a * i_.getA(), b * i_.getB());
    else if (operacao == '/'){
        if (i_.getA() != 0 && i_.getB())
            return Complexo(a / i_.getA(), b / i_.getB());
        else
            throw runtime_error("Divisão por zero não é permitida");
	}
	else if (operacao == '=')
       return * new Complexo(i_);
	else
	 return Complexo();

}

//Para Fazer
Complexo Complexo::operator+(Complexo &i_){

	return Calcular('+', i_);
}

//Para Fazer
Complexo Complexo::operator-(Complexo &i_){

	return Calcular('-', i_);
}

//Para Fazer
Complexo Complexo::operator*(Complexo &i_){

	return Calcular('*', i_);
}

//Para Fazer
Complexo Complexo::operator/(Complexo &i_){

	return Calcular('/', i_);
}

//Para Fazer
Complexo& Complexo::operator=(Complexo const &i_){
   
	if (this != &i_){ 
		return * new Complexo(i_);
	}

	return *this;
}

//Para Fazer
bool Complexo::operator==(Complexo const &i_){
	return a == i_.a && b == i_.b;
}

//Para Fazer
bool Complexo::operator!=(Complexo const &i_){
	return a != i_.a && b != i_.b;
}

float Complexo::getA(){
	return a;
}
float Complexo::getB(){
	return b;
}
