#include <stdio.h>

int main(void)
{
	char ch;

	printf("please input the letter of someday:");
	/* �Ӽ�������һ���ַ�������ch��������ַ�����Y�����жϸ��ַ������ڼ�������������� */
	while ((ch = getchar()) != 'Y')  
	{
		switch (ch)
		{
			case 'M':
				printf("Monday\n");
				break;
			case 'T': 
				ch = getchar(); //��һ���ַ���T����Ӽ�������ڶ����ַ�
				if (ch == 'u')  //�ڶ����ַ���u�����Tuesday
				{
					printf("Tuesday\n");
				}
				else if (ch == 'h') //�ڶ����ַ���h�����Thursday
				{
					printf("Thursday\n");
				}
				else //�ڶ����ַ��Ȳ���u��Ҳ����h�����data error
				{
					ungetc(ch, stdin); // �ú����Ĺ����ǰ�ch�е��ַ����ظ�����stdin
					printf("data error\n");
				}
				break;
			case 'W':
				printf("Wednesday\n");
				break;
			case 'F':
				printf("Friday\n");
				break;
			case 'S':
				ch = getchar();
				if (ch == 'u')
				{
					printf("Sunday\n");
				}
				else if (ch == 'a')
				{
					printf("Saturday\n");
				}
				else 
				{
					ungetc(ch, stdin);	// �ú����Ĺ����ǰ�ch�е��ַ����ظ�����stdin
					printf("data error\n");
				}
				break;
			default:
				printf("data error\n"); //����ch�е��ַ��������������ַ��������data error
		}
	}
	
	return 0;
}