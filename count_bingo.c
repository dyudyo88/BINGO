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





int count_bingo(int bingonum,int arr[N][N])
{
	int i,j;
	int sum=0;

	
								//���� ������ �ϸ� 0����  �ٲ�� �� �� ���� �ϸ� sum=0 �ΰ��� ã�ƾ��Ѵ�.
	
	//1.������ ���� Ȯ���ϱ�  
	
	
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			sum+=arr[i][j]; //���� sum�� 0�̸� ���� 
			
			if(sum==0)
			{
				bingonum++;
			
			} 
		} 
		 
	}
	
	
	
	//2.������ ���� Ȯ���ϱ�  
	
	for(j=0;j<N;j++)
	{
		for(i=0;i<N;i++)
		{
			sum+=arr[i][j]; //���� sum�� 0�̸� ���� 
			
			if(sum==0)
			{
				bingonum++;
			} 
		 
		}
	}
	
	//3.�밢�� ���� Ȯ��  
	
	for(i=0;i<N;i++)
	{
		sum+=arr[i][i]; //���� sum�� 0�̸� ���� 
			
			if(sum==0)
			{
				bingonum++;
			 } 
	} 
		 

	
	for(i=0;i<N;i++)
	{
		sum+=arr[N-i][i]; //���� sum�� 0�̸� ���� 
			
			if(sum==0)
			{	
				bingonum++;
			 } 
		 
		 
	}
	
	
}
	




