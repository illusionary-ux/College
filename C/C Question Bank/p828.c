/* �Ӽ�������3���ɴ��ո���ַ���
(Լ�����ַ�����127�ֽ�)��
��������ַ�����*/
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[128], str2[128], str3[128], maxstr[128];
	
	printf("Please input the first string:\t");
	gets(str1); //�����һ���ַ���
	printf("Please input the second string:\t");
	gets(str2); //����ڶ����ַ���
	printf("Please input the third string:\t");
	gets(str3); //����������ַ���
	
	/*�Ƚ������ַ����Ĵ�С���������ַ������������maxstr�� */
	if (strcmp(str1, str2) > 0)
	{
		strcpy(maxstr, str1);
	}
	else
	{
		strcpy(maxstr, str2);
	}
	if (strcmp(str3, maxstr) > 0)
	{
		strcpy(maxstr, str3);
	}
	
	printf("\n����ַ����ǣ�%s\n", maxstr);

	return 0;

}