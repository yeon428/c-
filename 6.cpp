//#include <stdio.h>
//void main()
//{
//	printf("�ȳ��ϼ���? ���ۺ��� for���� ���� ���Դϴ�. ^^\n");
//	printf("�ȳ��ϼ���? ���ۺ��� for���� ���� ���Դϴ�. ^^\n");
//	printf("�ȳ��ϼ���? ���ۺ��� for���� ���� ���Դϴ�. ^^\n");
//	printf("�ȳ��ϼ���? ���ۺ��� for���� ���� ���Դϴ�. ^^\n");
//	printf("�ȳ��ϼ���? ���ۺ��� for���� ���� ���Դϴ�. ^^\n");
//}

//#include <stdio.h>
//void main()
//{
//	int i;
//	for (i = 0; i<5; i++)
//	{
//		printf("�ȳ��ϼ���? ���ۺ��� for���� ���� ���Դϴ�. ^^\n");
//	}
//}

#include <stdio.h>
void main()
{
	int hap = 0;
	int i;
	
	for (i = 1; i <= 10; i++) {
		hap += i;
	}
	printf("1���� 10������ ��: %d\n", hap);
}