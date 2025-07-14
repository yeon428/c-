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

//#include <stdio.h>
//int main()
//{
//	char initial;
//	scanf("%c", &initial);
//
//	if (initial >= 0x41 && initial <= 'Z')
//	{
//		printf("대문자");
//	}
//	else if (initial >= 97 && initial <= 122)
//	{
//		printf("소문자");
//	}
//}

//#include <stdio.h>
//
//int main()
//{
//	int number, answer;
//	scanf("%d %d", &number, &answer);
//	if (number > answer) {
//		printf("숫자1이 숫자2보다 큽니다.\n");
//	}
//	else
//	{
//		if (number < answer)
//		{
//			printf("숫자2가 숫자1보다 큽니다.\n");
//		}
//		else
//		{
//			printf("숫자1과 숫자2가 같습니다.\n");
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number, answer;
//	scanf("%d %d", &number, &answer);
//	if (number > answer) {
//		printf("숫자1이 숫자2보다 큽니다.\n");
//	}
//	else if (number < answer)
//	{
//		printf("숫자2가 숫자1보다 큽니다.\n");
//	}
//	else
//	{
//		printf("숫자1과 숫자2가 같습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int score = 75;
//	if (score > 90) {
//		printf("성적은 A등급입니다.\n");
//	}
//	else if (score > 80) {
//		printf("성적은 B등급입니다.\n");
//	}
//	else if (score > 70) {
//		printf("성적은 C등급입니다\n");
//	}
//	else if (score > 60) {
//		printf("성적은 D등급입니다.\n");
//	}
//	else {
//		printf("성적은 F등급입니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int number = -11;
//	if (number > 0) {
//		printf("number는 양수입니다.\n");
//	}
//	else if (number < 0) {
//		printf("number는 음수입니다.\n");
//	}
//	else {
//		printf("number는 0입니다.\n");
//	}
//	if (number % 2 == 0)
//	{
//		printf("number는 짝수입니다.\n");
//	}
//	else
//	{
//		printf("number는 홀수입니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char wasd;
//	scanf("%c", &wasd);
//	if (wasd == 'w')
//	{
//		printf("위 방향키를 입력하셨습니다.\n");
//	}
//	else if (wasd == 'a')
//	{
//		printf("좌 방향키를 입력하셨습니다.\n");
//	}
//	else if (wasd == 'd')
//	{
//		printf("우 방향키를 입력하셨습니다.\n");
//	}
//	else if (wasd == 's')
//	{
//		printf("아래 방향키를 입력하셨습니다.\n");
//	}
//}

//#include <stdio.h>
//int main()
//{
//	int gauge;
//	scanf("%d", &gauge);
//	if (gauge >= 45 && gauge <= 55)
//	{
//		printf("Perfect");
//	}
//	else if (gauge >= 35 && gauge <= 65)
//	{
//		printf("Excellent");
//	}
//	else
//	{
//		printf("good");
//	}
//}

//#include <stdio.h>
//int main()
//{
//	int input;
//	scanf("%d", &input);
//	if (input % 3 == 0)
//	{
//		printf("input은 3의 배수입니다. ");
//		if (input % 6 == 0)
//		{
//			printf("input은 6의 배수입니다. ");
//		}
//		if (input % 9 == 0)
//		{
//			printf("input은 9의 배수입니다. ");
//		}
//	}
//	else
//	{
//		printf("input은 3, 6, 9의 배수가 아닙니다. ");
//	}
//}

//#include <stdio.h>
//int main()
//{
//	char command = 'i';
//
//	switch (command)
//	{
//	case 'i':
//		printf("아이템창 오픈\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char command = 'i';
//	switch (command)
//	{
//	case 'i':
//		printf("아이템창 오픈\n");
//	case 'm':
//		printf("지도창 오픈\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char command = 'm';
//
//	switch (command)
//	{
//	case 'i':	printf("아이템창 오픈\n");
//	case 'm':	printf("지도창 오픈\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char command = 'm';
//	switch (command)
//	{
//	case 'i':	printf("아이템창 오픈\n");
//		break;
//	case 'm':	printf("지도창 오픈\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char command;
//	printf("커맨드를 입력하세요:");
//	scanf("%c", &command);
//	switch (command)
//	{
//	case 'i':	printf("아이템창 오픈\n");
//		break;
//	case 'm':	printf("지도창 오픈\n");
//		break;
//	default: printf("지정된 기능이 없습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char number = 1;
//	switch (number)
//	{
//	case 1: printf("one\n");	break;
//	case 2: printf("two\n");	break;
//	case 3: printf("three\n");	break;
//	}
//	return 0;
//}

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

#include <stdio.h>
int main()
{
	int month;
	scanf("%d", &month);
	switch (month)
	{
	case 1: printf("January");	break;
	case 2: printf("February");	break;
	case 3: printf("March");	break;
	}
}