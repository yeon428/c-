//#include <stdio.h>
//int main()
//{
//	char command = 'x';
//
//	switch (command)
//	{
//	case 'x': printf("알파벳 x 입력.\n");
//		break;
//	case 'X': printf("엑스표 입력.\n");
//		break;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i_menu;
//	printf("1.더하기 2.빼기\n");
//	scanf("%d", &i_menu);
//	switch (i_menu)
//	{
//	case 1:
//	{
//		int number1, number2;
//		printf("숫자 두 개를 입력하세요 \n");
//		scanf("%d %d", &number1, &number2);
//		printf("%d + %d = %d\n", number1, number2, number1 + number2);
//		break;
//	}
//	case 2:
//	{
//		int number3, number4;
//		printf("숫자 두 개를 입력하세요 \n");
//		scanf("%d %d", &number3, &number4);
//		printf("%d - %d = %d\n", number3, number4, number3 - number4);
//		break;
//	}
//	}
//	return 0;
//}

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

#include <stdio.h>
int main()
{
	int appitizer, mainDish, dessert;
	printf("appitizer 1.캐비어 2.샐러드 3.푸아그라");
	scanf("%d", &appitizer);
	printf("mainDish 1.스테이크 2.생선요리 3.양갈비");
	scanf("%d", &mainDish);
	printf("dessert 1.케잌 2.아이스크림 3.초콜릿무스");
	scanf("%d", &dessert);

	switch (appitizer)
	{
	case 1: 
	}
}