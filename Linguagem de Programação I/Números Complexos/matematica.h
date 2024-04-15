#include <iostream>
using namespace std;

class Matematica
{
    private:
        
    public:
        static float Seno(float angulo);
        static float Tangente(float y, float x);
        static float Cosseno(float angulo);
        static float Absoluto(float x);
        static int Fatorial(int n);
        static float Potencia(float x, int expoente);
        static float Raiz(float x, int expoente = 2);
        static float Precisao(float x, int precisao);
};
