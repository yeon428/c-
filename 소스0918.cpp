//#include <stdio.h>
//int main()
//{
//	int arr[3][3] = { {2, 4, 6}, {8, 10, 12}, {14, 16, 18} };
//	int temp;
//
//	//for (int i = 0; i < 3; i++)
//	//{
//	//	for (int k = 0; k < 3; k++)
//	//	{
//	//		//arr[i][k];
//	//		if (i > k)
//	//		{
//	//			temp = arr[i][k];
//	//			arr[i][k] = arr[k][i];
//	//			arr[k][i] = temp;
//	//		}
//	//	}
//	//}
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			printf("%3d ", arr[j][i]);
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//
//void main()
//{
//	const int m = 4;
//	const int n = 3;
//	long data[m][n];
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//			data[i][j] = i + j;
//	}
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++) {
//			printf("%3d", data[i][j]);
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main()
//{
//	int arr[5][5] = {};
//	int n = 1;
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++, n++)
//		{
//			arr[i][j] = n;
//		}
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("%3d", arr[i][j]);
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main()
//{
//	int arr[5][5] = {};
//	int n = 1;
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++, n++)
//		{
//			arr[i][j] = n;
//		}
//	}
//	for (int i = 4; i >= 0; i--)
//	{
//		for (int j = 4; j >= 0; j--)
//		{
//			printf("%3d", arr[i][j]);
//		}
//		printf("\n");
//	}
//}



//#include <stdio.h>
//int main()
//{
//	int arr2[5][5] = {};
//	int n = 1;
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++, n++)
//		{
//			arr2[i][j] = n;
//		}
//	}
//	int arr1[25] = {};
//	n = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++, n++)
//		{
//			arr1[n] = arr2[i][j];
//			printf("%d ", arr1[n]);
//		}
//	}
//}

#include <stdio.h>
int main()
{
	int line;
	printf("10 미만의 숫자 입력: ");
	scanf("%d", &line);

}