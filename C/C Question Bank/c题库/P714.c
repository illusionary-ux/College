/* ����Ĺ��ܣ�
   ��scanf����10������������int�������ͣ����������������ĺ͡������ĺ��Լ�10�����ĺ͡�
*/
#include <stdio.h>

int main(void)
{
	int x, zhengshu = 0, fushu = 0, count = 0; /* ����x������ŴӼ������������
	����zhengshu���������������֮�ͣ�����fushu����������и���֮�ͣ�
	����count������¼�Ѿ���������ݸ���*/

	printf("Input 10 integers.\n");
	/*�Ӽ�������10���������������������ĺ͡������ĺ� */
	do
	{
		scanf("%d", &x); //�Ӽ�������һ��������ŵ�����x��
		count++; //count������¼�Ѿ���������ݸ���
		/* �ж�x�����ӵ���Ӧ�ı����� */
		if (x > 0) 
		{
			zhengshu = zhengshu + x; 
		}
		else
		{
			fushu = fushu + x;
		}
	} while (count < 10);    
	
	printf("zhengshu=%d,fushu=%d,all=%d\n", zhengshu, fushu, zhengshu + fushu); //���������

	return 0;
}
