#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5   // NxN bingo game
#define M 3 
#define OVERLAPED 1
#define UNOVERLAPED 0

int arr1[N][N];
int arr2[N][N];
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
				if((arr1[i][j]==0)||(arr2[i][j]==0)) //�� ���� �Է��� ���ڸ� �ٽ� �ݺ�  
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
} 
