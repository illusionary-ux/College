/*
����Ĺ��ܣ�
  ���������n����Ļ����ʾ��Ӧ��ͼ��
*/
#include <stdio.h>

int main(void)
{
	int n;
	int i, j;

	printf("Please input n:");
	scanf("%d", &n);

	/* ���ͼ�ε��ϰ벿�֣���n�У�*/
	for (i = 1; i <= n; i++)
	{
		printf("%c", '$');
		
		/* �����ǰ����Ĳ��ǵ�n�У����������i�еĿո��������i���ϵĵڶ���$ */
		if (i != n)
		{
			for (j = 1; j <= n-1-i; j++)
			{
				printf(" ");
			}
			printf("%c", '$');
		}
		printf("\n");
	}
	
	/* ���ͼ�ε��°벿�֣���n-1�У�*/
	for (i = n - 1; i >= 1; i--)
	{
		printf("%c", '$');
		for (j = 1; j <= n - 1 - i; j++)
		{
			printf(" ");
		}
		printf("%c", '$');
	
		printf("\n");
	}

	return 0;
}