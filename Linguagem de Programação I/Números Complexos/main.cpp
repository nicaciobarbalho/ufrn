#include <iostream>
#include <string>
#include "complexo.h"

using namespace std;

int main() {
	
	Complexo comp = Complexo(10.0, 12.0);
	Complexo operador = Complexo(2.0, 3.0);

	cout << "Valores de entrada:" << endl;
	comp.imprimir();
	operador.imprimir();
	cout << "\n---------------------" << endl;

	
	cout << "Potência:" << endl;
	 Complexo pow_ = operador.pow(2);
	// ( 2+ 3i) ^ 2 = -5.00 + 12.00i
	pow_.imprimir(); 
	cout << "\n---------------------" << endl;
	
	cout << "Soma:" << endl;
	Complexo soma = (comp + operador);
	soma.imprimir();
	cout << "\n---------------------" << endl;

	cout << "Subtração:" << endl;
	Complexo subtracao = (comp - operador);
	subtracao.imprimir();
	cout << "\n---------------------" << endl;

	cout << "Multiplicação:" << endl;
	Complexo multi = (comp * operador);
	multi.imprimir();
	cout << "\n---------------------" << endl;

	cout << "Divisão:" << endl;
	Complexo divisao = (comp / operador);
	divisao.imprimir();
	cout << "\n---------------------" << endl;

	cout << "Igual:" << endl;
	Complexo igual = comp;
	igual.imprimir();
	cout << "\n---------------------" << endl;

	
	bool igualdade = comp == operador;
	cout << "Igualdade: " <<  igualdade <<endl;
	cout << "\n---------------------" << endl;

	bool diferente = comp != operador;
	cout << "Diferente: " <<  diferente <<endl;
	cout << "\n---------------------" << endl;

	return 0;
}

