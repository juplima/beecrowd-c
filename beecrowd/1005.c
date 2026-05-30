#include <stdio.h>

int main () {

double A, B, MEDIA;

printf("Qual é o valor da nota A:");//
scanf("%lf", &A);

printf("Qual é o valor da nota B:");//
scanf("%lf", &B);

MEDIA = ((A * 3.5) + (B * 7.5)) / 11;

printf("MEDIA = %.5lf\n", MEDIA); // o "." é dps do "%"  e antes do número

return 0;

}
