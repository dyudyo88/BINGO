#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 4   // NxN bingo game
#define M 2
#define OVERLAPED 1
#define UNOVERLAPED 0

extern int arr1[N][N];
extern int arr2[N][N];
int row, col;
int num;


int get_number_byCom(void)
{	
	num = 1 + (rand() % ((N)*(N)));
	int i,j;
	int flag=0;
	
	do
	{	
		printf("��ǻ�Ͱ� %d�� �����߽��ϴ�.\n", num);
		
		flag=1;
		
		for(i=0;i<N;i++)
		{
			for(j=0;j<N;j++)
			{	
				if(arr2[i][j]==num)
				{	
					flag=0;
					break;
				}
			}
		}
	
		
		if (flag == 1) 											 
		{
			printf("��ǻ�Ͱ� �����ߴ� ���ڸ� �����߽��ϴ�. �ٽ� ���ϴ�.\n");	//�ٽ� �ǵ��ư�
			break;
		} 
		
	}while(flag==1);

	printf("\n");
	return num;
	

}

