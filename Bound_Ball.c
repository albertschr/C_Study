#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
void main()
{
	int i, j;
	int x = 1;
	int y = 10;
	
	int velocity_x = 1;
	int velocity_y = 1;
	int left = 0;
	int right = 20;
	int top = 0;
	int bottom = 10;
	int t = 1;
	while(1)
	{
		x = x + velocity_x;
		y = y + velocity_y;
		system("cls");
		for (i = 0;i < x;i++)
			printf("\n");
		// 输出小球左边的空格
		for (j = 0;j < y;j++)
			printf(" ");
		printf("o");  // 输出小球o
		printf("\n");

		Sleep(50);

		if ((x == top) || (x == bottom))
		{
			printf("\a");
			velocity_x = -velocity_x;
		}
		if ((y == left) || (y == right))
		{
			printf("\a");
			velocity_y = -velocity_y;
		}
	}
}
