//#include <stdio.h>
//
//void main()
//{
//	int a = 100;
//
//	while (a == 200)
//	{
//		printf("while�� ���ο� ��� �Խ��ϴ�.\n");
//	}
//	do {
//		printf("do ~ while�� ���ο� ��� �Խ��ϴ�.\n");
//	} while (a == 200);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main()
//{
//	int a, b;
//
//	while (1)
//	{
//		printf("���� �� �� �Է� (���߷��� 0�� �Է�) : ");
//		scanf("%d %d", &a, &b);
//
//		if (a == 0)
//			break;
//		printf("%d + %d = %d \n", a, b, a + b);
//	}
//	printf("0�� �Է��ؼ� for���� Ż���߽��ϴ�.\n");
//}

#include <stdio.h>

void main()
{
	int hap = 0;
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			continue;

		hap += i;
	}
	printf("1~100������ ��(3�� ��� ����): %d\n", hap);
}