#include <math.h>
#include "complexo.h"

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

	float magnitude = sqrt(a * a + b * b);
    float angulo = atan2(b, a);
    
	float nova_magnitude = std::pow(magnitude, i_);
	float novo_angulo = angulo * i_;

	return PolarParaRetangular(nova_magnitude, novo_angulo);
}

Complexo Complexo::PolarParaRetangular(float magnitude, float angulo){

	float real = magnitude * cos(angulo);
    float img = magnitude * sin(angulo);

	return Complexo(real, img);
}

void Complexo::CalcularTheta(Complexo &i_, float &theta1, float &theta2, float &raiz_1, float &raiz_2) {
	
	raiz_1 = sqrt(a * a + b * b);
    raiz_2 = sqrt(i_.a * i_.a + i_.b * i_.b);
    theta1 = atan2(b, a);
    theta2 = atan2(i_.b, i_.a);
}

Complexo Complexo::Multiplicacao(Complexo &i_){

	float real = a * i_.a - b * i_.b; 
    float imag = a * i_.b + b * i_.a; 

	return Complexo(real, imag);
}

Complexo Complexo::Divisao(Complexo &i_){

	float theta1 = 0, theta2 = 0, raiz_1 = 0, raiz_2 = 0;

	CalcularTheta(i_, theta1, theta2, raiz_1, raiz_2);

    float magnitude = raiz_1 / raiz_2;
    float angulo = theta1 - theta2;

    return PolarParaRetangular(magnitude, angulo);
}

Complexo Complexo::Calcular(char operacao, Complexo &i_){

    if (operacao == '+')
        return Complexo(a + i_.a, b + i_.b);
    else if (operacao == '-')
        return Complexo(a - i_.a, b - i_.b);
    else if (operacao == '*')
       return Multiplicacao(i_);
    else if (operacao == '/'){
        if (i_.a != 0 && i_.b)
            return Divisao(i_);
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
