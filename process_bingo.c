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



//선택된 숫자를 입력받아서 빙고판에 채우는 함수
 
int process_bingo(int arr[N][N],int num) 
{
	int i,j;
	int get_number_byMe(int num);
	int get_number_byCom(int num); //num는 입력받은 거니까 여기에다가 선언??? 
	

	
	while(1)
	{	for(i=0;i<N;i++)
		{
			for(j=0;j<N;j++)
			{
				if(arr[i][j]==num) 
				{
					printf("b");
					arr1[i][j]==0;
					arr2[i][j]==0;
					
					
					return 0;
				}
				else
				{
					return 1;
				}
			}
		}
		
	}


}



