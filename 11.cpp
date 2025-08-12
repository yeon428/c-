#include <stdio.h>
int main()
{
	int ruleNumber = 1;
	int userNumber = 0;
	int player = 0;
	printf("<베스킨 라빈스 31!>\n");
	printf("게임을 시작합니다! 31을 말하는 사람이 지게됩니다. (0입력시 턴넘김)\n");

	for (;;)
	{
		for (int x = 1; x <= 3; x++)
		{
			printf("%c: ", 'A' + player);
			scanf("%d", &userNumber);

			if (userNumber != ruleNumber && userNumber != 0)
			{
				printf("잘못된 입력입니다.\n");
				printf("지금 입력해야하는 값은 %d입니다.\n", ruleNumber);
				x--;
				continue;
			}
			if (userNumber == ruleNumber)
				ruleNumber++;

			if (userNumber == 0)
			{
				if (x == 1)
				{
					printf("턴을 넘기기 위해서는 하나 이상의 수를 말해야 합니다.\n");
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
		printf("턴이 넘어갑니다.\n");
	}
	printf("유저 %c의 승리입니다!", 'A' + player);
}