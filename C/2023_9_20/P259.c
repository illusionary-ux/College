#include<stdio.h>

int main(void)
{
	int num1, num2, num3;
	char c1, c2;
	double r1, r2;
	
	printf("������7������(����Ϊ3������2�ַ���2ʵ��): ");
	scanf("%d %d %d %c %c %lf %lf", &num1, &num2, &num3, &c1, &c2, &r1, &r2);
	printf("\n��7�����ݵ���Ϊ:7-%.5lf 6-%.5lf 5-%c 4-%c 3-%d 2-%d 1-%d", r2, r1, c2, c1, num3, num2, num1);
	
	return 0;
}
