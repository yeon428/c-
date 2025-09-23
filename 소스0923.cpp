#include <stdio.h>
void main()
{
	int line;
	printf("10미만의 숫자 입력: ");
	scanf("%d", &line);
	int arr[10];
	char arr2[10][10];
	for (int i = 0; i < line; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	for (int i = 0; i < line; i++)
	{
		for (int k = 0; k < arr[i]; k++)
		{
			arr2[i][k] = '*';
			/*if (k == arr[i] - 1)
				arr2[i][k + 1] = '\n';*/
		}
	}
	

	for (int i = 0; i < line; i++)
	{
		for (int k = 0; k < arr[i] + 1; k++)
		{
			printf("%c", arr2[i][k]);
		}
		printf("\n");
	}
}