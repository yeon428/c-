//#include <stdio.h>
//struct byte8_1 {
//	double a;
//};
//
//struct byte8_2 {
//	int a;
//	char b;
//};
//
//int main()
//{
//	int sizebyte8_1 = sizeof(byte8_1);
//	int sizebyte8_2 = sizeof(byte8_2);
//	printf("%d\n", sizebyte8_1);
//	printf("%d\n", sizebyte8_2);
//}

//#include <stdio.h>
//struct __dummy__ {
//	int data_0;
//	char data_1;
//	float data_2;
//};
//int main()
//{
//	__dummy__ user;
//	scanf("%d", &user.data_0);
//	scanf(" %c", &user.data_1);
//	scanf("%f", &user.data_2);
//
//	printf("\n%d\n", user.data_0);
//	printf("%c\n", user.data_1);
//	printf("%f\n", user.data_2);
//}

//#include <stdio.h>
//void main()
//{
//	short pt1;
//	scanf("%hd", &pt1);
//	printf("값: %hd\n", pt1);
//}

//#include <stdio.h>
//short getDefaultData()
//{
//	short pt1;
//	scanf("%hd", &pt1);
//	return pt1;
//}
//void main()
//{
//	short pt;
//	pt = getDefaultData();
//	printf("값: %hd\n", pt);
//}
//
//#include <stdio.h>
//
//struct POINT { short x, y; };
//
//
//short getDefaultData();
//void printData(short pt2);
//short plusFive(short);
//
//void main()
//{
//	short pt;
//	pt = getDefaultData();
//	printData(pt);
//	pt = plusFive(pt);
//	printData(pt);
//}
//
//short getDefaultData()
//{
//	short pt1;
//	scanf("%hd", &pt1);
//	return pt1;
//}
//
//void printData(short pt2)
//{
//	printf("값: %hd\n", pt2);
//}
//
//short plusFive(short pt3)
//{
//	pt3 += 5;
//	return pt3;
//}


#include <stdio.h>

struct POINT { short x, y; };


POINT getDefaultData();
POINT plusFive(POINT);
void printData(POINT pt2);

void main()
{
	POINT pt;
	pt = getDefaultData();
	printData(pt);
	pt = plusFive(pt);
	printData(pt);
}

POINT getDefaultData()
{
	printf(">>");
	POINT pt1;
	scanf("%hd", &pt1.x);
	scanf("%hd", &pt1.y);
	return pt1;
}

void printData(POINT pt2)
{
	printf("값: %hd\n", pt2.x);
	printf("값: %hd\n", pt2.y);
}
	
POINT plusFive(POINT pt3)
{
	pt3.x += 5;
	pt3.y += 5;
	return pt3;
}