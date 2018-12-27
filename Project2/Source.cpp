#include <iostream>
#include <locale.h>
#include <stdio.h>

void task6()
{
	int y,sum=0, sum1=0;
	for (size_t p = 1; p <= 10; p++)
	{
		printf("Введите год рождения %d человека: ", p);
		scanf_s("%d", &y);
		if (y < 1985) {
			sum = sum + 1;
			
		}
		if (y > 1990) {
			sum1 = sum1 + 1;
			
		}
	}
	printf("Людей, родившихся до 1985: %d", sum);
	printf("Людей, родившихся после 1999 : %d", sum1);
	
	
}


void task5()
{
	int sum=0, kl, kol;
	for (size_t kl = 1; kl <=11; kl++)
	{
		printf("Введите количество учащихся в %d классе: ", kl);
		scanf_s("%d", &kol);
		if ((kl % 2)!= 0) {
			sum = sum + kol;
		}
	}
	printf("Сумма учеников в 1, 3, 5, 7, 9, 11 классах: %d\n", sum);

}

void task4()
{
	int n, sum = 0, k, sumk = 0, i = 30;
	do
	{
		do {
			n = 10 + rand() % 5;
			k = 10 + rand() % 10;
			

		} while (k <= n);
		sumk += k;
		sum += n;

		printf("%d - количество страниц в газетах\n", n);
		printf("%d - количество страниц в журнале\n", k);
		i--;
	} while (i > 0);
	printf("Сумма страниц в газете - %d\n", sum);
	printf("Сумма страниц в журнале - %d\n", sumk);
}



void task3()
{
	int a,b,c=0;
	printf("Введите количество товаров: ");
	scanf_s("%d", &a);
	for (size_t i = 1; i < a; i++)
	{
		printf("Введите стоимость товара: ");
		scanf_s("%d", &b);
	}
	if (b > 1000) {
		c = c + b;
		printf("Сумма товаров, стоимостью более 1000 руб: %d", c);
	}
}


void task2()
{
	int i, sum=0;

	for (size_t i = 1; i < 50; i+=2)
	{
		
		sum = i + sum;
	
	}
	printf("Суммa нечетных чисел: %d\n", sum);
}


void task1()
{
	
	int n, kolvo = 0;
	n = 1 + rand() % 1000;
	if (n >= 64) {
		kolvo = n / 64;
		n %= 64;
		printf("Купюр по 64: %d\n", kolvo);
	}
	if (n >= 32) {
		kolvo = n / 32;
		n %= 32;
		printf("Купюр по 32: %d\n",kolvo);
	}
	if (n >= 16) {
		kolvo = n / 16;
		n %= 16;
		printf("Купюр по 16: %d\n", kolvo);
	}
	if (n >= 8) {
		kolvo = n / 8;
		n %= 8;
		printf("Купюр по 8: %d\n", kolvo);
	}
	if (n >= 4) {
		kolvo = n / 4;
		n %= 4;
		printf("Купюр по 4: %d\n", kolvo);
	}
	if (n >= 2) {
		kolvo = 1;
		n %= 2;
		printf("Купюр по 2: %d\n", kolvo);
	}
	if (n == 1) {
		kolvo = 1;
		printf("Купюр по 1: %d\n", kolvo);
	}
}



void main()
{
	setlocale(LC_ALL, "");
	int task, x;
start:
	printf("Введите номер задания: ");
	scanf_s("%d", &task);

	switch (task)
	{
	case 1: task1();
		break;
	case 2:task2();
		break;
	case 3:task3();
		break;
	case 4:task4();
		break;
	case 5:task5();
		break;
	case 6:task6();
		break;

	}
	printf("Хотите продолжить? 1 или 0 - ");
	scanf_s("%d", &x);

	if (x = 1) {
		goto start;
	}
	system("pause");
}
