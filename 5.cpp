#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand((unsigned int)time(NULL));
	int command;
	int day = 0;
	int study = 0;
	do {
		printf("\n%d��° �� !\n", ++day);
		printf("���õ� �ڵ��ұ��?\n");
		printf("1.�����Ѵ�.\n");
		printf("�׿�. ������.\n >>");
		scanf("%d", &command);
		if (command != 1) break;
		int randInt = rand() % 5 + 1;

		switch (randInt) {
		case 1:
			printf("����� ���׿�.\n");
		case 3:
			printf("���������� ");
			break;
		case 2:
			printf("����� ������.\n");
		case 4:
			printf("ī�信�� ");
			break;
		case 5: printf("�п����� ");
		}
		printf("�ڵ� �����մϴ�.\n");
		study++;
	} while(1);

	if (day <= 3) {
		printf("�״���Դϴ�...\n");
	}
	else {
		int level = study / 8;
		switch (level) {
		case 0:
			printf("�ڵ������� �Ǿ����ϴ�.!\n");
			break;
		case 1:
			printf("���α׷��Ӱ� �Ǿ����ϴ�.!\n");
			break;
		case 2:
			printf("FrontEnd �����ڰ� �Ǿ����ϴ�.!\n");
			break;
		case 3:
			printf("BackEnd �����ڰ� �Ǿ����ϴ�.!\n");
			break;
		default:
			printf("Ǯ���� �����ڰ� �Ǿ����ϴ�.!\n");
			break;
		}
	}
	return 0;
}