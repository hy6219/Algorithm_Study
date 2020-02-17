#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[100] = { 0 };
	int temp = 0;
	int i = 0;
	int j = 0;
	int n = 0;


	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n -1-i; j++)
		{
			/*
			맨마지막 인덱스에는 최댓값이 쌓일 것이므로
			0------------------n-2-i 까지(j,j+1고려) 반복시키는 것!
			*/
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}

}
