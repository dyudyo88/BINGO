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



//���õ� ���ڸ� �Է¹޾Ƽ� �����ǿ� ä��� �Լ�
 
int process_bingo(int num) 
{
	int i,j;
	
	//while(1)
	{	for(i=0;i<N;i++)
		{
			for(j=0;j<N;j++)
			{	
			
				if(arr1[i][j]==num) //�۵�Ȯ�� ->�۵� �� ��!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
				{
					printf("%i ", num);
					arr1[i][j]=0;
				}
				
				if(arr2[i][j]==num) //�۵�Ȯ�� ->�۵� �� ��!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
				{
					printf("%i ", num);
					arr2[i][j]=0;
					
				}
				
			}
		}
		
	}


}



