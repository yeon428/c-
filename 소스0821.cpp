//#include <stdio.h>
//int hap(int n)
//{
//	if (n == 1) return 1;
//	return hap(n - 1) + n;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d", hap(n));
//	return 0;
//}

//#include <stdio.h>
//
//struct BYTE
//{
//	char a;
//	char b;
//};
//
//void main()
//{
//	struct BYTE a;
//	a.a = 10;
//	a.b = 20;
//	printf("%d %d", a.a, a.b);
//}

//#include <stdio.h>
//struct student
//{
//	int id;
//	char* name;
//	float aver;
//};
//
//void main()
//{
//	struct student s = { 1, (char*)"�̻�", 90.5 };
//	printf("���̵�: %d\n", s.id);
//	printf("�̸�: %s\n", s.name);
//	printf("�����: %lf\n", s.aver);
//}

//#include <stdio.h>
//
//struct GUN
//{
//	char name[10];
//	float bullet_type;
//	bool scope;
//	bool muzzle;
//	bool handgrip;
//	bool magazine;
//	bool tactical_stock;
//	int magazine_size;
//};
//
//int main()
//{
//	struct GUN M416 = { "M416", 5.56, true, true, true, true, true, 30 };
//	printf("ȭ���: %s\n", M416.name);
//	printf("ź ����: %.2f\n", M416.bullet_type);
//	printf("����������: %s", M416.scope ? "true" : "false");
//	return 0;
//}

//#include <stdio.h>
//
//struct __dummy__ {
//	int data_0;
//	char data_1;
//	float data_2;
//};
//struct VIP_PERSON {
//	char grade;
//	char personCode;
//	char mileage;
//};
//int main()
//{
//	int sizedummy = sizeof(__dummy__);
//	int sizevip = sizeof(VIP_PERSON);
//	printf("���� ũ��: %d\n", sizedummy);
//	printf("vip���� ũ��: %d\n", sizevip);
//	return 0;
//}

//#include <stdio.h>
//struct VIP_PERSON {
//	char grade;
//	char personCode;
//	char mileage;
//};
//
//int main()
//{
//	VIP_PERSON lee_sam;
//	printf("�� ����� �Է��ϼ���\n");
//	while (true)
//	{
//		scanf("%c", &lee_sam.grade);
//		if (lee_sam.grade == 's' || 'A' <= lee_sam.grade && lee_sam.grade <= 'D')
//			break;
//	}
//	int tmp;
//	printf("�� �ڵ带 �Է��ϼ���\n");
//	scanf("%d", &tmp);
//	lee_sam.personCode = (char)tmp;
//	printf("���ϸ����� �Է��ϼ���\n");
//	scanf("%d", &tmp);
//	lee_sam.mileage = (char)tmp;
//	printf("%c %d %d\n", lee_sam.grade, lee_sam.personCode, lee_sam.mileage);
//	return 0;
//}

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

#include <stdio.h>
struct __dummy__ {
	int data_0;
	char data_1;
	float data_2;
};