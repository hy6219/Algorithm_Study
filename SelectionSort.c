#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	1.배열에서 최댓값을 찾기

	2.최댓값, 맨 오른쪽 수 교환

	*/
int main()
{
	int arr[100] = { 0 };
	int i = 0;
	int j = 0;
	int max = 0;

	int n = 0;
	int temp = 0;

	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	//max limit이 오른쪽에서부터 줄어드는 것을 고려하여 iterator를 고려
	for (i = n-1; i >0; i--)
	{
		max = 0;
		/*최댓값 찾기*/
		for (j = 0; j < i; j++)
		{
			if (arr[j] > arr[max])
			{
				max = j; //변수의 유효범위(life span) 때문에 인덱스를 저장해두는 것이 좋음
			}
		}
		/*최댓값을 찾고 난 후, 맨 뒤의 값보다 큰 경우, 최댓값 <-> 맨 마지막 값을 바꾸기!*/
		if (arr[max] > arr[i])
		{
			temp = arr[i];
			arr[i] = arr[max];
			arr[max] = temp;
		}
	}

	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
}
