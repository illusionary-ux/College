#include <stdio.h>

int main(void)
{
	char a1[5], max;
	int i;

	printf("������5���ַ�: ");
	for (i = 0; i < 5; i++)
	{
		scanf("%c", &a1[i]);
	}
	max = a1[0];
	for (i = 0; i < 5; i++)
	{
		if (max < a1[i])
		{
			max = a1[i];
		}
	}
	printf("\n�����ַ��� %c-%d\n", max, max);
	return 0;
}