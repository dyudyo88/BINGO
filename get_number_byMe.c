#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 4   // NxN bingo game
#define M 1
#define OVERLAPED 1
#define UNOVERLAPED 0

extern int arr1[N][N];
extern int arr2[N][N];
int row, col;
int num;
int cnum;


int get_number_byMe(int y[N][N])
{
	int i,j;
	int flag = 0;
	
	do
	{	
		printf("1~%d ������ �����Է� : ",N*N);
		scanf("%d",&num);
			
		if(num<1||num>N*N) //���� ���� ���ڸ� �������� �� 
		{	
			printf("1~%d ������ ���ڸ� �Է��ؾ��մϴ�.",N*N);	
			flag=1; //��� ���->ó������ ���ư� 	
		}
		
		
		else //1~NxN ���� ������ ���ڸ� �Է����� ��  
		{	
			flag=1;
			
			for(i=0;i<N;i++)
			{
				for(j=0;j<N;j++)
				{	
					if(y[i][j]==num)
					{	
						flag=0;
						break;
					}
				}
			}	

			if (flag == 1)
			{
				printf("�����ߴ� ���� �Դϴ�. �ٽ� �Է��ϼ���.\n");
			}
		}
		
	}while(flag == 1); //flag�� 0�̸� Ż�� 

	printf("\n");	
	return num;

}

