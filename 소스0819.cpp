//#include <stdio.h>
//int var = 0;
//void func1()
//{
//	int var = 111;
//}
//
//void func2()
//{
//	var = 222;
//}
//
//void main()
//{
//	printf("%d ", var);
//	func1();
//	printf("%d ", var);
//	func2();
//	printf("%d ", var);
//}


#include <stdio.h>

int add_number(int num1, int num2)
{
	int retval = num1 + num2;
	return retval;
}

int subtract_number(int num1, int num2)
{
	int retVal = num1 - num2;
	return retVal;
}

int multiply_number(int num1, int num2)
{
	int retVal = num1 * num2;
	return retVal;
}

float divide_number(int num1, int num2)
{
	float retVal = num1 / num2;
	return retVal;
}

int main()
{
	int a = 1, b = 2;
	int data1 = add_number(a, b);
	int data2 = subtract_number(a, b);
	int data3 = multiply_number(a, b);
	float data4 = divide_number(a, b);
	printf("µ¡¼À °á°ú: %d\n", data1);
	printf("»¬¼À °á°ú: %d\n", data2);
	printf("°ö¼À °á°ú: %d\n", data3);
	printf("³ª´°¼À °á°ú: %.1f\n", data4);
	return 0;
}