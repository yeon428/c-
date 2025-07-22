#include <stdio.h>
int main()
{
	int a, c, input, jaritsu = 0;
	scanf("%d", &a);
	input = a;

	while (a != 0) 
	{
		a = a / 10;
		jaritsu++;

	}
	//printf("%d\n", jaritsu); //ÀÚ¸´¼ö

	int b = 1;
	while (jaritsu >= 2)
	{
		b = b * 10;
		jaritsu--;
	}
	//printf("%d\n", b); //10^n
	
	while (b >= 1)
	{
		c = input / b;
		input = input % b;
		//printf("%d\n", c);
		while (c >= 1) {
			printf("\u2665");
			printf("\u2665");
			c--;
		}
		printf("\n");
		b = b / 10;
	}

}