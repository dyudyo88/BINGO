#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5   // NxN bingo game
#define OVERLAPED 1
#define UNOVERLAPED 0

int arr1[N][N];
int arr2[N][N];
int row, col;
int num;

//���õ� ���ڸ� �Է¹޾Ƽ� �����ǿ� ä��� �Լ�
 
int process_bingo(int arr[N][N],int num) 
{
	int i,j;
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			if(arr[i][j]==num)
			{
				arr[i][j]==-1; 
			}
		}
	}

}



