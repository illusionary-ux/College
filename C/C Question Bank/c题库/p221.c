/* 
����Ĺ��ܣ�
	�Ӽ��̶���һ���ַ���(Լ�����ַ�����127�ֽ�)�������ַ����Ƿ��ǻ��ġ�
��ν���ļ������뷴���ƴд��һ�������磺adgda��
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[128];
	int i, j, flag;
	
	/* ����һ���ַ���ŵ�����str�� */
	printf("Please input string:");
	gets(str);
	
	/* �ж��ַ����Ƿ��ǻ��� */
	flag = 0;
	for (i=0, j=strlen(str)-1; i<j; i++, j--)  
	{
		if (str[i] != str[j]) 
		{
			flag = 1;
			break;
		}
	}

	/* ����Ƿ���ĵ���Ϣ */
	if (1 == flag)
	{
		printf("%s bu shi hui wen.\n", str);
	}
	else
	{
		printf("%s shi hui wen.\n", str);
	}

	return 0;
}