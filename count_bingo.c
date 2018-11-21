#include "function.h"

extern int arr1[N][N];	// 사용자 빙고판배열을  해당 파일에서 사용할 수 있게 함
extern int arr2[N][N];	// 컴퓨터  빙고판배열을  해당 파일에서 사용할 수 있게 함 

//빙고된 가로,세로,대각선의 줄 수를 계산해서 반환
int count_bingo(int arr[N][N],int bingonumber)
{
// 빙고한 줄의 sum이 0이면 bingonum을 1만큼  증가시켜서 몇 줄 빙고를 했는지 알아내기  
	int sum=0;			 
	int bingonum=0;		
		
//1. 대각선 빙고 확인

	for(i=0;i<N;i++)
	{	
		sum += arr[N-1-i][i]; 		//최종 sum이 0이면 빙고 
	}
	
	if(sum==0)
		{
			bingonum++;		//빙고이면 +1 증가 시켜주기
		}
		
	
	sum=0;
	
	for(i=0;i<N;i++)
	{	
		sum+=arr[i][i];
	}
	
	if(sum==0)
	{	
		bingonum++;				//빙고면 1 증가 시켜주기  
	}	

	
// 2. 세로줄  빙고 확인

	for(i=0;i<N;i++)
	{
		sum=0;
		
		for(j=0;j<N;j++)
		{
			sum+=arr[i][j]; //최종 sum이 0이면 빙고 
		}
		
		if(sum==0)
			{
				bingonum++;	//빙고이면 81 증가 시켜주기  
			} 
	}
	

// 3. 가로줄 빙고 확인
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

	bingonumber=bingonum;
	return bingonumber; //main함수에서 사용하기 위해 bingonumber 반환해주기  
}
