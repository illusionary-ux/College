/*
����Ĺ��ܣ�
   ���������n����Ļ����ʾ��Ӧ����#��ɵ�����ͼ����
*/

#include <stdio.h>

int main(void)
{
	int n;
	int i, j;

	printf("Please input n:");
	scanf("%d", &n);

	/* ������ε��ϰ벿�֣���n+1�У� */
	for (i = 1; i <= n + 1; i++)  /* ���ǰn+1��# */
	{
		for (j = 1; j <= n + 1 - i; j++)  /* �����i��ʱ��������ո� */
		{
			printf(" ");
		}
		for (j = 1; j <= 2 * i - 1; j++)  /* �����i�е�# */
		{
			printf("#");
		}
		printf("\n");
	}
	
	/* ������ε��°벿�֣���n�У� */
	for (i = n; i >= 1; i--)  
	{
		for (j = 1; j <= n + 1 - i; j++)  /* �����i��ʱ��������ո� */
		{
			printf(" ");
		}
		for (j = 1; j <= 2 * i - 1; j++)  /* �����i�е�# */
		{
			printf("#");
		}
		printf("\n");
	}
	
	return 0;

}