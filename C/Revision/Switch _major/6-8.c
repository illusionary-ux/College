 
#include <stdio.h>

void Input(int a[],int m);
int Max(int a[],int m, int num); 
#define N 100
int main(void)
{
        int arrA[N], n,num, maxA;

        scanf("%d", &n);

        Input(arrA,n);
    
        scanf("%d", &num);

        maxA = Max(arrA,n,num) ;
        if (maxA == -1)
                printf("not Find!\n");
        else
                printf("%d\n", maxA);
    
        return 0;
}
/* ����������д�� */
 
void Input(int a[],int m)
{
	int i;
	for (i = 0; i < m; i++)
	{
		scanf("%d", &a[i]);
	}
}
int Max ( int a[ ], int m, int num)
{
	int max = 0, i, flag = 0;
	for (i = 0; i < m; i++)
	{
		if (a[i] < num && a[i] > max)
		{
			max = a[i];
			flag = 1;
		}
	}
	if(flag)
	{
		return max;
	}
	else
	{
		return -1;
	}
	
}
