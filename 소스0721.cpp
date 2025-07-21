//#include <stdio.h>
//int main()
//{
//	char wasd;
//	scanf("%c", &wasd);
//
//	switch (wasd)
//	{
//	case 'w':
//		printf("위 방향키를 입력하셨습니다.\n");
//		break;
//	case 'a':
//		printf("좌 방향키를 입력하셨습니다.\n");
//		break;
//	case 'd':
//		printf("우 방향키를 입력하셨습니다.\n");
//		break;
//	case 's':
//		printf("아래 방향키를 입력하셨습니다.\n");
//		break;
//	}
//}

//#include <stdio.h>
//int main()
//{
//	int appitizer, mainDish, dessert;
//	printf("appitizer 1.캐비어 2.샐러드 3.푸아그라 ");
//	scanf("%d", &appitizer);
//	printf("mainDish 1.스테이크 2.생선요리 3.양갈비 ");
//	scanf("%d", &mainDish);
//	printf("dessert 1.케잌 2.아이스크림 3.초콜릿무스 ");
//	scanf("%d", &dessert);
//	printf("주문한 음식은 ");
//	switch (appitizer)
//	{
//	case 1: printf("캐비어, "); break;
//	case 2: printf("샐러드, "); break;
//	case 3: printf("푸아그라, "); break;
//	}
//
//	switch (mainDish)
//	{
//	case 1: printf("스테이크, "); break;
//	case 2: printf("생선요리, "); break;
//	case 3: printf("양갈비, "); break;
//	}
//
//	switch (dessert)
//	{
//	case 1: printf("케잌입니다."); break;
//	case 2: printf("아이스크림입니다."); break;
//	case 3: printf("초콜릿무스입니다."); break;
//	}
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	while (i < 100)
//	{
//		printf("%3d(%02x)", i, i);
//		if (i >= 70 && i < 80) { i++; continue; }
//		if (i % 10 == 9) printf("\n");
//		if (i == 93) break;
//		i++;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	while (0)
//	{
//		printf("조건이 참일 경우 반복출력\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	while (1)
//	{
//		printf("조건이 참일 경우 반복출력\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int count = 0;
//
//	while (count < 3)
//	{
//		printf("현재 count: %d\n", count);
//		printf("count가 3보다 작은 동안 반복\n");
//		count++;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int count = 3;
//	while (count > 0)
//	{
//		printf("현재 count: %d\n", count);
//		printf("count가 0보다 큰 동안 반복\n");
//		count--;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	while (a < 6)
//	{
//		printf("C\n");
//		a++;
//	}
// return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = -10;
//	while (a<=0)
//	{
//		printf("%d\n", a);
//		a++;
//
//	}
// return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 1;
//	while (a <= 100)
//	{
//		if (a % 5 == 0)
//		{
//			printf("%d\n", a);
//		}
//		a++;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int count = 3;
//	while (count)
//	{
//		if (count == 1)
//		{
//			break;
//		}
//		printf("현재 count : %d\n", count);
//		printf("count가 0이 아니면 반복\n");
//		count--;
//	}
//
//}

//#include <stdio.h>
//int main()
//{
//	char alphabet;
//	while (1)
//	{
//		printf("알파벳을 입력해주세요(다른 것 입력시 다시 입력): ");
//		scanf("%c", &alphabet);
//		if (alphabet >= 'a' && alphabet <= 'z')
//		{
//			printf("소문자를 입력하셨습니다.\n");
//		}
//		else if (alphabet >= 'A' && alphabet <= 'Z')
//		{
//			printf("대문자를 입력하셨습니다.\n");
//		}
//		else 
//		{ 
//			continue; 
//		}
//		printf("입력한 값 : %c\n", alphabet);
//
//	}
//}

//#include <stdio.h>
//int main()
//{
//	int number, total = 0;
//	while (1)
//	{
//		printf("양수를 입력해주세요(0입력시 종료):");
//		scanf("%d", &number);
//		if (number == 0)
//		{
//			break;
//		}
//		else if (number < 0)
//		{
//			continue;
//		}
//
//		total = total + number;
//		printf("%d\n", total);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number = 1;
//	int	multi = 1;
//
//	while (1)
//	{
//		multi = multi * number;
//		if (multi >= 5000)
//		{
//			printf("%d", number);
//			break;
//		}
//		number++;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char A = 'A';
//
//	while (A <= 'Z')
//	{
//		if (A == 'F')
//		{
//			A++;
//		}
//		printf("%c", A);
//		A++;
//	}
//}

#include <stdio.h>
int main()
{
	int 
}