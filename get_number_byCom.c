#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5   // NxN bingo game
#define M 3 
#define OVERLAPED 1
#define UNOVERLAPED 0

extern int arr1[N][N];
extern int arr2[N][N];
int row, col;
int num;



int get_number_byCom(int num)
{	
	int i,j;
	num = 1 + (rand() % ((N)*(N)));
	
	while(1) //�ߺ�Ȯ��  
	{
		for(i=0;i<N;i++)
		{
			for(j=0;j<N;j++)						
			{
			
				if((arr1[i][j]==num) || (arr2[i][j]==num) )
				{
					return 1; 
				}
				
				else
				{
					printf("��ǻ�Ͱ� %d�� �����߽��ϴ�.\n",num); 
					return 0; //�� ���� ������  ���ڰ� �ƴϸ� ��������.		
				}
			}
		}
	}
	
	return num;
} 


