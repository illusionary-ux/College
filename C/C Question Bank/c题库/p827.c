/* �Ӽ�������3���ɴ��ո���ַ���
(Լ�����ַ�����127�ֽ�)��
������������ַ����ĳ���*/
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[128], str2[128], str3[128];
	int len1, len2, len3, max;

	printf("Please input the first string:\t");
	gets(str1); //�����һ���ַ���
	len1 = strlen(str1); //�����һ���ַ����ĳ���
	printf("Please input the second string:\t");
	gets(str2); //����ڶ����ַ���
	len2 = strlen(str2); //����ڶ����ַ����ĳ���
	printf("Please input the third string:\t");
	gets(str3); //����������ַ���
	len3 = strlen(str3); //����������ַ����ĳ���

	/* �Ƚ������ַ����ĳ��ȣ��ҳ����ֵ�����ڱ���max�� */
	if (len1 > len2)
	{
		max = len1;
	}
	else
	{
		max = len2;
	}
	if (len3 > max)
	{
		max = len3;
	}
	
	printf("\n����ַ�������Ϊ��%d\n", max);

	return 0;

}