#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
	
	char pinming[17]; //��Ŵ��ļ�������ĳ��ƷƷ��
	char guige[12]; //��Ŵ��ļ�������ĳ��Ʒ���
	int shuliang = 0; //��Ŵ��ļ�������ĳ��Ʒ����
	float danjia; //��Ŵ��ļ�������ĳ��Ʒ����
	int flag = 0; // flagֵΪ0����ʾû���ҵ���Ʒ��Ϊ1����ʾ�ҵ���Ʒ
	int pmpd, ggpd, slpd, djpd; //�������fread�ĺ���ֵ
	char cxpm[17]; //������������ŴӼ��������Ҫ��ѯ����Ʒ��
	FILE *fp;

	printf("Please input shang pin pin ming:");
	scanf("%s", cxpm); //����Ҫ��ѯ����Ʒ��
	
	printf("\ncha zhao qing kuang:\n");
	fp = fopen("sp36.dat", "rb"); //�򿪶������ļ�sp36.dat
	
	/* �ж��ļ�sp36.dat�Ƿ񱻴򿪣�fp����NULL�����ļ��򲻿��������ļ����� */
	if (NULL == fp)
	{
		printf("can not open file!\n");
		exit(1);
	}
	/* �����������Ĺ��ܣ����ļ�sp36.dat�ж����� */
	pmpd = fread(pinming, 17, 1, fp); 
	ggpd = fread(guige, 12, 1, fp);
	slpd = fread(&shuliang, 3, 1, fp);
	djpd = fread(&danjia, sizeof(float), 1, fp);
	while (feof(fp) == 0) //
	{
		/* �����������Ϊ�棬˵�����ļ�����ȷ���������� */
		if ((pmpd == 1) && (ggpd == 1) && (slpd == 1) && (djpd == 1))
		{/* �����ļ���������Ʒ������Ӽ�������Ĵ���ѯ����Ʒ���ƱȽϣ��������ͬ��˵���ҵ���Ʒ���������Ʒ���� */
			if (strcmp(pinming, cxpm) == 0) //�������strcmp�ĺ���ֵΪ0��˵�������ַ�����ͬ
			{
				printf("%s,%s,%d,%.2f\n", pinming, guige, shuliang, danjia);
				flag = 1; //����־������ֵ��Ϊ1��˵���Ѿ��ҵ�Ҫ��ѯ����Ʒ
			}
		}

		/* �����������Ĺ��ܣ����ļ�sp36.dat�ж����� */
		pmpd = fread(pinming, 17, 1, fp); 
		ggpd = fread(guige, 12, 1, fp);
		slpd = fread(&shuliang, 3, 1, fp);
		djpd = fread(&danjia, sizeof(float), 1, fp);
	}
	/* �ж��Ƿ��ҵ�����ѯ����Ʒ�����flag��ֵΪ0��˵��û���ҵ����������Ӧ��Ϣ */
	if (0 == flag)
	{
		printf("mei you shang pin :%s", cxpm);
	}
	fclose(fp); //�ر��ļ�

	return 0;
}