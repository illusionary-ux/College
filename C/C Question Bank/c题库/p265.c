#include <stdio.h>

int main(void)
{
	double a1, a2;
	int b1, b2, b3;
	char c1, c2;

	printf("������7������(����Ϊ2ʵ����3������2�ַ�): ");
	scanf("%lf %lf %d %d %d %c %c", &a1, &a2, &b1, &b2, &b3, &c1, &c2);
	printf("\n��7�����ݵ���Ϊ: 7-%c 6-%c 5-%d 4-%d 3-%d 2-%.7lf 1-%.7lf", c2, c1, b3, b2, b1, a2, a1);
	return 0;
}