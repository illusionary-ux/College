#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) //�β�argc��ֵ�ǳ�������ʱ�Ӽ���������ַ��������������ļ�������ָ������argv�е�ָ�����ָ��Ӽ���������ַ�����1��ָ�����ָ��һ���ַ�����
{
	int i, j;
	char *tmp;
	/* �������Ĳ����������󣨱�����Ҫ�����Ϊ4�������������Ϣ������1���˳�����*/
	if (argc != 4)
	{
		printf("    error, usage: P792  str1 str2 str3\n");
		exit(1);  
	}
	for (j = 1; j <= 2; j++)
	{
		for (i = 1; i <= 3 - j; i++)
		{
			if (strcmp(argv[i], argv[i+1]) > 0)
			{
				tmp = argv[i];
				argv[i] = argv[i+1];
				argv[i+1] = tmp;
			}
		}
	}
	printf("    output: %s   %s   %s\n", argv[1], argv[2], argv[3]);	

	return 0; //������������������0
}