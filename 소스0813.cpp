//#include <stdio.h>
//void function_test1()
//{
//	printf("function_test1()");
//	printf("�Լ��ȿ��� ����\n");
//}
//
//int main()
//{
//	printf("")
//}

//#include <stdio.h>
//int suyel(int n)
//{
//	int sum = 0;
//	for (int x = 0; x <= n; x++)
//	{
//		sum += x;
//	}
//	return sum;
//}
//
//int main()
//{
//	int result = suyel(10);
//	printf("%d\n", result);
//
//	return 0;
//}

//#include <stdio.h>
//void function_test1()
//{
//	printf("function_test1()");
//	printf("�Լ��ȿ��� ����\n");
//}
//int main()
//{
//	printf("������\n");
//	function_test1();
//	printf("������\n");
//	return 0;
//}

//#include <stdio.h>
//void eatFood()
//{
//	printf("��Ա�\n");
//}
//void goSleep()
//{
//	printf("���ڱ�\n");
//}
//int main()
//{
//	eatFood(); goSleep();
//	eatFood(); eatFood();
//	goSleep(); goSleep();
//
//	return 0;
//}

//#include <stdio.h>
// 
//void person_A()
//{
//	int money = 10000;
//	printf("A: �ָӴϿ�");
//	printf("%d��\n", money);
//}
//void person_B()
//{
//	int money = 5000;
//	printf("B: �ָӴϿ�");
//	printf("%d��\n", money);
//}
//int main()
//{
//	person_A();
//	person_B();
//
//	return 0;
//}

//#include <stdio.h>
//
//int function_test2()
//{
//	int testNumber = 5;
//	return testNumber;
//}
//
//int main()
//{
//	int getNumber;
//	getNumber = function_test2();
//	printf("function_test2()");
//	printf("���� ������ ��: ");
//	printf("%d\n", getNumber);
//}

//#include <stdio.h>
//
//void sayHi()
//{
//	printf("hi");
//	return;
//}
//
//char getA()
//{
//	return 'A';
//}
//
//int get5()
//{
//	return 5;
//}
//
//double set1get5(int one)
//{
//	return one + 4.0;
//}
//
//void main()
//{
//	sayHi();
//	printf("%c\n", getA());
//	printf("%d\n", get5());
//	printf("%f\n", set1get5(1));
//}

//#include <stdio.h>
//
//void sayHi();
//char getA();
//int get5();
//double set1get5(int one);
//
//void main()
//{
//	sayHi();
//	printf("%c\n", getA());
//	printf("%d\n", get5());
//	printf("%f\n", set1get5(1));
//}
//void sayHi()
//{
//	printf("hi");
//	return;
//}
//char getA()
//{
//	return 'A';
//}
//int get5()
//{
//	return 5;
//}
//double set1get5(int one)
//{
//	return one + 4.0;
//}

#include <stdio.h>

float sendCard();
int main()
{
	float result = sendCard();
	printf("%f���� ����\n", result);
	return 0;
}
float sendCard()
{
	printf("<ũ�������� ī��>\n");
	printf("���: 0.7����\n");
	printf("������(����:����): ");
	int manwon;
	scanf("%d", &manwon);
	float change = manwon - 0.7;
	return change;
}