#include <iostream>
#include <locale.h>
#include <stdio.h>

void task6()
{
	int y,sum=0, sum1=0;
	for (size_t p = 1; p <= 10; p++)
	{
		printf("������� ��� �������� %d ��������: ", p);
		scanf_s("%d", &y);
		if (y < 1985) {
			sum = sum + 1;
			
		}
		if (y > 1990) {
			sum1 = sum1 + 1;
			
		}
	}
	printf("�����, ���������� �� 1985: %d", sum);
	printf("�����, ���������� ����� 1999 : %d", sum1);
	
	
}


void task5()
{
	int sum=0, kl, kol;
	for (size_t kl = 1; kl <=11; kl++)
	{
		printf("������� ���������� �������� � %d ������: ", kl);
		scanf_s("%d", &kol);
		if ((kl % 2)!= 0) {
			sum = sum + kol;
		}
	}
	printf("����� �������� � 1, 3, 5, 7, 9, 11 �������: %d\n", sum);

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

		printf("%d - ���������� ������� � �������\n", n);
		printf("%d - ���������� ������� � �������\n", k);
		i--;
	} while (i > 0);
	printf("����� ������� � ������ - %d\n", sum);
	printf("����� ������� � ������� - %d\n", sumk);
}



void task3()
{
	int a,b,c=0;
	printf("������� ���������� �������: ");
	scanf_s("%d", &a);
	for (size_t i = 1; i < a; i++)
	{
		printf("������� ��������� ������: ");
		scanf_s("%d", &b);
	}
	if (b > 1000) {
		c = c + b;
		printf("����� �������, ���������� ����� 1000 ���: %d", c);
	}
}


void task2()
{
	int i, sum=0;

	for (size_t i = 1; i < 50; i+=2)
	{
		
		sum = i + sum;
	
	}
	printf("����a �������� �����: %d\n", sum);
}


void task1()
{
	
	int n, kolvo = 0;
	n = 1 + rand() % 1000;
	if (n >= 64) {
		kolvo = n / 64;
		n %= 64;
		printf("����� �� 64: %d\n", kolvo);
	}
	if (n >= 32) {
		kolvo = n / 32;
		n %= 32;
		printf("����� �� 32: %d\n",kolvo);
	}
	if (n >= 16) {
		kolvo = n / 16;
		n %= 16;
		printf("����� �� 16: %d\n", kolvo);
	}
	if (n >= 8) {
		kolvo = n / 8;
		n %= 8;
		printf("����� �� 8: %d\n", kolvo);
	}
	if (n >= 4) {
		kolvo = n / 4;
		n %= 4;
		printf("����� �� 4: %d\n", kolvo);
	}
	if (n >= 2) {
		kolvo = 1;
		n %= 2;
		printf("����� �� 2: %d\n", kolvo);
	}
	if (n == 1) {
		kolvo = 1;
		printf("����� �� 1: %d\n", kolvo);
	}
}



void main()
{
	setlocale(LC_ALL, "");
	int task, x;
start:
	printf("������� ����� �������: ");
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
	printf("������ ����������? 1 ��� 0 - ");
	scanf_s("%d", &x);

	if (x = 1) {
		goto start;
	}
	system("pause");
}
