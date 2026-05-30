#include <stdio.h>

int main () {

double A, B, C, MEDIA;

printf("Digite a nota A:"); //
scanf("%lf", &A);

printf("Digite a nota B:"); //
scanf("%lf", &B);

printf("Digite a nota C:"); //
scanf("%lf", &C);

MEDIA = ((A * 2) + (B * 3) + (C * 5)) / 10;

printf("MEDIA = %.1lf\n", MEDIA);

return 0;

}
