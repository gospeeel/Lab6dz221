#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>


void main() {
    setlocale(LC_ALL, "RUS");

    double x, y;

    printf("������� ������ ���������� �����, x:");
    scanf("%lf", &x);

    printf("������� ������ ���������� �����, y:");
    scanf("%lf", &y);

    printf("\n������� ����� � ������������ (%lf;%lf)\n\n", x, y);

    if ((x >= -6 && y >= 1) && (x <= 7 && y <= 1) || (x >= 3 && y >= 6) && (x <= 4 && y <= 6))
        printf("����� � ������������ (%lf;%lf) ����������� ������ ����������� �������\n\n", x, y);
    else
        printf("����� � ������������ (%lf;%lf) �� ����������� ������ ����������� �������\n\n", x, y);
}