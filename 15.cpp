//#include <stdio.h>
//void main()
//{
//	int aa[100], bb[100];
//	int i;
//
//	for (i = 0; i < 100; i++)
//	{
//		aa[i] = i * 2;
//	}
//
//	for (i = 0; i < 100; i++)
//	{
//		bb[i] = aa[99 - i];
//	}
//
//	printf("bb[0]�� %d, bb[99]�� %d �Էµ� \n", bb[0], bb[99]);
//}

//#include <stdio.h>
//void main()
//{
//	int aa[] = { 10, 20, 30, 40, 50 };
//	int count;
//
//	count = sizeof(aa) / sizeof(int);
//
//	printf("�迭aa[]�� ����� ������ %d�Դϴ�.\n", count);
// }

#include <stdio.h>

void main()
{
	char ss[8] = "Basic-C";
	int i;

	ss[5] = '#';

	for (i = 0; i < 8; i++)
	{
		printf("ss[%d] ==> %c\n", i, ss[i]);
	}

	printf("���ڿ� �迭 ss ==> %s\n", ss);
}