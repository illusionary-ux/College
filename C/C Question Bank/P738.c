#include <stdio.h>

int main(void)
{
	float shu1, shu2;

	printf("Input 2 numbers: ");
	scanf("%f%f", &shu1, &shu2); //����

	if (shu2 != 0) //������Ϊ��
	{
		printf("\nThe result is: %.2f\n", shu1 / shu2);
	}
	else //����Ϊ��
	{
		printf("\nDivid by zero");
	}
	
	return 0;
}