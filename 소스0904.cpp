//#include <stdio.h>
//int main()
//{
//	int num[4] = { 4, 3, 1, 2 };
//	int temp;
//
//	temp = num[0];
//	num[0] = num[2];
//	num[2] = temp;
//
//	temp = num[1];
//	num[1] = num[3];
//	num[3] = temp;
//
//	temp = num[2];
//	num[2] = num[3];
//	num[3] = temp; 
//	
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%d ", num[i]);
//	}
//}

//#include <stdio.h>
//void main()
//{
//	int num[4];
//	int temp;
//	for (int i = 0; i < 4; i++)
//	{
//		scanf("%d", &num[i]);
//	}
//
//	for (int k = 3; k > 0; k--)
//	{
//		for (int i = 0; i < k; i++)
//		{
//			if (num[i] > num[i + 1])
//			{
//				temp = num[i];
//				num[i] = num[i + 1];
//				num[i + 1] = temp;
//			}
//		}
//	}
//
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%d ", num[i]);
//	}
//}

//#include <stdio.h>
//void main()
//{
//	int one = 1, two = 2;
//	int max = 0;
//	if (one > two) max = one;
//	else max = two;
//	printf("max = %d\n", max);
//}

//#include <stdio.h>
//void main()
//{
//	int one = 1, two = 3, three = 2;
//	int max = 0;
//	if (one > two)
//	{
//		if (one > three) max = one;
//		else max = three;
//	}
//	else
//	{
//		if (two > three) max = two;
//		else max = three;
//	}
//	printf("max = %d\n", max);
//}

//#include <stdio.h>
//void main()
//{
//	int a[3] = { 1, 3, 2 };
//	int max = a[0];
//	for (int i = 1; i < 3; i++)
//	{
//		if (max < a[i])
//			max = a[i];
//	}
//	printf("max = %d\n", max);
//}

#include <stdio.h>
void main()
{
	int a[5] = { 1, 3, 6, 4, 2 };
	int min = a[0], max = a[0], total = a[0];
	float avg;
	for (int i = 1; i < 5; i++)
	{
		total = total + a[i];
		if (min > a[i])
			min = a[i];
		if (max < a[i])
			max = a[i];
	}

	avg = total / 5;

	printf("ÃÖ¼Ú°ª: %d\n", min);
	printf("ÃÖ´ñ°ª: %d\n", max);
	printf("¿ø¼ÒÀÇ ÃÑÇÕ: %d\n", total);
	printf("Æò±Õ: %d\n", avg);
}