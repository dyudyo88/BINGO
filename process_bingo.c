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
	int flag;
	int get_number_byCom(int num); //num�� �Է¹��� �Ŵϱ� ���⿡�ٰ� ����??? 
	
	while(1)
	{	for(i=0;i<N;i++)
		{
			for(j=0;j<N;j++)
			{
				if(arr[i][j]==num)
				{
					arr1[i][j]==0;
					arr2[i][j]==0;
					
					return flag=0;
				}
				else
				{
					return flag=1;
				}
			}
		}
		break;
	}


}



