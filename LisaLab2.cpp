// LisaLab2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdio.h>

int main()
{
	
	int const n=10;
	float Kisa[n];
	float min;
	int imin=0;
	setlocale(LC_ALL, "rus");

	printf("Введите элементы массива \n");
	//заполняем массив
	
	for (int i = 0; i <10; i++)
	{
		printf("Kisa [%d]=", i);
		scanf("%f", &Kisa[i]);
	}
	//создаём цикл для поиска номера минимального по модулю элемента массива

	min = Kisa[0];

	for (int i = 0; i < 10; i++)

	{
		if (abs(min) > abs(Kisa[i]))
		{
			min = Kisa[i];
			imin = i;
		}

	}
	printf("Минимальное число =%f и его позиция =%d\n", min, imin);

	float sum=0;
	
	for (int i = 0; i < 10; i++)
	{
		if (Kisa[i] < 0 )
		{
			for ( i+=1; i < 10; i++) {
				sum += abs(Kisa[i]);
			}
			break;
		}
	}
	
	printf("Сумма =%f\n", sum);

	float a, b;

	printf("Введите a=");
	scanf("%f", &a);

	printf("Введите b=");
	scanf("%f", &b);


	int count = 0;

	for (int i = 0; i < 10; i++)
	
	{
		if (Kisa[i]>=a && Kisa[i]<=b)
		{
			for (int j = i; j < 10; j++)
			{
				if (j == 9) { break; }
				else {
					Kisa[j] = Kisa[j+1];  
				}

			 }
			Kisa[9 - count] = 0;
			count++;
			i--;
		}


	}

	for (int i = 0; i < 10; i++)
	{
		printf("%.f ,", Kisa[i]);


	}





}

