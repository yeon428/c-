//#include <stdio.h>
//int main()
//{
//	printf("100\n\n\n200");
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int randInt = rand() % 10;
//	int nextInt = rand() % 10;
//	printf("첫숫자 : %d\n", randInt);
//	printf("다음숫자 : %d", nextInt);
//	
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int randint = rand() % 10;
//	int nextint = rand() % 10+50;
//	printf("첫숫자 : %d\n", randint);//0~9
//	printf("다음숫자 : %d", nextint);//50~59
//	
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int price;
//	printf("가격을 입력하세요.(원) ");
//	scanf("%d", &price);
//
//	int change = 1000 - price;
//	int change500 = change / 500;
//	change = change % 500;
//	int change100 = change / 100;
//	change = change % 100;
//	int change50 = change / 50;
//	change = change % 50;
//	int change10 = change / 10;
//
//	printf("500원 동전 %d개\t", change500);
//	printf("100원 동전 %d개\t", change100);
//	printf("50원 동전 %d개\t", change50);
//	printf("10원 동전 %d개", change10);
//}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand((unsigned int)time(NULL));
	printf("내 주머니에 있는 돈은");
	int myMoney = (rand() % 10 + 1) * 1000; //1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000
	printf("%d원이다.\n", myMoney);
	int coin500 = rand() % 4 * 500; //0, 500, 1000, 1500
	int coin100 = rand() % 5000; //0~4999
	coin100 = coin100 / 100 * 100; //0, 100, 200, 300, 400
	printf("그리고 과자의 가격은");
	printf(" %d원이다.", coin500 + coin100);
	printf("\n나는 과자를 살 수 있을까?");

	return 0;
}