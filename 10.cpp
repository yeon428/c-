//#include <stdio.h>
//#include "myHeader.h"
//
//void main()
//{
//	func(10);
//}
//
//void func(int num)
//{
//	printf("%d\n", num);
//}

//func.h
//#include <stdio.h>
//
//void func1();
//void func2();
//
//main.c
//#include "func.h"
//
//void main()
//{
//	func1();
//	func2();
//}
//
//func1.c
//#include "func.h"
//void func1()
//{
//	printf("func1() �Լ��� �����մϴ�.\n");
//}
//
//func2.c
//#include "func.h"
//void func2()
//{
//	printf("func2() �Լ��� �����մϴ�.\n");
//}

//#include <stdio.h>
//#define PI 3.1415926535
//#define STR "���� ������ ����߽��ϴ�.\n"
//#define END_MSG printf("���α׷��� ����Ǿ����ϴ�.\n\n")
//
//void main()
//{
//	printf("�������� 10�� ���� ������ ==> %10.5f\n", 10 * 10 * PI);
//
//	printf(STR);
//
//	END_MSG;
//}

#include <stdio.h>

void main()
{
	myfunc();
	myfunc();
}

void myfunc()
{
	static int a = 0;

	a = a + 100;
	printf("a�� �� ==> %d\n", a);
}