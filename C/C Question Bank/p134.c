#include <stdio.h>

int main(void)
{
	char a1[10], i;

	printf("������10���ַ���");
	for (i = 0; i < 10; i++)
	{
		scanf("%c", &a1[i]);
	}
	printf("\n���ܽ��Ϊ��");
	for (i = 0; i < 9; i++)
	{
		printf("%d, ", a1[i]);
	}
	printf("%d", a1[9]);
	return 0;
}