//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int command;
//	int day = 0;
//	int study = 0;
//	int exercise = 0;
//	int animation = 0;
//	int sleep = 0;
//
//	do {
//		printf("\n%d��° �� !\n", ++day);
//		printf("������ ������ �ұ��?\n");
//		printf("1.�ڵ������Ѵ�.\n2.��� �Ѵ�.\n3.�ִϸ��̼��� ����.\n4.���� �ܴ�.\n�׿�. ������.\n >>");
//		scanf("%d", &command);
//		int randInt = rand() % 5 + 1;
//		if (command == 1)
//		{
//			switch (randInt) {
//			case 1:
//				printf("����� ���׿�.\n");
//			case 3:
//				printf("���������� ");
//				break;
//			case 2:
//				printf("����� ������.\n");
//			case 4:
//				printf("ī�信�� ");
//				break;
//			case 5: printf("�п����� ");
//			}
//			printf("�ڵ� �����մϴ�.\n");
//			study++;
//		}
//		else if (command == 2)
//		{
//			switch (randInt) {
//			case 1:
//				printf("�ｺ");
//				break;
//			case 2:
//				printf("����");
//				break;
//			case 3:
//				printf("����");
//				break;
//			case 4:
//				printf("�״Ͻ�");
//			case 5:
//				printf("�ٳѱ�");
//			}
//			printf("�ؾ���!\n");
//			exercise++;
//		}
//		else if (command == 3)
//		{
//			switch (randInt) {
//			case 1:
//				printf("�׼�");
//				break;
//			case 2:
//				printf("�θǽ�");
//				break;
//			case 3:
//				printf("������");
//				break;
//			case 4:
//				printf("����");
//				break;
//			case 5:
//				printf("�� ���� �� �� �ִ�");
//				break;
//			}
//			printf("�ִϸ��̼��� ������!\n");
//			animation++;
//		}
//		else if (command == 4)
//		{
//			switch (randInt) {
//			case 1: case 3: case 4: case 5:
//				printf("������ �ھ���!\n");
//				break;
//			case 2:
//				printf("�ۿ��� �ھ���!\n");
//				break;
//			}
//			sleep++;
//		}
//		else break;
//	} while (1);
//
//	if (day <= 3)
//	{
//		printf("�״���Դϴ�...\n");
//	}
//	if (day > 3) {
//		if (study >= exercise && study >= animation && study >= sleep)
//		{
//			int studyLevel = study / 8;
//			switch (studyLevel) {
//			case 0:
//				printf("�ڵ������� �Ǿ����ϴ�!\n");
//				break;
//			case 1:
//				printf("���α׷��Ӱ� �Ǿ����ϴ�!\n");
//				break;
//			case 2:
//				printf("FrontEnd �����ڰ� �Ǿ����ϴ�!\n");
//				break;
//			case 3:
//				printf("BackEnd �����ڰ� �Ǿ����ϴ�!\n");
//				break;
//			default:
//				printf("Ǯ���� �����ڰ� �Ǿ����ϴ�!\n");
//				break;
//			}
//		}
//		if (exercise >= study && exercise >= animation && exercise >= sleep)
//		{
//			int exerciseLevel = exercise / 8;
//			switch (exerciseLevel) {
//			case 0:
//				printf("������� �Ǿ����ϴ�!\n");
//				break;
//			case 1:
//				printf("�ǰ��� ����� �Ǿ����ϴ�!\n");
//				break;
//			case 2:
//				printf("źź�� ���Ű� �Ǿ����ϴ�!\n");
//				break;
//			case 3:
//				printf("��â�� �Ǿ����ϴ�!\n");
//				break;
//			default:
//				printf("�¸����� �Ǿ����ϴ�!\n");
//				break;
//			}
//		}
//		if (animation >= exercise && animation >= study && animation >= sleep)
//		{
//			int animationLevel = animation / 8;
//			switch (animationLevel) {
//			case 0:
//				printf("�ִϸ��̼ǿ� �Թ��߽��ϴ�!\n");
//				break;
//			case 1:
//				printf("�ִϸ��̼ǿ� �������ϴ�!\n");
//				break;
//			case 2:
//				printf("�ִϸ��̼ǿ� �ߵ��Ǿ����ϴ�!\n");
//				break;
//			case 3:
//				printf("�ִϸ��̼� ��� ������ϴ�...\n");
//				break;
//			default:
//				printf("�ô��� �Ǿ����ϴ�...\n");
//				break;
//			}
//		}
//		if (sleep >= study && sleep >= exercise && sleep >= animation)
//		{
//			int sleepLevel = sleep / 8;
//			switch (sleepLevel) {
//			case 0:
//				printf("���� �ڸ� �������� �����մϴ�!\n");
//				break;
//			case 1:
//				printf("������ ������!\n");
//				break;
//			case 2:
//				printf("��ٷ��Ⱑ �Ǿ����ϴ�!\n");
//				break;
//			case 3:
//				printf("�����ִ� �ð����� �����ִ� �ð��� �� ��ϴ�!\n");
//				break;
//			default:
//				printf("�̷��Ÿ� ���鿡 ��ʽÿ�...\n");
//				break;
//			}
//		}
//	}
//
//		return 0;
//	}

//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++) {
//		printf("�� %d����\n", sheep);
//	}
//	printf("������!\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++)
//	{
//		printf("�� %d����\n", sheep);
//		if (sheep == 3) {
//			printf("���߿� ������!\n");
//			break;
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++) {
//		if (sheep == 3) {
//			printf("���Ƽ� ���� ���� ���ߴ�!\n");
//			continue;
//		}
//		printf("�� %d����\n", sheep);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 20; sheep++) {
//		printf("�� %d����\n", sheep);
//	}
//	printf("������!\n");
//	return 0;
//}

#include <stdio.h>
int main()
{
	int sheep;
	for (sheep = 1; sheep <= 50; sheep++)
	{
		if (sheep == 10 || sheep == 20 || sheep == 30 || sheep == 40)
		{
			printf("���� ���Ҵ�!\n");
			continue;
		}

		if (sheep == 45)
			break;

		printf("�� %d����\n", sheep);
	}
	return 0;
}