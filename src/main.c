#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sum_digits(int num)
{
	int sum = 0;
	num = abs(num);

	while(num > 0)
		{
			sum = num % 10;
			num /= 10;
		}

	return sum;
}

int main (int args, char *argv[])
{
	if (atgs != 2)
	{
	printf("Использование: %s <размер массива>\n",argv[0]);
	printf("Пример: %s 10\n", argv[0]);
	return 1;	
	}

	int n = atoi (argv[1]);

	if(n <= 0)
	{
		printf("Ошибка: размер массива должен быть положительным числом\n");
		return 1;
	}

	srand(time(NULL));

	int arr[n];

	for (int i = 0; i < n; i++) 
		{
				arr[i] = rand() % 100 + 1;  
		}

	printf("Суммы цифр:      ");
	for (int i = 0; i < n; i++) 
	{
			printf("%d ", sum_digits(arr[i]));
	}
	printf("\n");

	return 0;

}
