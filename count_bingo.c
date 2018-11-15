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

int count_bingo(int arr[N][N])
{
	int i,j;
	int sum; 
	
	//숫자 선택을 하면 0으로  바뀌고 한 줄 빙고를 하면 sum=0 인것을 찾아야한다.
	
	//1.세로줄 빙고 확인하기  
	
	for(i=0;i<N;i++)
	{
		sum=0; //초기화
		
		for(j=0;j<N;j++)
		{
			sum+=arr[i][j]; //최종 sum이 0이면 빙고 
			
			if(sum==0)
			{
				return 1;
			 } 
		} 
		 
	}
	
	
	
	
	
	
	
}
