//#include <stdio.h>
//void main()
//{
//	int aa[3][4];
//
//	aa[0][0] = 1; aa[0][1] = 2; aa[0][2] = 3; aa[0][3] = 4;
//	aa[1][0] = 5; aa[1][1] = 6; aa[1][2] = 7; aa[1][3] = 8;
//	aa[2][0] = 9; aa[2][1] = 10; aa[2][2] = 11; aa[2][3] = 12;
//
//	printf("aa[0][0]���� aa[2][3]���� ���\n");
//
//	printf("%3d %3d %3d %3d\n", aa[0][0], aa[0][1], aa[0][2], aa[0][3]);
//	printf("%3d %3d %3d %3d\n", aa[1][0], aa[1][1], aa[1][2], aa[1][3]);
//	printf("%3d %3d %3d %3d\n", aa[2][0], aa[2][1], aa[2][2], aa[2][3]);
//}

//#include <stdio.h>
//void main()
//{
//	int aa[3][4];
//	int i, k;
//
//	int val = 1;
//	for (i = 0; i < 3; i++)
//	{
//		for (k = 0; k < 4;k++)
//		{
//			aa[i][k] = val;
//			val++;
//		}
//	}
//
//	printf("aa[0][0]���� aa[2][3]���� ���\n");
//
//	for (i = 0; i < 3; i++)
//	{
//		for (k = 0; k < 4;k++)
//		{
//			printf("%3d", aa[i][k]);
//		}
//		printf("\n");
//	}
//}

#include <stdio.h>
void main()
{
	int gugu[9][9];
	int i, k;
	
	for (i = 0;i < 9;i++)
	{
		for (k = 0;k < 9;k++)
		{
			gugu[i][k] = (i + 1) * (k + 1);
		}
	}

	for (i = 0;i < 9;i++)
	{
		for (k = 0;k < 9;k++)
		{
			printf("%dX%d=%2d ", k + 1, i + 1, gugu[i][k]);
		}
		printf("\n");
	}
}