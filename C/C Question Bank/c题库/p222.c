/*
����Ĺ��ܣ�
�Ӽ����϶���һ���ַ�(Լ�����ַ�����127�ֽ�)�������·���������ܱ任��
��������A->Z   ��a->z
��������B->Y   ��b->y
��������C->X   ��c->x
������������   ������
��������Z->A   ��z->a
��������ĸA���Z����ĸB���Y...������ĸ�ַ����䡣�������Ļ������ʾ��һ���ַ��ĳ��ȣ�
����ʾ���ɵ����ġ�
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[128], str2[128];
	int i;

	/* ����һ���ַ�����ŵ�����str�� */
	printf("Please input string:");
	gets(str1);

	/* ������str�е��ַ������м��ܱ任 */
	for (i = 0; str1[i] != '\0'; i++)
	{
		/* ��Сд��ĸ���м��� */
		if ((str1[i] >= 'a') && (str1[i] <= 'z'))  
		{
			str2[i] = 'a' + ('z' - str1[i]);
		}
		/* �Դ�д��ĸ���м��� */
		else if ((str1[i] >= 'A') && (str1[i] <= 'Z'))
		{
			str2[i] = 'A' + ('Z' - str1[i]);
		}
		else
		{
			str2[i] = str1[i]; //����ĸ����
		}
	}
	str2[i] = '\0';

	/* ����ַ����ĳ��� */
	printf("zi fu chuan chang du: %d\n", strlen(str2));
	/* ������� */
	printf("miwen:%s\n", str2);

	return 0;
}