#include <stdio.h>

int main(void)
{
	double a1, a4;
	int a2, a3;

	printf("������4������");
	scanf("%lf %d %d %lf", &a1, &a2, &a3, &a4);
	printf("\n������Ϊ��%013.5lf\n", a1 + (a2 % a3 ) * a4);
	return 0;
}