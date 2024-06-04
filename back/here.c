#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x, y;
	for (x = 1;x <= 9;x++)
	{
		for (y = 1;y <= x;y++)
		{
			printf("%d*%d=%3d ", y, x, x * y);
		}
		printf("\n");
	}
	Sleep(1500);
	system("cls");
	printf("Sir,Welcome back!\n");
	return 0;
}