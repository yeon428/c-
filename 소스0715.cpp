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
//	printf("<, a ���� �̵� \n");
//	printf(">, d ������ �̵� \n");
//	scanf("%c", &command);
//	switch (command)
//	{
//	case '<' :
//	case 'a' :
//		printf("�������� �̵��մϴ�.\n");
//		break;
//	case '>': case 'd':
//		printf("���������� �̵��մϴ�.\n");
//		break;
//	}
//	return 0;
//}

#include <stdio.h>
int main()
{
	int number;
	const int option = 3;
	printf("�޴��� �����ϼ���.");
	printf("1. �� ���� 2. �̾��ϱ� 3. �ɼ�\n");
	scanf("%d", &input);

	switch (input)
	{
	case 1: 
		printf("�� ���� ����.\n");
		break;
	case 2:
		printf("���̺� ������ �ε�.\n");
		break;
	case option:
		printf("�ɼ� ����.\n");
		break;
	default:
		printf("������ ����� �����ϴ�.\n");
	}
	return 0;
}

//#include <stdio.h>
//int main()
//{
//	int number;
//	printf("0���� 9���� ���ڸ� �Է��ϼ���.: ");
//	scanf("%d", &number);
//
//	switch (number)
//	{
//	case 3: case 6: case 9:
//		printf("¦");
//		break;
//	}
//}