//#include <stdio.h>
//int main()
//{
//	int ary[2][3];
//	int i, k;
//	int num = 10;
//	for (i = 0; i < 2; i++)
//		for (k = 0; k < 3; k++)
//			ary[i][k] = --num;
//	for (i = 0; i < 2; i++)
//	{
//		for (k = 0; k < 3; k++)
//		{
//			printf("%3d", ary[i][k]);
//		}
//		printf("\n");
//	}
//}

#include <stdio.h>
void main()
{
	const int N = 10;
	int line;
	printf("10미만의 숫자 입력: ");
	scanf("%d", &line);
	int arr[N] = {};
	char arr2[N][N] = {};
	for (int i = 0; i < line; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < line; i++)
	{
		for (int k = 0; k < arr[i]; k++)
		{
			arr2[i][k] = '*';
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int k = 0; k < N; k++)
		{
			if (0 == arr[i])printf("\n");
			else printf("%c", arr2[i][k]);
		}
	}
}