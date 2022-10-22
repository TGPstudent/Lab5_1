// Lab5_1.c: Рiзниця елементiв одномiрних масивiв
#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(void)
{
	setlocale(LC_CTYPE, "ukr");
	const int N = 5;
	typedef int Gtyp[5];
	Gtyp a, b, c;
	unsigned int i;
	printf("\n Введiть значення елементiв масиву A: \n");
	for (i = 0; i <= (N - 1); i++)
	{
		printf("\t а[%d]=", i + 1); scanf("%d", &a[i]);
	}
	printf("\n Введiть значення елементiв масиву B: \n");
	for (i = 0; i <= (N - 1); i++)
	{

		printf("\t b[%d]=", i + 1); scanf("%d", &b[i]);
		c[i] = a[i] - b[i];
	}
	system("cls");
	printf("\n Ви ввели: Вектор A[1,%d] = {", N);
	i = 0;
	while (i <= N - 1)
	{
		printf("%d, ", a[i]);
		i = i++;
	}
	printf("\b\b}");
	printf("\n Ви ввели: Вектор B[1,%d] = {", N);
	i = 0;
	while (i <= N - 1)
	{
		printf("%d, ", b[i]);
		i = i++;
	}
	printf("\b\b}\n");

	printf("\n Результуючий вектор рiзницi: C[1,%d] = {", N);
	i = 0;
	while (i <= N - 1)
	{
		printf("%d, ", c[i]);
		i = i++;
	}
	printf("\b\b}");
	int getch(); getch();
	return 0;
}