#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

	return 0;

}
