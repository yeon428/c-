//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	printf("내 주머니에 있는 돈은");
//	int myMoney = (rand() % 10 + 1) * 1000; //1000- 10000
//	printf("%d원이다.\n", myMoney);
//	int coin500 = rand() % 4 * 500; //0-1500
//	int coin100 = rand() % 5000; //0~4999
//	coin100 = coin100 / 100 * 100; //0-4900
//	printf("그리고 과자의 가격은");
//	printf(" %d원이다.", coin500 + coin100);
//	printf("\n나는 과자를 살 수 있을까?");
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple == 15)
//	{
//		printf("apple은 15개 있습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple != 17)
//	{
//		printf("apple은 17개가 아닙니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple > 7)
//	{
//		printf("apple은 7보다 많습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple < 20)
//	{
//		printf("apple은 20개보다 적습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple) //apple이 0이 아니면 실행
//	{
//		printf("apple은 0개가 아닙니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (!apple) //apple이 0이면 실행
//	{
//		printf("apple은 하나도 없습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int apple = 0;
//	if (apple == 10)
//	{
//		printf("apple은 10개 있습니다.\n");
//	}
//	else if (apple == 0)
//	{
//		printf("apple은 하나도 없습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (!apple)
//	{
//		printf("apple은 하나도 없습니다.\n");
//	}
//	else
//	{
//		printf("apple은 0개가 아닙니다\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int input;
//	printf("정수를 입력하세요.: ");
//	scanf("%d", &input);
//	if (input < 0)
//	{
//		printf("음수입니다.\n");
//	}
//	else if (input == 0)
//	{
//		printf("0입니다.\n");
//	}
//	else 
//	{
//		printf("양수입니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int input;
//	printf("양의 정수를 입력하세요.: ");
//	scanf("%d", &input);
//	if (10 <= input && input <= 99)
//	{
//		printf("input은 두 자리 숫자입니다.");
//	}
//	else
//	{
//		printf("input은 두 자리 숫자가 아닙니다.");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int height = 170;
//	if (height > 150)
//	{
//		printf("키가 150 이상입니다.\n");
//	}
//	if (height > 160)
//	{
//		printf("키가 160 이상입니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int height = 170;
//	if (height > 150)
//	{
//		printf("키가 150 이상입니다.\n");
//	}
//	else if (height > 160)
//	{	//else if는 if가 틀렸을 때만 실행된다.
//		printf("키가 160 이상입니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int y_age;
//	printf("나이를 입력하세요.: ");
//	scanf("%d", &y_age);
//
//	if (y_age > 1)
//	{
//		printf("전체 관람가\t");
//	}
//	if (y_age >= 12)
//	{
//		printf("12세 관람가\t");
//	}
//	if (y_age >= 15)
//	{
//		printf("15세 관람가");
//	}
//	return 0;
//}

#include <stdio.h>
int main()
{
	char initial;
	scanf("%c", &initial);

	if (initial)
}