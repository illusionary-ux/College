/*
����Ĺ��ܣ�
�Ӽ���������5���ַ���(Լ����ÿ���ַ������ַ�����80�ֽ�)����������������������
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[5][80], tmp[80];
	int i, j;

	/* ����5���ַ�����ŵ���ά����str�У�ÿ�д��һ���ַ��� */
	printf("Input 5 strings:\n");
	for (i=0; i<5; i++)
	{
		gets(str[i]);
	}

	/* ʹ�����ݷ���5���ַ�������С�������� */
	for (j=0; j<4; j++)
	{
		for (i=0; i<4-j; i++)
		{
			if (strcmp(str[i], str[i + 1]) > 0)
			{
				strcpy(tmp, str[i]);
				strcpy(str[i], str[i+1]);
				strcpy(str[i+1], tmp);
			}
		}
	}

	/* ����������5���ַ��� */
	printf("---------------------------\n");
	for (i=0; i<5; i++)
	{
		puts(str[i]);
	}

	return 0;
}