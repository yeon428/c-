//#include <stdio.h>
//int main()
//{
//	int y_age;
//	printf("���̸� �Է��ϼ���.: ");
//	scanf("%d", &y_age);
//
//	if (y_age > 1)
//	{
//		printf("��ü ������\t");
//	}
//	if (y_age >= 12)
//	{
//		printf("12�� ������\t");
//	}
//	if (y_age >= 15)
//	{
//		printf("15�� ������");
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
//		printf("�빮��");
//	}
//	else if (initial >= 97 && initial <= 122)
//	{
//		printf("�ҹ���");
//	}
//}

//#include <stdio.h>
//
//int main()
//{
//	int number, answer;
//	scanf("%d %d", &number, &answer);
//	if (number > answer) {
//		printf("����1�� ����2���� Ů�ϴ�.\n");
//	}
//	else
//	{
//		if (number < answer)
//		{
//			printf("����2�� ����1���� Ů�ϴ�.\n");
//		}
//		else
//		{
//			printf("����1�� ����2�� �����ϴ�.\n");
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
//		printf("����1�� ����2���� Ů�ϴ�.\n");
//	}
//	else if (number < answer)
//	{
//		printf("����2�� ����1���� Ů�ϴ�.\n");
//	}
//	else
//	{
//		printf("����1�� ����2�� �����ϴ�.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int score = 75;
//	if (score > 90) {
//		printf("������ A����Դϴ�.\n");
//	}
//	else if (score > 80) {
//		printf("������ B����Դϴ�.\n");
//	}
//	else if (score > 70) {
//		printf("������ C����Դϴ�\n");
//	}
//	else if (score > 60) {
//		printf("������ D����Դϴ�.\n");
//	}
//	else {
//		printf("������ F����Դϴ�.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int number = -11;
//	if (number > 0) {
//		printf("number�� ����Դϴ�.\n");
//	}
//	else if (number < 0) {
//		printf("number�� �����Դϴ�.\n");
//	}
//	else {
//		printf("number�� 0�Դϴ�.\n");
//	}
//	if (number % 2 == 0)
//	{
//		printf("number�� ¦���Դϴ�.\n");
//	}
//	else
//	{
//		printf("number�� Ȧ���Դϴ�.\n");
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
//		printf("�� ����Ű�� �Է��ϼ̽��ϴ�.\n");
//	}
//	else if (wasd == 'a')
//	{
//		printf("�� ����Ű�� �Է��ϼ̽��ϴ�.\n");
//	}
//	else if (wasd == 'd')
//	{
//		printf("�� ����Ű�� �Է��ϼ̽��ϴ�.\n");
//	}
//	else if (wasd == 's')
//	{
//		printf("�Ʒ� ����Ű�� �Է��ϼ̽��ϴ�.\n");
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
//		printf("input�� 3�� ����Դϴ�. ");
//		if (input % 6 == 0)
//		{
//			printf("input�� 6�� ����Դϴ�. ");
//		}
//		if (input % 9 == 0)
//		{
//			printf("input�� 9�� ����Դϴ�. ");
//		}
//	}
//	else
//	{
//		printf("input�� 3, 6, 9�� ����� �ƴմϴ�. ");
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
//		printf("������â ����\n");
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
//		printf("������â ����\n");
//	case 'm':
//		printf("����â ����\n");
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
//	case 'i':	printf("������â ����\n");
//	case 'm':	printf("����â ����\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char command = 'm';
//	switch (command)
//	{
//	case 'i':	printf("������â ����\n");
//		break;
//	case 'm':	printf("����â ����\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char command;
//	printf("Ŀ�ǵ带 �Է��ϼ���:");
//	scanf("%c", &command);
//	switch (command)
//	{
//	case 'i':	printf("������â ����\n");
//		break;
//	case 'm':	printf("����â ����\n");
//		break;
//	default: printf("������ ����� �����ϴ�.\n");
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
//	printf("���� �� �� �Է�: ");
//	scanf("%d %d", &input1, &input2);
//	printf("��ȣ(+ - * / %%) �Է�: ");
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