//#include <stdio.h>
//void main()
//{
//	int i, k;
//	for (i = 1, k = 1; i <= 9; i++, k++)
//		printf(" %d X %d = %d\n", i, k, i * k);
//}

//#include <stdio.h>
//
//void main()
//{
//	int i;
//	i = 0;
//	for (;;)
//	{
//		printf("%d \n", i);
//		i++;
//	}
//}

#include <stdio.h>

void main()
{
	int i;
	for (i = 0; i < 128; i++)
	{
		if (i % 16 == 0)
		{
			printf("--------------------\n");
			printf("10���� 16���� ���� \n");
			printf("--------------------\n");
		}
		printf("%5d %5x %5c\n", i, i, i);
	}
}