//#include <stdio.h>
//int main()
//{
//	int input1, input2;
//	char oper;
//	printf("숫자 두 개 입력: ");
//	scanf("%d %d", &input1, &input2);
//	printf("기호(+ - * / %%) 입력: ");
//	scanf(" %c", &oper);
//
//	switch (oper)
//	{
//	case '+': printf("%d + %d = %d", input1, input2, input1 + input2);	break;
//	case '-': printf("%d - %d = %d", input1, input2, input1 - input2);	break;
//	case '*': printf("%d * %d = %d", input1, input2, input1 * input2);	break;
//	case '/': printf("%d / %d = %d", input1, input2, input1 / input2);	break;
//	case '%': printf("%d %% %d = %d", input1, input2, input1 % input2);	break;
//	}
//}

//#include <stdio.h>
//int main()
//{
//	int month;
//	scanf("%d", &month);
//
//	switch (month)
//	{
//	case 1: printf("January");
//		break;
//	case 2: printf("February");
//		break;
//	case 3: printf("March");
//		break;
//	case 4: printf("April");
//		break;
//	case 5: printf("May");	
//		break;
//	case 6: printf("June");
//		break;
//	case 7: printf("July");
//		break;
//	case 8: printf("August");
//		break;
//	case 9: printf("September");
//		break;
//	case 10: printf("October");
//		break;
//	case 11: printf("November");
//		break;
//	case 12: printf("December");
//		break;
//	}
//}

//#include <stdio.h>
//int main()
//{
//	char command;
//
//	printf("<, a 왼쪽 이동 \n");
//	printf(">, d 오른쪽 이동 \n");
//	scanf("%c", &command);
//	switch (command)
//	{
//	case '<' :
//	case 'a' :
//		printf("왼쪽으로 이동합니다.\n");
//		break;
//	case '>': case 'd':
//		printf("오른쪽으로 이동합니다.\n");
//		break;
//	}
//	return 0;
//}

#include <stdio.h>
int main()
{
	int number;
	const int option = 3;
	printf("메뉴를 선택하세요.");
	printf("1. 새 게임 2. 이어하기 3. 옵션\n");
	scanf("%d", &input);

	switch (input)
	{
	case 1: 
		printf("새 게임 시작.\n");
		break;
	case 2:
		printf("세이브 데이터 로드.\n");
		break;
	case option:
		printf("옵션 세팅.\n");
		break;
	default:
		printf("지정된 기능이 없습니다.\n");
	}
	return 0;
}

//#include <stdio.h>
//int main()
//{
//	int number;
//	printf("0부터 9사이 숫자를 입력하세요.: ");
//	scanf("%d", &number);
//
//	switch (number)
//	{
//	case 3: case 6: case 9:
//		printf("짝");
//		break;
//	}
//}