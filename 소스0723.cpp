//#include <stdio.h>
//int main()
//{
//	int a, c, input, jaritsu = 0;
//	scanf("%d", &a);
//	input = a;
//
//	while (a != 0)
//	{
//		a = a / 10;
//		jaritsu++;
//
//	}
//	//printf("%d\n", jaritsu); //ÀÚ¸´¼ö
//
//	int b = 1;
//	while (jaritsu >= 2)
//	{
//		b = b * 10;
//		jaritsu--;
//	}
//	//printf("%d\n", b); //10^n
//
//	while (b >= 1)
//	{
//		c = input / b;
//		input = input % b;
//		//printf("%d\n", c);
//		while (c >= 1) {
//			printf("\u2665\u2665");
//			c--;
//		}
//		printf("\n");
//		b = b / 10;
//	}

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

//#include <stdio.h>
//int main()
//{
//	int input;
//	int player = 0;
//	int total = 0;
//
//	while (total < 31)
//	{
//		printf("%c: ", 'A' + player);
//		scanf("%d", &input);
//		if (input > 3 || input < 1)
//		{
//			printf("값을 다시 입력하세요.\n");
//			continue;
//		}
//		total = total + input;
//		printf("=> %d\n", total);
//		player = ++player % 2;
//		if (total >= 31)
//		{
//			break;
//		}
//	}
//
//	printf("%c가 이겼습니다!", 'A' + player);
//
//}

//#include <stdio.h>
//int main()
//{
//	int temperature = 20;
//	do
//	{
//		printf("현재 온도 : %d도\n", temperature);
//		temperature--;
//	}
//	while (temperature > 28);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int input;
//	enum {GAMEOVER, NEWGAME, LOADGAME, OPTION};
//	do {
//		printf("\n메뉴를 선택하세요.\n");
//		printf("1.새 게임 2.이어하기 3.옵션 (0:게임종료)\n");
//		scanf("%d", &input);
//
//		switch (input) {
//		case NEWGAME:
//			printf("새 게임 시작\n");
//			break;
//		case LOADGAME:
//			printf("세이브 데이터 로드\n");
//			break;
//		case OPTION:
//			printf("옵션 세팅\n");
//			break;
//		}
//	} while (input != GAMEOVER);
//
//	printf("게임을 종료합니다.\n");
//	return 0;
//}

#include <stdio.h>
int main()
{
	int select;
	
	do
	{
		printf("1.로그인\n2.회원가입\n3.옵션\n4.만든 사람들\n");
		scanf("%d", &select);

		switch (select)
		{
		case 1: case 2:
			printf("아이디:\n비밀번호:\n");
			break;
		case 3:
			printf("옵션 세팅\n");
			break;
		case 4:
			printf("me!\n");
			break;
		}
	} while (select <= 4 && select >= 1);
	return 0;
}