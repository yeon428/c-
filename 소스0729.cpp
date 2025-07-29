//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 20; sheep++) {
//		printf("양 %d마리\n", sheep);
//	}
//	printf("잠들었다!\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 50; sheep++)
//	{
//		if (sheep % 10 == 0)
//		{
//			printf("깜빡 졸았다!\n");
//			continue;
//		}
//
//		if (sheep == 45)
//			break;
//
//		printf("양 %d마리\n", sheep);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int round;
//	for (round = 0; round < 10; round++)
//	{
//		printf("라운드 %d\n", round);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int round;
//	for (round = 0; round <= 10; round++)
//	{
//		printf("라운드 %d\n", round);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int count;
//	for (count = 101; count < 111; count++)
//	{
//		printf("아파트 %d동\n", count);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number;
//	int sum_number = 0;
//	for (number = 1; number <= 20; number++)
//	{
//		sum_number = sum_number + number;
//	}
//	printf("도합 %d\n", sum_number);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int count;
//	int number;
//	printf("반복할 횟수를 입력하세요: ");
//	scanf("%d", &count);
//	for (number = 0; number < count; number++)
//	{
//		printf("삐약");
//	}
//	printf("\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number;
//	for (number = 10; number <= 99; number++)
//	{
//		printf("%d\n", number);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number;
//	int gop = 1;
//	for (number = 3; number <= 8; number++)
//	{
//		gop = gop * number;
//	}
//	printf("%d", gop);
//	return 0;
//}

#include <stdio.h>
int main()
{
	int count;
	int tensDigit;
	int onesDigit;

	for (count = 1; count <= 50; count++)
	{
		tensDigit = count / 10;
		onesDigit = count % 10;

		switch (tensDigit)
		{
		case 3: case 6: case 9:
			printf("%d\n", count);
			break;
		default:
			switch (onesDigit)
			{
			case 3: case 6: case 9:
				printf("%d\n", count);
				break;
			}
		}
	}
}