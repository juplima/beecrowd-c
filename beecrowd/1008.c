#include <stdio.h>

int main (){

int NUMBER, TIME;
double VALUE, SALARY;

printf("Digite o num");//
scanf("%d", &NUMBER);

printf("Digite o número de horas trabalhadas:");//
scanf("%d", &TIME);

printf("Digite o Salário:");//
scanf("%lf", &VALUE);

SALARY = TIME * VALUE;

printf("NUMBER = %d\n", NUMBER);
printf("SALARY = U$ %.2lf\n", SALARY);

return 0;


}
