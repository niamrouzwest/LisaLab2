#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{

	int const n = 10;
	float Kisa[n];
	float min;
	int imin = 0;
	setlocale(LC_ALL, "rus");

	printf("Введите элементы массива \n");
	//Ð·Ð°Ð¿Ð¾Ð»Ð½ÑÐµÐ¼ Ð¼Ð°ÑÑÐ¸Ð²

	for (int i = 0; i < 10; i++)
	{
		printf("Kisa [%d]=", i);
		scanf("%f", &Kisa[i]);
	}
	//ÑÐ¾Ð·Ð´Ð°Ñ‘Ð¼ Ñ†Ð¸ÐºÐ» Ð´Ð»Ñ Ð¿Ð¾Ð¸ÑÐºÐ° Ð½Ð¾Ð¼ÐµÑ€Ð° Ð¼Ð¸Ð½Ð¸Ð¼Ð°Ð»ÑŒÐ½Ð¾Ð³Ð¾ Ð¿Ð¾ Ð¼Ð¾Ð´ÑƒÐ»ÑŽ ÑÐ»ÐµÐ¼ÐµÐ½Ñ‚Ð° Ð¼Ð°ÑÑÐ¸Ð²Ð°

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

	float sum = 0;

	for (int i = 0; i < 10; i++)
	{
		if (Kisa[i] < 0)
		{
			for (i += 1; i < 10; i++) {
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
		if (Kisa[i] >= a && Kisa[i] <= b && i < 9 - count)
		{
			for (int j = i; j < 10; j++)
			{
				if (j == 9) { break; }
				else {
					Kisa[j] = Kisa[j + 1];
				}

			}
			Kisa[9 - count] = 0;
			count++;
			i--;

		}


	}

	for (int i = 0; i < 10; i++)
	{
		printf("%.f,", Kisa[i]);


	}





}
