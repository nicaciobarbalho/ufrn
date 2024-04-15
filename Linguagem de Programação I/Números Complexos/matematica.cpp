#include <iostream>
#include "matematica.h"
#include <cmath>

using namespace std;

#define PI 3.14159265358979323846f
#define EPSILON 1e-15

float Matematica::Seno(float angulo){
    float resultado = angulo;
    float termo = angulo;
    int i = 1;
    while (termo > EPSILON || termo < -EPSILON) {
        termo *= -angulo * angulo / ((2 * i) * (2 * i + 1));
        resultado += termo;
        i++;
    }
    return resultado;
}

float Matematica::Cosseno(float angulo) {
    const int terms = 10; // Número de termos na série de Maclaurin
    double cos_angulo = 0.0;

    for (int i = 0; i < terms; i++) {
        int exponent = 2 * i;
        double term = Matematica::Potencia(angulo, exponent) / Matematica::Fatorial(exponent);
        if (i % 2 == 1) {
            term *= -1; 
        }
        cos_angulo += term;
    }

    return cos_angulo;
}

float Matematica::Tangente(float y, float x){

    double angulo = 0.0;
    double abs_y = Matematica::Absoluto(y); 

    if (x > 0) {
        angulo = Matematica::Seno(abs_y / x);
    } else if (x < 0) {
        angulo = PI - Matematica::Seno(abs_y / -x);
    } else {
        angulo = PI / 2.0;
    }
    if (y < 0) {
        angulo = -angulo;
    }
    return angulo;
}

float Matematica::Absoluto(float x){
    return x >= 0 ? x : -x;
}

int Matematica::Fatorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

float Matematica::Potencia(float x, int expoente){

    if (expoente == 0) {
        return 1.0;
    }

    float result = 1.0;
    for (int i = 1; i <= expoente; i++) {
        result *= x;
    }

    return result;
}

float Matematica::Raiz(float x, int expoente){
    float raiz = x / expoente; 
    int limite = 1000; 

    while (limite > 0) {
        double proxima_raiz = 0.5 * (raiz + x / raiz); 
        if (proxima_raiz == raiz || proxima_raiz == 0.0) {
            break; 
        }
        raiz = proxima_raiz;
        limite--;
    }

    return raiz;
}

float Matematica::Precisao(float x, int precisao) {
    float fator = Matematica::Potencia(10.0f, precisao);
    return round(x * fator) / fator;
}