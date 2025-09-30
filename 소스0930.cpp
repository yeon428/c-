//#include <stdio.h>
//void main()
//{
//	const int N = 10;
//	int line;
//	printf("10미만의 숫자 입력: ");
//	scanf("%d", &line);
//	int arr[N] = {};
//	char arr2[N][N] = {};
//	for (int i = 0; i < line; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	for (int i = 0; i < line; i++)
//	{
//		for (int k = 0; k < arr[i]; k++)
//		{
//			arr2[k][i] = '*';
//		}
//	}
//	
//	for (int i = 0; i < N; i++)
//	{
//		for (int k = 0; k < N - 1; k++)
//		{
//			if (arr2[i][k] != '*')
//				arr2[i][k] = ' ';
//		}
//	}
//
//	for (int i = 0; i < N; i++)
//	{
//		for (int k = 0; k < N; k++)
//		{
//			if (0 == arr2[i][k])printf("\n");
//			else printf("%c", arr2[i][k]);
//		}
//	}
//}

#include <stdio.h>
void main()
{
	int N = 5;
	int start = 1;
	int arr[5][5] = {};

	for (int i = 0; i < N; i++)
	{
		for (int k = 0; k < N; k++, start++)
		{
			arr[i][k] = start;
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int k = 0; k < N; k++)
		{
			printf("%3d", arr[i][k]);
		}
		printf("\n");
	}
}