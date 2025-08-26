//#include <stdio.h>
//
//struct POINT { short x, y; };
//
//
//POINT getDefaultData();
//POINT plusFive(POINT);
//void printData(POINT pt2);
//
//void main()
//{
//	POINT pt;
//	pt = getDefaultData();
//	printData(pt);
//	pt = plusFive(pt);
//	printData(pt);
//}
//
//POINT getDefaultData()
//{
//	printf(">>");
//	POINT pt1;
//	scanf("%hd", &pt1.x);
//	scanf("%hd", &pt1.y);
//	return pt1;
//}
//
//void printData(POINT pt2)
//{
//	printf("값: %hd\n", pt2.x);
//	printf("값: %hd\n", pt2.y);
//}
//
//POINT plusFive(POINT pt3)
//{
//	pt3.x += 5;
//	pt3.y += 5;
//	return pt3;
//}

//#include <stdio.h>
//
//void main()
//{
//	char arr[4];
//	printf("%d\n", sizeof(arr));
//}

//#include <stdio.h>
//
//void main()
//{
//	int arr[4];
//	printf("%d\n", sizeof(arr));
//}

//#include <stdio.h>
//
//void main()
//{
//	char alpah[4] = { 'a', 'b', 'c', 'd' };
//	printf("%c%c%c%c%c\n", alpah[0], alpah[1], alpah[2], alpah[3]);
//}

//#include <stdio.h>
//
//void main()
//{
//	int num[3] = { 3, 6, 9 };
//	printf("num의 안에 들어있는");
//	printf("1번째 숫자는? %d\n", num[1]);
//}

//#include <stdio.h>
//int main()
//{
//	int num[3] = { 3, 6, 9 };
//	printf("%d번째에 %d 저장\n", 0, num[0]);
//	printf("%d번째에 %d 저장\n", 1, num[1]);
//	printf("%d번째에 %d 저장\n", 2, num[2]);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int num[3] = { 3, 6, 9 };
//	int k = 0;
//	printf("%d번째에 %d 저장\n", k, num[k]); k++;
//	printf("%d번째에 %d 저장\n", k, num[k]); k++;
//	printf("%d번째에 %d 저장\n", k, num[k]); k++;
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int num[3] = { 3, 6, 9 };
//	for (int k = 0; k < 3; k++) {
//		printf("%d번째에 %d 저장\n", k, num[k]);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[3];
//	for (int i = 0; i < 3; i++) {
//		scanf("%d", &arr[i]);
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int num[5];
//	for (int i = 0; i < 5; i++)
//	{
//		scanf("%d", &num[i]);
//	}
//	printf("\n\n");
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d\n", num[i]);
//	}
//}

//#include <stdio.h>
//int main()
//{
//	int num[10];
//	int userNumber, sameNumber;
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &num[i]);
//	}
//	int for_flag = 1;
//	for (; for_flag;)
//	{
//		scanf("%d", &userNumber);
//		for (int i = 0; i < 10; i++)
//		{
//			if (userNumber == num[i])
//			{
//				for_flag = 0;
//				break;
//			}
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//void main()
//{
//	int left = 3, right = 5;
//	left = right;
//	right = left;
//	printf("left = %d, ", left);
//	printf("right = %d \n", right);
//}

//#include <stdio.h>
//
//void main()
//{
//	int left = 3, right = 5;
//	int temp;
//	temp = left;
//	left = right;
//	right = temp;
//	printf("left = %d, ", left);
//	printf("right = %d\n", right);
//}

//#include <stdio.h>
//
//void main()
//{
//	int num[2] = { 10, 3 };
//	int temp;
//	temp = num[0];
//	num[0] = num[1];
//	num[1] = temp;
//	printf("num[0] = %d, ", num[0]);
//	printf("num[1] = %d\n", num[1]);
//}

#include <stdio.h>
int main()
{
	int num[4] = { 4, 3, 1, 2 };
	int temp;
	temp = num[0];
	num[0] = num[2];
	num[2] = temp;
	temp = num[1];
	num[1] = num[3];
	num
}