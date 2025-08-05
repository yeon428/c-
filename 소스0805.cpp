//#include <stdio.h>
//int main()
//{
//	int LINE = 3;
//	scanf("%d", &LINE);
//	for (int y = LINE; y >= 1; y -= 1)
//	{
//		for (int x = 1; x <= y; x++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int LINE;
//	scanf("%d", &LINE);
//
//	for (int z = 1; LINE >= 1; LINE--, z += 2)
//	{
//		for (int x = 1; x <= LINE; x++)
//		{
//			printf(" ");
//		}
//
//		for (int x = 1; x <= z; x++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}


#include <stdio.h>
int main()
{
	int LINE;
	scanf("%d", &LINE);
	int z = 1;
	for (; LINE >= 1; LINE--, z += 2)
	{
		for (int x = 1; x <= LINE; x++)
		{
			printf(" ");
		}
		for (int x = 1; x <= z; x++)
		{
			printf("*");
		}
		printf("\n");
	}
	LINE += 1;
	z -= 2;
	for (; z >= 1; LINE++, z -= 2)
	{
		for (int x = 1; x <= LINE; x++)
		{
			printf(" ");
		}
		for (int x = 1; x <= z; x++)
		{
			printf("*");
		}
		printf("\n");
	}
}