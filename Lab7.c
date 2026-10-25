#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() 
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    task_1();
    task_2();
    dz();
}

int task_1() 
{
    int yeas;

    printf("Введите год: ");
    scanf("%d", &yeas);

    if ((yeas % 4 == 0 && yeas % 100 != 0) || (yeas % 400 == 0)) {
        printf("год %d високосный\n", yeas);
    }
    else {
        printf("год %d не високосный\n\n\n", yeas);
    }

    return 0;
}


int task_2() {

    /*
     * x < 3.2:
     * Пусть x = 2 (2 < 3.2)
     * F(2.0) = 2.0^4 + 9 = 16 + 9 = 25.0000
     *
     * x >= 3.2:
     * Пусть x = 4 (4 >= 3.2)
     * F(4.0) = (54 * 4.0^4) / (-5 * 4.0^2 + 7) = (54 * 256) / (-5 * 16 + 7) = 13824 / -73 ≈ -189.3699
     */

    double x;

    printf("введите значение x: ");
    scanf("%lf", &x);

    printf("F(%.2f) = %.4f\n", x, (x < 3.2) ? (pow(x, 4) + 9) : ((54 * pow(x, 4)) / (-5 * pow(x, 2) + 7)));

    return 0;
}

int dz() 
{
    double x, y;

    printf("введите два числа x и y через пробел: ");
    scanf("%lf %lf", &x, &y);

    if (x < y) {
        printf("%g < %g\n", x, y);
    }
    else if (x > y) {
        printf("%g > %g\n", x, y);
    }
    else {
        printf("%g = %g\n", x, y);
    }

    return 0;
}