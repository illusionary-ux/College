#include <stdio.h>
#include <string.h>

int main(void)
{
	char yiqian[81], yihou[81]; //����yiqian��ŴӼ���������ַ���������yihou����ƶ�����ַ���
	int i, j, n, length;

	printf("Please input the string: ");
	gets(yiqian); //�Ӽ��������ַ������������yiqian��
	printf("Please input n: ");
	scanf("%d", &n); //������Ҫ��λ��ֵ��������n

	length = strlen(yiqian); //��������yiqian�д�ŵ��ַ������ȣ������ó��ȴ���ڱ���length��

	n = n % length; //������Ҫ��λ��ֵ

	/* ����forѭ�����ܣ�������yiqian���ַ��������n���ַ���ŵ�����yihou��ǰn��Ԫ���� */
	for (i = length - n, j = 0; i <= length - 1; i++, j++)
	{
		yihou[j] = yiqian[i];
	}

	/* ����forѭ�����ܣ�������yiqian���ַ�������ǰ��length-n���ַ���ŵ�����yihou�У��ӵ�n+1��Ԫ�ؿ�ʼ��� */
	for (i = 0, j = n; i <= length - n - 1; i++, j++)
	{
		yihou[j] = yiqian[i];
	}
	yihou[j] = '\0'; //����ַ���������־

	printf("\nThe result is: %s\n", yihou); //����ƶ�����ַ���

	return 0;
}