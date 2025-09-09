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
//	printf("Æò±Õ: %f\n", avg);
//}

#include <stdio.h>
void main()
{
	int a1[10] = { 1, 1, 4, 5, 6, 2, 3, 3, 4, 1 };
	int a2[6] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		for (int k = 1; k<=6; k++)
			if (a1[i] == k)
			{
				a2[k - 1]++;
				break;
			}
	}
	for (int i = 0; i < 6; i++)
	{
		printf("%d(ÀÌ)°¡ ³ª¿Â È½¼ö: %d\n", i + 1, a2[i]);
	}
}