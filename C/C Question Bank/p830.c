/* ��1+2+3+����+n��mʱ�����nֵ����sum(��1+2+3+����+n)������m�Ӽ������� */
#include <stdio.h>

int main(void)
{
	int m, n = 0, sum = 0;

	printf("please input m:");
	scanf("%d", &m); //����m��ֵ

	/* �����ۼӺ� */
	while (sum <= m)
	{
		n++;
		sum = sum + n;
	}
	sum = sum - n; //��sum�м�ȥ���һ���ۼ���n����sum��ֵ����С�ڵ���m
	
	printf("\nResult: n=%d, sum=%d\n", n-1, sum); //������

	return 0;

}