//#include <stdio.h>
//int main()
//{
//	int number;
//	printf("100������ �������� ����մϴ�.\n");
//
//	for (number = 1; (number * number) <= 100; number++)
//	{
//		printf("%d\n", number * number);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int num;
//	printf("100���� 7�� ����� ����մϴ�.\n");
//
//	for (num = 7; num <= 100; num += 7)
//	{
//		printf("%d\n", num);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char input;
//	for (;;)
//	{
//		scanf(" %c", &input);
//		switch (input)
//		{
//		case 's':
//			printf("START GAME\n");
//			break;
//		case 'e':
//			printf("EXIT GAME\n");
//			return 0;
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int exitFor, number;
//	printf("1���� 10���� ���� �� ���: ");
//	for (number = 10, exitFor = number - 1; exitFor; number *= exitFor, exitFor--)
//	{
//
//	}
//	printf("%d\n", number);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("1���� 10���� ���� �� ���: ");
//	for (int number = 10, int exitFor = number - 1; exitFor; number *= exitFor, exitFor--)
//	{
//
//	}
//	printf("%d\n", number);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int count;
//	for (count = 0; count < 5; count++)
//	{
//		printf("%d\n", count);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number;
//
//	for (number = 11; number <= 200; number += 11)
//		printf("%d\n", number);
//}

//#include <stdio.h>
//int main()
//{
//	float sqLine;
//	for (sqLine = 0.1; 4 * sqLine <= 21; sqLine += 0.1)
//	{
//		printf("%.1f\n", sqLine);
//	}
//}

//#include <stdio.h>
//int main()
//{
//	printf("1�� 1��\n");
//	printf("1�� 2��\n");
//	printf("1�� 3��\n");
//	printf("2�� 1��\n");
//	printf("2�� 2��\n");
//	printf("2�� 3��\n");
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int myClass = 1;
//	int student = 1;
//	printf("%d�� %d��\n", myClass, student); student++;
//	printf("%d�� %d��\n", myClass, student); student++;
//	printf("%d�� %d��\n", myClass, student); student++;
//
//	myClass++; student = 1;
//	printf("%d�� %d��\n", myClass, student); student++;
//	printf("%d�� %d��\n", myClass, student); student++;
//	printf("%d�� %d��\n", myClass, student); student++;
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int myClass = 1;
//	int student;
//	for (student = 1; student <= 3; student++)
//	{
//		printf("%d�� %d��\n", myClass, student);
//	}
//	myClass++;
//	for (student = 1; student <= 3; student++)
//	{
//		printf("%d�� %d��\n", myClass, student);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int myClass;
//	int student;
//	for (myClass = 1; myClass <= 2; myClass++)
//	{
//		for (student = 1; student <= 3; student++)
//		{
//			printf("%d�� %d��\n", myClass, student);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int myClass;
//	int student;
//	for (myClass = 1; myClass <= 8; myClass++)
//	{
//		for (student = 1; student <= 30; student++)
//		{
//			printf("%d�� %d��\n", myClass, student);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int grade;
//	int myClass;
//	int student;
//	for (grade = 1; grade <= 8; grade++)
//	{
//		for (myClass = 1; myClass <= 8; myClass++)
//		{
//			for (student = 1; student <= 30; student++)
//			{
//				printf("%d�г� %d�� %d�� \n", grade, myClass, student);
//			}
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int num1, num2;
//
//	for (num1 = 2; num1 <= 9; num1++)
//	{
//		for (num2 = 1; num2 <= 9; num2++)
//		{
//			printf("%d * %d = %d\n", num1, num2, num1 * num2);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int num1, num2;
//
//	for (num1 = 2; num1 <= 9; num1++)
//	{
//		if (num1 == 3) 
//			continue;
// 
//		for (num2 = 1; num2 <= 9; num2++)
//		{
//			printf("%d * %d = %d\n", num1, num2, num1 * num2);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int dice1, dice2;
//	for (dice1 = 1; dice1 <= 4; dice1++)
//	{
//		for (dice2 = 1; dice2 <= 6; dice2++)
//		{
//			printf("%d�� - %d\n", dice1, dice2);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int outer;
//	int inter;
//	for (outer = 0; outer < 5; outer++)
//	{
//		printf("%d��° ���� �ݺ��� ���� \n", outer);
//		for (inter = 0; inter < 5; inter++)
//		{
//			printf("���� �ݺ��� % d�� �ݺ�\n", inter);
//		}
//		printf("%d��° ���� �ݺ��� Ż��\n\n", outer);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int outer;
//	int inter;
//	for (outer = 0; outer < 5; outer++)
//	{
//		for (inter = 0; inter < 5; inter++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int outer;
//	int inter;
//	for (outer = 0; outer < 5; outer++)
//	{
//		for (inter = 0; inter < outer + 1; inter++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int outer, inter1, inter2;
//	for (outer = 0; outer < 5; outer++)
//	{
//		for (inter1 = 0; inter1 < 5 - outer; inter1++)
//		{
//			printf(" ");
//		}
//		for (inter2 = 0; inter2 < outer + 1; inter2++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int outer;
//	int inter1, inter2;
//	for (outer = 0; outer < 5; outer++)
//	{
//		for (inter1 = 0; inter1 < 5 - outer; inter1++)
//		{
//			printf(" ");
//		}
//		for (inter2 = 0; inter2 < outer + 1; inter2++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int LINE = 3;
//	scanf("%d", &LINE);
//	for (int y = LINE; y >= 1; y -= 1)
//	{
//		for (int x = 1; x <= y; x++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

#include <stdio.h>
int main()
{

	int z = 1;

	for (int y = 2; y >= 0; y--)
	{
		for (int x = 1; x <= y; x++)
		{
			printf(" ");
		}

		for (int x = 1; x <= z; x++)
		{
			printf("*");
		}
		z += 2;

		printf("\n");
	}
	return 0;
}