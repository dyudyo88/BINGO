#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5   // NxN bingo game
#define M 1
#define OVERLAPED 1
#define UNOVERLAPED 0

extern int arr1[N][N];
extern int arr2[N][N];
int row, col;
int num;


int get_number_byCom(void)
{
	int i,j;
	int flag = 0;
	
	num = 1 + (rand() % ((N)*(N)));
	
	do
	{	
		flag =1;	
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
			return 1;
		}
		
		
	}while(flag == 1); //flag°¡ 0ÀÌ¸é Å»Ãâ 

	printf("\n");	
	return num;

}

