#include <stdio.h>
#include <math.h>

int main(void)
{
	double deposit, n, capital; /*�������*/

	printf("�����뱾��"); /*����Ļ�������ʾ��*/
	scanf("%lf", &capital); /*�Ӽ������뱾�𸳸�����capital*/
	printf("��������ڣ�"); /*����Ļ�������ʾ��*/
	scanf("%lf", &n); /*�Ӽ���������ڸ�������n*/
	
	deposit = capital*pow((1+2.25/100), n); /*���㱾��֮��*/

	printf("����֮��Ϊ��%.2f\n", deposit); /*������*/

	return 0;

}