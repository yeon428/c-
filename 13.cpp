//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//void main()
//{
//	struct bibim {
//		int a;
//		float b;
//		char c;
//		char d[5];
//	};
//
//	struct bibim b1;
//
//	b1.a = 10;
//	b1.b = 1.1f;
//	b1.c = 'A';
//	strcpy(b1.d, "ABCD");
//
//	printf("b1.a == > %d\n", b1.a);
//	printf("b1.b == > %f\n", b1.b);
//	printf("b1.c == > %c\n", b1.c);
//	printf("b1.d == > %s\n", b1.d);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main()
//{
//	struct student {
//		char name[10];
//		int kor;
//		int eng;
//		float avg;
//	};
//
//	struct student s;
//
//	printf("�̸�: ");
//	scanf("%s", s.name, 9);
//
//	printf("��������: ");
//	scanf("%d", &s.kor);
//
//	printf("��������: ");
//	scanf("%d", &s.eng);
//
//	s.avg = (s.kor + s.eng) / 2.0f;
//
//	printf("\n--����ü Ȱ��--\n");
//	printf("�л� �̸� ==> %s\n", s.name);
//
//	printf("���� ���� ==>%d\n", s.kor);
//
//	printf("���� ���� ==> %d\n", s.eng);
//
//	printf("��� ���� ==> %5.1f\n", s.avg);
//}

#include <stdio.h>

void main()

{

	enum week { sun, mon, tue, wed, thu, fri, sat };

	enum week ww;

	ww = sat;

	if (ww == sun)

		printf("������ �Ͽ����Դϴ�.\n");

	else

		printf("������ �Ͽ����� �ƴմϴ�.\n");
}