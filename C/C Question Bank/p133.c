#include <stdio.h>

int main(void)
{
	int a1[11], i;

	printf("������11�����֣�");
	for (i = 0; i < 11; i++)
	{
		scanf("%d", &a1[i]);
	}
	printf("\n���ܽ��Ϊ��");
	for (i = 0; i < 11; i++)
	{
		printf("%C", a1[i]);
	}
	return 0;
}