#include <stdio.h>

int main(void)
{
	long a1, a2, a5;
	double a3, a4, a6;

	printf("������4������");
	scanf("%ld %ld %lf %lf", &a1, &a2, &a3, &a4);
	a5 = a1 % a2;
	a6 = a3 * a5 + a4;
	printf("\n������Ϊ��%016.7lf\n", a6);
	return 0;
}