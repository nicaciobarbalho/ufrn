#include <iostream>
#include <string>
#include "complexo.h"

using namespace std;

int main() {
	//Exemplos Aleatórios de Testes para correção
	float sucesso = 0; //Contador de testes bem sucedidos
	float total_testes = 10; //Total de testes aplicado. Número fictício
	Complexo i1(1.,2.); 
	Complexo i2; 
	Complexo resposta = i2;
	
	if ((i1+i2)==i2)
		sucesso++;
	if ((i1-i2)!=i2)
		sucesso++;
	if ((i1*i2)==i2)
		sucesso++;
	if ((i1/i2)!=i2)
		sucesso++;

	cout << "Nota final = " << 10*sucesso/total_testes << endl;
	/*
	 * Daqui em diante, irei fazer diversos outros testes. Cada teste bem sucedido incrementará "contador" em "1" unidade. No final, a nota será data como a divisão de "testes bem sucedidos" por "quantidade de testes" * 10,
	 */
	Complexo comp = Complexo(2.0, 4.0);
	Complexo pow_ = comp.pow(3);
	comp.imprimir();
	pow_.imprimir();
	
	return 0;
}

