//#include <stdio.h>
//int main()
//{
//	int first = 1 % 4;
//	printf("%d = 1%%4\n", first);
//	int second = 5 % 3;
//	printf("%d = 5%%3\n", second);
//	int third = 4 % 2;
//	printf("%d = 4%%2\n", third);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int first = 1 % 3;
//	printf("%d = 1%%3\n", first);
//	int second = 2 % 3;
//	printf("%d = 2%%3\n", second);
//	int third = 3 % 3;
//	printf("%d = 3%%3\n", third);
//	int fourth = 4 % 3;
//	printf("%d = 4%%3\n", fourth);
//	int fifth = 5 % 3;
//	printf("%d = 5%%3\n", fifth);
//	int sixth = 6 % 3;
//	printf("%d = 6%%3\n", sixth);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number;
//	printf("���� ���� �Է�:");
//	scanf("%d", &number);
//	printf("%d = %d %% 50", number % 50, number);
//}

//#include <stdio.h>
//int main()
//{
//	int data1 = 6 / 2;
//	printf("%d =6/2\n", data1);
//	int data2 = 6 / 3;
//	printf("%d =6/3\n", data2);
//	int data3 = 6 / 4;
//	printf("%d =6/4\n", data3);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int coin;
//	printf("���� �Է����ּ���.(��)");
//	scanf("%d", &coin);
//
//	int coin10000 = coin / 10000;
//	coin = coin % 10000;
//	int coin5000 = coin / 5000;
//	coin = coin % 5000;
//	int coin1000 = coin / 1000;
//	printf("������ %d��, ", coin10000);
//	printf("��õ���� %d��, ", coin5000);
//	printf("õ���� %d��, ", coin1000);
//	printf("�������� �����Դϴ�.");
//	return 0;
//}

//500�� 100�� 50�� 10��
#include <stdio.h>
int main()
{
	int price;
	printf("������ �Է��ϼ���.(��) ");
	scanf("%d", &price);

	int change = 1000 - price;
	int change500 = change / 500;
	int change100 = (change - 500 * change500) / 100;
	int change50 = (change - 500 * change500 - 100 * change100) / 50;
	int change10 = (change - 500 * change500 - 100 * change100 - 50 * change50) / 10;

	printf("500�� ���� %d��\t", change500);
	printf("100�� ���� %d��\t", change100);
	printf("50�� ���� %d��\t", change50);
	printf("10�� ���� %d��", change10);

}