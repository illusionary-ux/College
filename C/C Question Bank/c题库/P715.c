#include <stdio.h>

int main(void)
{
	int i, k1, k2, from, to, count, num = 0, arr[1000];

	printf("Input 2 integer to determin the range.\n");
	scanf("%d%d", &from, &to); //�������ݷ�Χ

	/* ����ж���from��to�ķ�Χ�ڵ���Щ�������� */
	for (k1=from; k1<=to; k1++)
	{
		/* �ҳ�k1�ĸ������ӣ��������������δ�ŵ�����arr�У����ӵĸ�����count��¼ */
		for (i=1, count=0; i<=k1/2; i++)
		{
			if (k1 % i == 0)
			{
				arr[count] = i;
				count++;
			}
		}
		/* ��k1�ĸ���������ӣ�������֮�ʹ�ŵ�����k2�� */
		for (i=0, k2=0; i<count; i++)
		{
			k2 = k2 + arr[i];
		}
		/* ���k1����k2����k1������ */
		if (k1 == k2)
		{
			printf("%d ", k1); //���k1��ֵ
			num++; //����num��ֵ����1������num������¼������������
		}
	}
	printf("\ncount=%d\n", num); //��������ĸ���

	return 0;
}