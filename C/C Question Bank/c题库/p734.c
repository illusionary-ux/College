#include <stdio.h>

int main(void)
{
	int bian, tj, bmj; //����bian�������������ı߳�������tj�����������������������bmj�������������ı����

	printf("Input a side of cube: ");
	scanf("%d", &bian);	//�Ӽ�������������ı߳�����������bian
	tj = bian * bian * bian; //��������������
	bmj = 6 * bian * bian; //����������ı����

	printf("\nThe volume of cube is %d, the surface area of cube is %d.\n", tj, bmj); //����Ļ�����������
	
	return 0;
}