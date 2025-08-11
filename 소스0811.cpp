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


//#include <stdio.h>
//int main()
//{
//	int LINE, y;
//	scanf("%d", &LINE);
//	y = LINE-1;
//	int z = 1;
//	for (; y > 0; y--, z += 2)
//	{
//		for (int x = 1; x <= y; x++)
//		{
//			printf(" ");
//		}
//		for (int x = 1; x <= z; x++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	y += 1;
//	z -= 2;
//	for (; z > 0; y++, z -= 2)
//	{
//		for (int x = 1; x <= y; x++)
//		{
//			printf(" ");
//		}
//		for (int x = 1; x <= z; x++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main()
//{
//	int LINE;
//	scanf("%d", &LINE);
//	for (int x = 1, y = LINE, z = 1; y > 0; y -= 1, z += 1, x++)
//	{
//		for (int x = 1; x <= y - 1; x++)
//		{
//			printf(" ");
//		}
//		for (int k = 1; k <= z; k++)
//		{
//			printf("%d", x);
//		}
//		printf("\n");
//	}
//}

#include <stdio.h>
int main()
{
	int number;
	int player = 1;
	printf("<베스킨 라빈스 31!>");
	printf("게임을 시작합니다! : 뒤에 숫자를 입력해주세요.\n");
	for (; number <= 31;)
	{

	}
	for (; player >= 0; player++)
	{
		for (int x = 1; x <= 3; x++)
		{
			if (player % 2 == 1)
			{
				printf("A: ");
				scanf("%d", &number);
			}
			else
			{
				printf("B: ");
				scanf("%d", &number);
			}
		}
	}
}