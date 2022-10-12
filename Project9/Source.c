#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>


void main() {
    setlocale(LC_ALL, "RUS");

    double x, y;

    printf("Введите первую координату точки, x:");
    scanf("%lf", &x);

    printf("Введите вторую координату точки, y:");
    scanf("%lf", &y);

    printf("\nВведена точка с координатами (%lf;%lf)\n\n", x, y);

    if ((x >= -6 && y >= 1) && (x <= 7 && y <= 1) || (x >= 3 && y >= 6) && (x <= 4 && y <= 6))
        printf("Точка с координатами (%lf;%lf) ПРИНАДЛЕЖИТ данной закрашенной области\n\n", x, y);
    else
        printf("Точка с координатами (%lf;%lf) НЕ ПРИНАДЛЕЖИТ данной закрашенной области\n\n", x, y);
}