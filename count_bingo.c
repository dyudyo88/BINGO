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




int count_bingo(int arr[N][N])
{
	int i,j;
	int sum;
	int bingo_number=0; 
	
								//숫자 선택을 하면 0으로  바뀌고 한 줄 빙고를 하면 sum=0 인것을 찾아야한다.
	
	//1.세로줄 빙고 확인하기  
	
	printf("d"); //작동확인
	
	for(i=0;i<N;i++)
	{
		sum=0;	
	
		for(j=0;j<N;j++)
		{
			sum+=arr[i][j]; //최종 sum이 0이면 빙고 
			
			if(sum==0)
			{	printf("e");//작동확인 
				bingo_number++;
			} 
		} 
		 
	}
	
	
	
	//2.가로줄 빙고 확인하기  
	
	for(j=0;j<N;j++)
	{
		sum=0;
		
		for(i=0;i<N;i++)
		{
			sum+=arr[i][j]; //최종 sum이 0이면 빙고 
			
			if(sum==0)
			{
				bingo_number++;
			} 
		 
		}
	}
	
	//3.대각선 빙고 확인  
	
	for(i=0;i<N;i++)
	{
		sum=0; //초기화
		
		sum+=arr[i][i]; //최종 sum이 0이면 빙고 
			
			if(sum==0)
			{
				bingo_number++;
			 } 
	} 
		 

	
	for(i=0;i<N;i++)
	{
		sum=0; //초기화
		
		sum+=arr[N-i][i]; //최종 sum이 0이면 빙고 
			
			if(sum==0)
			{	
				bingo_number++;
			 } 
		 
		 
	}
	
	
}
	




