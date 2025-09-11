//#include <stdio.h>
//void main()
//{
//	int a[5] = { 1, 3, 6, 4, 2 };
//	int min = a[0], max = a[0], total = a[0];
//	float avg = 0;
//	for (int i = 1; i < 5; i++)
//	{
//		total = total + a[i];
//		if (min > a[i])
//			min = a[i];
//		if (max < a[i])
//			max = a[i];
//	}
//	avg = total / 5.0;
//
//	printf("ÃÖ¼Ú°ª: %d\n", min);
//	printf("ÃÖ´ñ°ª: %d\n", max);
//	printf("¿ø¼ÒÀÇ ÃÑÇÕ: %d\n", total);
//	printf("Æò±Õ: %.1f\n", avg);
//}

//#include <stdio.h>
//void main()
//{
//	int a1[10] = { 1, 1, 4, 5, 6, 2, 3, 3, 4, 1 };
//	int dice[7] = {};
//	for (int i = 0; i < 10; i++)
//	{
//		dice[a1[i]]++;
//	}
//	for (int i = 1; i <= 6; i++)
//	{
//		printf("%d(ÀÌ)°¡ ³ª¿Â È½¼ö: %d\n", i, dice[i]);
//	}
//}


//#include <stdio.h>
//int main()
//{
//	char arr[2][3] = { '1', '2', '3', '4', '5', '6' };
//	printf("%d\n", sizeof(arr));
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[2][3] = { {'1', '2', '3'}, {'4', '5', '6'} };
//	printf("%d\n", sizeof(arr));
//	return 0;
//}

//#include <stdio.h>
//void main()
//{
//	int arr2d[5][4] = { {662, 7, 4, 74}, {8, 396, 299, 95}, {66, 73, 86, 0}, {116, 26, 586, 42}, {84, 7, 41, 11} };
	/*for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%3d ", arr2d[i][j]);
		}
		printf("\n");
	}*/
//}

#include <stdio.h>
int main()
{
	int arr[3][3] = { {2, 4, 6}, {8, 10, 12}, {14, 16, 18} };
	int temp;
	for (int i = 0; i <3; i++)
	{
		for (int k = 0; k < 3; k++)
		{
			if (i == k)
				continue;
			else if (i > k)
			{
				arr[i][k] = arr[i][k -1];
			}
			else
			{
				arr[i][k] = arr[i][k + 1];
			}
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%3d ", arr[i][j]);
		}
		printf("\n");
	}
}

//0, 0   1, 0   2, 0
//0, 1   1, 1   2, 1
//0, 2   1, 2   2, 2
