#include <stdio.h>
#include <math.h>

int main(void)
{
	double a1;

	printf("�����뻡�� x: ");
	scanf("%lf", &a1);
	printf("\nSin(%.2lf) = %.5lf\n", a1, sin(a1));
	return 0;
}