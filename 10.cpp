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
//	printf("func1() 함수를 실행합니다.\n");
//}
//
//func2.c
//#include "func.h"
//void func2()
//{
//	printf("func2() 함수를 실행합니다.\n");
//}

//#include <stdio.h>
//#define PI 3.1415926535
//#define STR "원의 면적을 계산했습니다.\n"
//#define END_MSG printf("프로그램이 종료되었습니다.\n\n")
//
//void main()
//{
//	printf("반지름이 10인 원의 면적은 ==> %10.5f\n", 10 * 10 * PI);
//
//	printf(STR);
//
//	END_MSG;
//}

#include <stdio.h>
void myfunc();

void main()
{
	myfunc();
	myfunc();
}

void myfunc()
{
	static int a = 0;

	a = a + 100;
	printf("a의 값 ==> %d\n", a);

}
