#include <stdio.h>
int main()
{
	int ruleNumber = 1;
	int userNumber = 0;
	int player = 0;
	printf("<����Ų ��� 31!>\n");
	printf("������ �����մϴ�! 31�� ���ϴ� ����� ���Ե˴ϴ�. (0�Է½� �ϳѱ�)\n");

	for (;;)
	{
		for (int x = 1; x <= 3; x++)
		{
			printf("%c: ", 'A' + player);
			scanf("%d", &userNumber);

			if (userNumber != ruleNumber && userNumber != 0)
			{
				printf("�߸��� �Է��Դϴ�.\n");
				printf("���� �Է��ؾ��ϴ� ���� %d�Դϴ�.\n", ruleNumber);
				x--;
				continue;
			}
			if (userNumber == ruleNumber)
				ruleNumber++;

			if (userNumber == 0)
			{
				if (x == 1)
				{
					printf("���� �ѱ�� ���ؼ��� �ϳ� �̻��� ���� ���ؾ� �մϴ�.\n");
					x--;
					continue;
				}
				break;
			}

			if (userNumber >= 31)
				break;
		}
		player = ++player % 2;
		if (userNumber >= 31)
			break;
		printf("���� �Ѿ�ϴ�.\n");
	}
	printf("���� %c�� �¸��Դϴ�!", 'A' + player);
}