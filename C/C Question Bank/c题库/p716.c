#include <stdio.h>

int main(void)
{
	int a, n, i;
	double s = 0, tmp = 0;

	printf("Please input a,n:");
	scanf("%d,%d", &a, &n); //����a��ֵ��n��ֵ
	/* ����a��n��ֵ���м��� */
	for (i = 1; i <= n; i++)
	{
		tmp = tmp * 10 + a; //�ñ��ʽ�ļ���������Ϊa,aa,aaa�ȣ����a��ֵΪ2����ӦΪ2,22,222��
		s = s + tmp; //��tmp��ֵ�����s���
		
	}
	printf("a+aa+...=%.0f\n", s); //������

	return 0;
}