#include "function.h"

extern int arr1[N][N];
extern int arr2[N][N];

int count_bingo(int arr[N][N],int bingonumber)
{
// 빙고한 줄의 sum이 0이면 bingonum을 +1 증가시켜서 몇 줄 빙고를 했는지 알아내는 함수  	
	int sum=0;			 
	int bingonum=0;		
// 1. 세로줄 빙고 확인하기  
	for(i=0;i<N;i++)
	{
		sum=0;
		
		for(j=0;j<N;j++)
		{
			sum+=arr[i][j]; //최종 sum이 0이면 빙고 
		}
		
		if(sum==0)
			{
				bingonum++;	//빙고이면 +1 증가 시켜주기  
			} 
	}
	

// 2. 가로줄 빙고 확인하기 
	for(j=0;j<N;j++)
	{	
		sum=0;		
		
		for(i=0;i<N;i++)
		{
			sum+=arr[i][j]; //최종 sum이 0이면 빙고 
		}
		
		if(sum==0)
			{
				bingonum++; //빙고이면 +1 증가 시켜주기  
			} 
	}
// 3. 대각선 빙고 확인(1)
/*	sum=0;
	
	for(i=0;i<N;i++)
	{
		sum+=arr[i][i]; 		//최종 sum이 0이면 빙고 
			
			if(sum==0)
			{
				bingonum++;		//빙고이면 +1 증가 시켜주기  
			} 
	} 	
// 4. 대각선 빙고 확인(1)
	sum=0;
	
	for(i=0;i<N;i++)
	{
		sum+=arr[N-i][i]; 		//최종 sum이 0이면 빙고 
			
			if(sum==0)
			{	
				bingonum++;		//빙고이면 +1 증가 시켜주기
			}
	}
	*/
	
	bingonumber=bingonum;
	return bingonumber; //main함수에서 사용하기 위해 bingonumber 반환해주기  
}
