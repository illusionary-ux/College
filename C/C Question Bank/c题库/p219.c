/* ����Ĺ��ܣ�
	�Ӽ��̶���һ���ַ�(Լ�����ַ�����127�ֽ�)�������е������ַ��Լ���Щ�����ַ�����������Ļ����ʾ��
ע�⣺Ҫ������ʾ��Щ�����ַ���������
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
	char arr1[128], arr2[128];
	int num = 0;
	int i;
	
	/* ����һ���ַ���ŵ�����arr1�� */
	printf("Please input string:");
	gets(arr1);
	
	for (i = 0; arr1[i] != '\0'; i++)
	{
		if (arr1[i] >= '0' && arr1[i] <= '9') // �ж�arr[i]�Ƿ��������ַ�
		{
			arr2[num] = arr1[i];  //��arr[i]�е������ַ���ŵ�����arr2��
			num++;
		}
	}
	printf("shu zu ge shu wei:%d\n", num); //��������ַ�������
	
	printf("shu zi wei:");
	
	/* �������arr2�е������ַ� */
	for (i = 0; i < num; i++)
	{
		printf("%c", arr2[i]);
	}
	printf("\n");
	return 0;
}