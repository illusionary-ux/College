#include <stdio.h>
#include <math.h>

int main(void)
{
	double a, b, c, x1, x2; /*�������*/

	printf("������a,b,c��"); /*����Ļ�������ʾ��*/
	scanf("%lf,%lf,%lf", &a, &b, &c); /*�Ӽ�������a��b��c��ֵ*/
	
	x1 = (-b+sqrt(b * b - 4 * a *c)) / (2 * a); /*���㷽�̵ĵ�һ����*/
	x2 = (-b-sqrt(b * b - 4 * a *c)) / (2 * a); /*���㷽�̵ĵڶ�����*/
	
	printf("һԪ���η��̵Ľ�Ϊ��\nx1=%.2f\nx2=%.2f\n", x1, x2); /*������*/

	return 0;

}