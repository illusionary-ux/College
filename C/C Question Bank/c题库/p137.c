#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[9], s2[9];
	
	printf("����������1: ");
	gets(s1);
	printf("����������2: ");
	gets(s2);
	if (s1[0] == s2[0] && s1[1] == s2[1])
	{
		printf("\n��%s���롰%s��ͬ�ա�\n", s1, s2);
	}
	else
	{
		printf("\n��%s���롰%s����ͬ�ա�\n", s1, s2);
	}
	return 0;
}