#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp;

	int data1, data2, data3, result1, result2;
	char op1, op2;

	fp = fopen("Comp.txt", "r");
	if (NULL == fp)
	{
		printf("can not open file!\n");
		exit(1);
	}

	/* ����fscanf�Ĺ��ܣ����ļ��ж�һ����ʽ����ʽ�еĵ�һ������������data1,��һ���������������op1���ڶ�������������data2���ڶ����������������op2������������������data3 */
	fscanf(fp, "%d %c %d %c %d", &data1, &op1, &data2, &op2, &data3); 
	

	
	if (op1 == '*') //�����һ���������'*'
	{
		result1 = data1 * data2; //����ʽ�е�ǰ���������
		if (op2 == '+')  //�ڶ����������'+'
		{
			result2 = result1 + data3; //��ǰ�������ĳ˻��͵����������
		}
		else if (op2 == '-') //�ڶ���������Ǽ���'-'
		{
			result2 = result1 - data3; //��ǰ�������ĳ˻��͵����������
		}
		else if (op2 == '*') //�ڶ����������'*'
		{
			result2 = result1 * data3; //��ǰ�������ĳ˻��͵����������

		}
	}
	else if (op2 == '*') //�����һ�����������'*'�� �ڶ����������'*'
	{
		result1 = data2 * data3; //����ʽ�еĵڶ������͵����������
		if (op1 == '+')  //��һ���������'+'
		{
			result2 = data1 + result1; //����һ�����ͺ��������ĳ˻����
		}
		else if (op1 == '-') //��һ���������'-'
		{
			result2 = data1 - result1; //����һ�����ͺ��������ĳ˻����
		}
	}
	else //�����ʽ�е����������������'*'
	{
		if (op1 == '+') //��һ���������'+'
		{
			result1 = data1 + data2; //����ʽ�е�ǰ���������
		}
		else if (op1 == '-') //��һ���������'-'
		{
			result1 = data1 - data2; //����ʽ�е�ǰ���������
		}

		if (op2 == '+') //�ڶ����������'+'
		{
			result2 = result1 + data3; //����ʽ��ǰ�������ĺ�������������
		}
		else if (op2 == '-') //�ڶ����������'-'
		{
			result2 = result1 - data3; //����ʽ��ǰ�������ĺ�������������
		}			
	}
	

	printf("%d %c %d %c %d = %d\n", data1, op1, data2, op2, data3, result2);

	fclose(fp);

	return 0;
}