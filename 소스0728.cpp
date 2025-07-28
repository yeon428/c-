//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int command;
//	int day = 0;
//	int study = 0;
//	int exercise = 0;
//	int animation = 0;
//	int sleep = 0;
//
//	do {
//		printf("\n%d번째 날 !\n", ++day);
//		printf("오늘은 무엇을 할까요?\n");
//		printf("1.코딩공부한다.\n2.운동을 한다.\n3.애니메이션을 본다.\n4.잠을 잔다.\n그외. 끝낸다.\n >>");
//		scanf("%d", &command);
//		int randInt = rand() % 5 + 1;
//		if (command == 1)
//		{
//			switch (randInt) {
//			case 1:
//				printf("기분이 좋네요.\n");
//			case 3:
//				printf("도서관에서 ");
//				break;
//			case 2:
//				printf("기분이 나빠요.\n");
//			case 4:
//				printf("카페에서 ");
//				break;
//			case 5: printf("학원에서 ");
//			}
//			printf("코딩 공부합니다.\n");
//			study++;
//		}
//		else if (command == 2)
//		{
//			switch (randInt) {
//			case 1:
//				printf("헬스");
//				break;
//			case 2:
//				printf("수영");
//				break;
//			case 3:
//				printf("조깅");
//				break;
//			case 4:
//				printf("테니스");
//			case 5:
//				printf("줄넘기");
//			}
//			printf("해야지!\n");
//			exercise++;
//		}
//		else if (command == 3)
//		{
//			switch (randInt) {
//			case 1:
//				printf("액션");
//				break;
//			case 2:
//				printf("로맨스");
//				break;
//			case 3:
//				printf("스포츠");
//				break;
//			case 4:
//				printf("힐링");
//				break;
//			case 5:
//				printf("뇌 빼고 볼 수 있는");
//				break;
//			}
//			printf("애니메이션을 봐야지!\n");
//			animation++;
//		}
//		else if (command == 4)
//		{
//			switch (randInt) {
//			case 1: case 3: case 4: case 5:
//				printf("집에서 자야지!\n");
//				break;
//			case 2:
//				printf("밖에서 자야지!\n");
//				break;
//			}
//			sleep++;
//		}
//		else break;
//	} while (1);
//
//	if (day <= 3)
//	{
//		printf("그대로입니다...\n");
//	}
//	if (day > 3) {
//		if (study >= exercise && study >= animation && study >= sleep)
//		{
//			int studyLevel = study / 8;
//			switch (studyLevel) {
//			case 0:
//				printf("코딩새싹이 되었습니다!\n");
//				break;
//			case 1:
//				printf("프로그래머가 되었습니다!\n");
//				break;
//			case 2:
//				printf("FrontEnd 개발자가 되었습니다!\n");
//				break;
//			case 3:
//				printf("BackEnd 개발자가 되었습니다!\n");
//				break;
//			default:
//				printf("풀스택 개발자가 되었습니다!\n");
//				break;
//			}
//		}
//		if (exercise >= study && exercise >= animation && exercise >= sleep)
//		{
//			int exerciseLevel = exercise / 8;
//			switch (exerciseLevel) {
//			case 0:
//				printf("운동새싹이 되었습니다!\n");
//				break;
//			case 1:
//				printf("건강한 사람이 되었습니다!\n");
//				break;
//			case 2:
//				printf("탄탄한 몸매가 되었습니다!\n");
//				break;
//			case 3:
//				printf("헬창이 되었습니다!\n");
//				break;
//			default:
//				printf("태릉인이 되었습니다!\n");
//				break;
//			}
//		}
//		if (animation >= exercise && animation >= study && animation >= sleep)
//		{
//			int animationLevel = animation / 8;
//			switch (animationLevel) {
//			case 0:
//				printf("애니메이션에 입문했습니다!\n");
//				break;
//			case 1:
//				printf("애니메이션에 빠졌습니다!\n");
//				break;
//			case 2:
//				printf("애니메이션에 중독되었습니다!\n");
//				break;
//			case 3:
//				printf("애니메이션 굿즈를 사모읍니다...\n");
//				break;
//			default:
//				printf("씹덕이 되었습니다...\n");
//				break;
//			}
//		}
//		if (sleep >= study && sleep >= exercise && sleep >= animation)
//		{
//			int sleepLevel = sleep / 8;
//			switch (sleepLevel) {
//			case 0:
//				printf("잠을 자며 에너지를 충전합니다!\n");
//				break;
//			case 1:
//				printf("적절한 수면중!\n");
//				break;
//			case 2:
//				printf("잠꾸러기가 되었습니다!\n");
//				break;
//			case 3:
//				printf("깨어있는 시간보다 잠들어있는 시간이 더 깁니다!\n");
//				break;
//			default:
//				printf("이럴거면 영면에 드십시오...\n");
//				break;
//			}
//		}
//	}
//
//		return 0;
//	}

//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++) {
//		printf("양 %d마리\n", sheep);
//	}
//	printf("잠들었다!\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++)
//	{
//		printf("양 %d마리\n", sheep);
//		if (sheep == 3) {
//			printf("도중에 잠들었다!\n");
//			break;
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++) {
//		if (sheep == 3) {
//			printf("졸아서 양을 세지 못했다!\n");
//			continue;
//		}
//		printf("양 %d마리\n", sheep);
//	}
//	return 0;
//}

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

#include <stdio.h>
int main()
{
	int sheep;
	for (sheep = 1; sheep <= 50; sheep++)
	{
		if (sheep == 10 || sheep == 20 || sheep == 30 || sheep == 40)
		{
			printf("깜빡 졸았다!\n");
			continue;
		}

		if (sheep == 45)
			break;

		printf("양 %d마리\n", sheep);
	}
	return 0;
}