#include <stdio.h>
#include <math.h>

int main(void)
{
	double a1, b1, c1, area, s; //�������

	printf("please input triange sides:");
	scanf("%lf,%lf,%lf", &a1, &b1, &c1); //�Ӽ�����������double�͵����ֱ𸳸�����a1,b1,c1

	if ((a1 + b1 > c1) && (a1 + c1 > b1) && (b1 + c1 > a1))  //�������ܹ���������
	{
		s = (a1 + b1 + c1) / 2;
		area = sqrt(s * (s - a1) * (s - b1) * (s - c1));
		printf("area=%.2f\n", area);
	}
	else //�����߲��ܹ���������
	{
		printf("data error\n");
	}

	return 0;
}