//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main()
//{
//	int a;
//	printf("1~4�߿� �����ϼ��� : ");
//	scanf("%d", &a);
//
//	switch (a)
//	{
//	case 1: 
//		printf("1�� �����ߴ�.\n");
//		break;
//	case 2:
//		printf("2�� �����ߴ�.\n");
//		break;
//	case 3:
//		printf("3�� �����ߴ�.\n");
//		break;
//	case 4:
//		printf("4�� �����ߴ�.\n");
//		break;
//	default:
//		printf("�̻��� �� �����ߴ�.\n");
//	}
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int year;
	printf("��������� �Է��ϼ��� : ");
	scanf("%d", &year);

	switch (year % 12)
	{
	case 0: printf("�����̶�\n");	break;
	case 1: printf("�߶�\n");	break;
	case 2: printf("����\n");	break;
	case 3: printf("������\n");	break;
	case 4: printf("���\n");	break;
	case 5: printf("�Ҷ�\n");	break;
	case 6: printf("ȣ���̶�\n");	break;
	case 7: printf("�䳢��\n");	break;
	case 8: printf("���\n");	break;
	case 9: printf("���\n");	break;
	case 10: printf("����\n");	break;
	case 11: printf("���\n");	break;

	}
}