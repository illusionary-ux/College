#include <stdio.h>

int main(void)
{
	double hn = 10000, sn = 10000; //hn�Ƿ����ĸ߶ȣ�sn����ؾ����ľ���
	int i, n;

	printf("Please input n:");
	scanf("%d", &n); //����n��ֵ

	for (i=1; i<=n; i++)
	{
		hn = hn / 2;  //�����n�η����ĸ߶�
		sn = sn + 2 * hn; //�����n+1����ؾ����ľ���
	}

	sn = sn - 2 * hn; //��sn�м�ȥ��n�η����ĸ߶Ⱥ͵�n+1����صĸ߶ȣ��ŵ��ڵ�n������ܹ������ľ���

	printf("sn=%f,hn=%f\n", sn, hn); //������
	
	return 0;
}