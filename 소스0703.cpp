//#include <stdio.h>
//int main()
//{
//	int coin1 = 500;
//	int coin2 = 1000;
//	printf("%d + %d = %d\n", coin1, coin2, coin1 + coin2);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char A;
//	A = 'A';
//	printf("A = %c, A = %d\n", A, A);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	double pi;
//	pi = 3.14;
//	float e = 2.718;
//	printf("pi = %.2lf, e = %.3f..\n", pi, e);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	float pi = 3.14;
//	int r = 5;
//	float S = r * r * pi;
//	float L = 2 * r * pi;
//
//	printf("���� ����: %.1f, ���� �ѷ�: %.1f", S, L);
//}

//#include <stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int H = 7;
//	float S = (a + b) * H / 2;
//
//	printf("��ٸ����� ����: %.1f", S);
//}

//#include <stdio.h>
//int main()
//{
//	int k;
//	printf("���ϴ� ���ڸ� �Է� : ");
//	scanf("%d", &k);
//	printf("�Է��� ���ڴ� : %d\n", k);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int y, x;
//	printf("���ϰ� ���� �� 2�� �Է� : ");
//	scanf("%d %d", &y, &x);
//	printf("�� ���� ���� %d�Դϴ�. \n", y + x);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char a, b, c;
//	printf("���� �� �� �Է� : ");
//	scanf("%c%c%c", &a, &b, &c);
//	printf("������� : %c%c%c\n", a, b, c);
//	return 0; 
//}

//#include <stdio.h>
//int main()
//{
//	float pi = 3.14;
//	int r;
//	printf("������ �� �Է�: ");
//	scanf("%d", &r);
//	printf("���� ����: %.1f, ���� ����: %.1f", r * r * pi, 2 * r * pi);
//}

//#include <stdio.h>
//int main()
//{
//	int W1, W2, H;
//	printf("�غ��� ����, ������ ����, ���� �Է�: ");
//	scanf("%d %d %d", &W1, &W2, &H);
//	float S = (W1 + W2) * H / 2.0;
//	printf("��ٸ����� ����: %.1f", S);
//}

//#include <stdio.h>
//int main()
//{
//	int a = 15;
//	int b = 3;
//	printf("%d + %d = %d\n", a, b, a + b);
//	printf("%d - %d = %d\n", a, b, a - b);
//	printf("%d * %d = %d\n", a, b, a * b);
//	printf("%d / %d = %d\n", a, b, a / b);
//	printf("%d %% %d = %d\n", a, b, a % b);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number = 1;
//	number = number + 3; printf("%2d\n", number);
//	number -= 2;		 printf("%2d\n", number);
//	number--;			 printf("%2d\n", number);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	printf("%d\n", a++);
//	printf("%d\n", a);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	printf("%d\n", ++a);
//	printf("%d\n", a);
//	return 0;
//}

#include <stdio.h>
int main()
{
	int a, b;
	printf("�� ���� �Է�: ");
	scanf("%d %d", &a, &b);
	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d / %d = %d\n", a, b, a / b);
	printf("%d %% %d = %d\n", a, b, a % b);
	return 0;
}