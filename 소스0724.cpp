//#include <stdio.h>
//int main()
//{
//	int select;
//
//	do
//	{
//		printf("1.로그인\n2.회원가입\n3.옵션\n4.만든 사람들\n");
//		scanf("%d", &select);
//
//		switch (select)
//		{
//		case 1: case 2:
//			printf("아이디:\n비밀번호:\n");
//			break;
//		case 3:
//			printf("옵션 세팅\n");
//			break;
//		case 4:
//			printf("me!\n");
//			break;
//		}
//	} while (select <= 4 && select >= 1);
//	return 0;
//}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand((unsigned int)time(NULL));
	int command;
	int day = 0;
	int study = 0;
	int exercise = 0;
	int animation = 0;
	int sleep = 0;
	
	do {
		printf("\n%d번째 날 !\n", ++day);
		printf("오늘은 무엇을 할까요?\n");
		printf("1.코딩공부한다.\n2.운동을 한다.\n3.애니메이션을 본다.\n4.잠을 잔다.\n그외. 끝낸다.\n >>");
		scanf("%d", &command);
		int randInt = rand() % 5 + 1;
		if (command == 1)
		{
			switch (randInt) {
			case 1:
				printf("기분이 좋네요.\n");
			case 3:
				printf("도서관에서 ");
				break;
			case 2:
				printf("기분이 나빠요.\n");
			case 4:
				printf("카페에서 ");
				break;
			case 5: printf("학원에서 ");
			}
			printf("코딩 공부합니다.\n");
			study++;
		}
		else if (command == 2)
		{
			switch (randInt) {
			case 1:
				printf("헬스");
				break;
			case 2:
				printf("수영");
				break;
			case 3:
				printf("조깅");
				break;
			case 4:
				printf("테니스");
			case 5:
				printf("줄넘기");
			}
			printf("해야지!\n");
			exercise++;
		}
		else if (command == 3)
		{
			switch (randInt) {
			case 1:
				printf("액션");
				break;
			case 2:
				printf("로맨스");
				break;
			case 3:
				printf("스포츠");
				break;
			case 4:
				printf("힐링");
				break;
			case 5:
				printf("뇌 빼고 볼 수 있는");
				break;
			}
			printf("애니메이션을 봐야지!\n");
			animation++;
		}
		else if (command == 4)
		{
			switch (randInt) {
			case 1: case 3: case 4: case 5:
				printf("집에서 자야지!\n");
				break;
			case 2:
				printf("밖에서 자야지!\n");
					break;
			}
			sleep++;
		}
		else break;
	} while (1);

	if (day <= 3) 
	{
		printf("그대로입니다...\n");
	}
	else if (study >= exercise && study >= animation && study >= sleep)
	{
		int level = study / 8;
		switch (level) {
		case 0:
			printf("코딩새싹이 되었습니다.!\n");
			break;
		case 1:
			printf("프로그래머가 되었습니다.!\n");
			break;
		case 2:
			printf("FrontEnd 개발자가 되었습니다.!\n");
			break;
		case 3:
			printf("BackEnd 개발자가 되었습니다.!\n");
			break;
		default:
			printf("풀스택 개발자가 되었습니다.!\n");
			break;
		}
	else if (exercise >= study)
	return 0;
}