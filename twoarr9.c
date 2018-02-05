#include <stdio.h>

/*
 * #6 Задание:
Дано нечетное число n, не превосходящее 15. Создайте двумерный массив
int arr[n][n] из n×n элементов, заполнив его символами "." (точка).
Затем заполните символами "*" (умножить) среднюю строку массива,
средний столбец массива, главную диагональ и побочную диагональ.

В результате символы "*" в массиве должны образовать изображение звездочки.

Выведите полученный массив на экран, разделяя элементы массива пробелами,
Например:

Размер массива: 5

* . * . *
. * * * .
* * * * *
. * * * .
* . * . *
 */

int main()
{
    int n = 0;                  //размер массива
    int i, j;                   //переменные

    printf("Введите нечетное число, не превосходящее 15:\n");
    do{
        scanf("%d", &n);
        /* ограничение размера матрицы и исключение четного числа элементов */
        if((n % 2) == 0) { printf("Ошибка! Вы ввели четное число. Повторите ввод!\n"); }
        if(n > 15) { printf("Ошибка! Размер матрицы не может быть более 15 элементов. Повторите ввод!\n");}
    }while((n % 2) == 0 || n > 15);


    int arr[n][n];              //массив

    /* заполняем массив символами '*' и '.' */
    for(i = 0; i < n; i++)      //бежим по строкам
    {
        for(j = 0; j < n; j++)  //бежим по столбцам
        if(i == j || i == (n - 1) - j) { arr[i][j] = '*'; }
            else if(i == n - i - 1 || j == n - j - 1) { arr[i][j] = '*'; }
                else { arr[i][j] = '.'; }
    }

    /* Выводим на печать */
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++) { printf("%3c", arr[i][j]); }
        printf("\n");
    }
    printf("\n");
    return 0;
}