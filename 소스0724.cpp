//#include <stdio.h>
//int main()
//{
//	int select;
//
//	do
//	{
//		printf("1.�α���\n2.ȸ������\n3.�ɼ�\n4.���� �����\n");
//		scanf("%d", &select);
//
//		switch (select)
//		{
//		case 1: case 2:
//			printf("���̵�:\n��й�ȣ:\n");
//			break;
//		case 3:
//			printf("�ɼ� ����\n");
//			break;
//		case 4:
//			printf("me!\n");
//			break;
//		}
//	} while (select <= 4 && select >= 1);
//	return 0;
//}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand((unsigned int)time(NULL));
	int command;
	int day = 0;
	int study = 0;
	int exercise = 0;
	int animation = 0;
	int sleep = 0;
	
	do {
		printf("\n%d��° �� !\n", ++day);
		printf("������ ������ �ұ��?\n");
		printf("1.�ڵ������Ѵ�.\n2.��� �Ѵ�.\n3.�ִϸ��̼��� ����.\n4.���� �ܴ�.\n�׿�. ������.\n >>");
		scanf("%d", &command);
		int randInt = rand() % 5 + 1;
		if (command == 1)
		{
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
		}
		else if (command == 2)
		{
			switch (randInt) {
			case 1:
				printf("�ｺ");
				break;
			case 2:
				printf("����");
				break;
			case 3:
				printf("����");
				break;
			case 4:
				printf("�״Ͻ�");
			case 5:
				printf("�ٳѱ�");
			}
			printf("�ؾ���!\n");
			exercise++;
		}
		else if (command == 3)
		{
			switch (randInt) {
			case 1:
				printf("�׼�");
				break;
			case 2:
				printf("�θǽ�");
				break;
			case 3:
				printf("������");
				break;
			case 4:
				printf("����");
				break;
			case 5:
				printf("�� ���� �� �� �ִ�");
				break;
			}
			printf("�ִϸ��̼��� ������!\n");
			animation++;
		}
		else if (command == 4)
		{
			switch (randInt) {
			case 1: case 3: case 4: case 5:
				printf("������ �ھ���!\n");
				break;
			case 2:
				printf("�ۿ��� �ھ���!\n");
					break;
			}
			sleep++;
		}
		else break;
	} while (1);

	if (day <= 3) 
	{
		printf("�״���Դϴ�...\n");
	}
	else if (study >= exercise && study >= animation && study >= sleep)
	{
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
	else if (exercise >= study)
	return 0;
}