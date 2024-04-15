#include <iostream>
#include <string>

using namespace std;

#ifndef _CLASS_COMPLEXO_
	#define _CLASS_COMPLEXO_



class Complexo {
	private:
		//INICIO - Definição base ------------
		float a; //parte real
		float b; //parte imaginária
		//FIM - Definição base ---------------
		
		//INICIO - Definição Complementar ----
		/*Aos critérios do aluno
		 *adicionar aqui
		 */
		//FIM - Definição Complementar -------
	public:
		//INICIO - Definição base ------------
		~Complexo();
		Complexo();
		void imprimir();
		Complexo(Complexo const &i_);
		Complexo(float a_, float b_);
		Complexo pow(int i_); //Método de Potência de um número imaginário elevado a um número inteiro "i_"
		Complexo operator+(Complexo &i_);
		Complexo operator-(Complexo &i_);
		Complexo operator*(Complexo &i_);
		Complexo operator/(Complexo &i_);
		Complexo& operator=(Complexo const &i_);
		bool operator==(Complexo const &i_);
		bool operator!=(Complexo const &i_);
		//FIM - Definição base ---------------
		
		//INICIO - Definição Complementar ----
		/*Aos critérios do aluno
		 *adicionar aqui
		 */
		//FIM - Definição Complementar -------
		



		
};
#endif
