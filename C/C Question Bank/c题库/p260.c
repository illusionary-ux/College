#include <stdio.h>

int main(void)
{
	int a1, a2, a3, zz;

	printf("������3������");
	scanf("%d %d %d", &a1, &a2, &a3);
	if (a1 > a2)
	{
		zz = a1;
		a1 = a2;
		a2 = zz;
	}
	if (a2 > a3)
	{
		zz = a2;
		a2 = a3;
		a3 = zz;
	}
	if (a1 > a2)
	{
		zz = a1;
		a1 = a2;
		a2 = zz;
	}
	printf("\n����������С����Ϊ: %d   %d   %d\n", a1, a2, a3);
	return 0;
}