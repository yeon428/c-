//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main()
//{
//	int a, b, c, d;
//	int hap;
//
//	printf("1��° ���ڸ� �Է��ϼ���: ");
//	scanf("%d", &a);
//	printf("2��° ���ڸ� �Է��ϼ���: ");
//	scanf("%d", &b);
//	printf("3��° ���ڸ� �Է��ϼ���: ");
//	scanf("%d", &c);
//	printf("4��° ���ڸ� �Է��ϼ���: ");
//	scanf("%d", &d);
//
//	hap = a + b + c + d;
//
//	printf("�հ� ==> %d\n", hap);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main()
//{
//	int aa[4];
//	int hap;
//
//	printf("1��° ���ڸ� �Է��ϼ���: ");
//	scanf("%d", &aa[0]);
//	printf("2��° ���ڸ� �Է��ϼ���: ");
//	scanf("%d", &aa[1]);
//	printf("3��° ���ڸ� �Է��ϼ���: ");
//	scanf("%d", &aa[2]);
//	printf("4��° ���ڸ� �Է��ϼ���: ");
//	scanf("%d", &aa[3]);
//
//	hap = aa[0] + aa[1] + aa[2] + aa[3];
//	printf("�հ� ==> %d\n", hap);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main()
//{
//	int aa[4];
//	int hap = 0;
//	int i;
//
//	for (i = 0; i <= 3; i++)
//	{
//		printf("%d��° ���ڸ� �Է����ּ���: ", i + 1);
//		scanf("%d", &aa[i]);
//	}
//
//	hap = aa[0] + aa[1] + aa[2] + aa[3];
//
//	printf("�հ� ==> %d\n", hap);
//}

#include <stdio.h>

void main()
{
	int aa[4] = { 100, 200, 300, 400 };
	int bb[] = { 100, 200, 300, 400 };
	int cc[4] = { 100, 200 };
	int dd[4] = { 0 };
	int i;

	for (i = 0; i <= 3; i++)
		printf("aa[%d]==>%d\t", i, aa[i]);
	printf("\n");

	for (i = 0; i <= 3; i++)
		printf("bb[%d]==>%d\t", i, bb[i]);
	printf("\n");
	for (i = 0; i <= 3; i++)
		printf("cc[%d]==>%d\t", i, cc[i]);
	printf("\n");
	for (i = 0; i <= 3; i++)
		printf("dd[%d]==>%d\t", i, dd[i]);
	printf("\n");
}