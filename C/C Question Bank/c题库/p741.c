/*
����Ĺ��ܣ�
	������������m��n��������ڵ���m��m>5����n������������ĸ��������Կո������
ע������(Prime Number)�����������ָ��һ������1����Ȼ���У�����1�ʹ����������⣬
û����������Ȼ������������

*/

#include <stdio.h>

int main(void)
{
	int m, n, i, flag, count = 0, number; //����flag��Ϊһ����־λ����ֵΪ1����������Ϊ0����������������count������¼�����ĸ���

	printf("Input the m,n: ");
	scanf("%d,%d", &m, &n);

	printf("The result:\n");
	for (number=m; 1; number++) 
	{
		flag = 1; 
		/* �ж�����number�Ƿ���������������flag��ֵΪ1������������flag��ֵΪ0 */
		for (i=2; i<number; i++)
		{
			if (number % i == 0)
			{
				flag = 0;
				break;
			}
		}

		
		if (1 == flag)
		{
			printf("%d ", i); //���i�������������i
			count++;  //���i�����������������ı���count��ֵ����1
		}
		if (count == n) //��������n����������ֹͣ�ж�
		{
			break;
		}

	}

	return 0;
}
