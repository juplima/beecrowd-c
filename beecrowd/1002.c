#include <stdio.h>

int main () {

double area, raio, pi; // float = menos preciso e ocupa menos memória / float = mais preciso e ocupa mais memória

pi = 3.14159;

printf("Qual o valor do raio"); // essa linha foi apagada pro beecrowd aceitar

scanf("%lf", &raio);  // no double se usa %lf

area = pi * (raio * raio);  // já q é elevado a 2, é melhor fazer raio * raio, do q raio * 2

printf("A=%.4lf\n", area); // 4 =  casas decimais depois da vírgula/ponto.

return 0;

}
