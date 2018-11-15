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
	
	//���� ������ �ϸ� 0����  �ٲ�� �� �� ���� �ϸ� sum=0 �ΰ��� ã�ƾ��Ѵ�.
	
	//1.������ ���� Ȯ���ϱ�  
	
	for(i=0;i<N;i++)
	{
		sum=0; //�ʱ�ȭ
		
		for(j=0;j<N;j++)
		{
			sum+=arr[i][j]; //���� sum�� 0�̸� ���� 
			
			if(sum==0)
			{
				return 1;
			} 
		} 
		 
	}
	
	
	
	//2.������ ���� Ȯ���ϱ�  
	
	for(j=0;j<N;j++)
	{
		sum=0; //�ʱ�ȭ
		
		for(i=0;i<N;i++)
		{
			sum+=arr[i][j]; //���� sum�� 0�̸� ���� 
			
			if(sum==0)
			{
				return 1;
			} 
		} 
		 
	}
	
	//3.�밢�� ���� Ȯ���ϱ�  
	
	for(i=0;i<N;i++)
	{
		sum=0; //�ʱ�ȭ
		
		sum+=arr[i][i]; //���� sum�� 0�̸� ���� 
			
			if(sum==0)
			{
				return 1;
			 } 
	} 
		 

	
	for(i=0;i<N;i++)
	{
		sum=0; //�ʱ�ȭ
		
		sum+=arr[N-i][i]; //���� sum�� 0�̸� ���� 
			
			if(sum==0)
			{
				return 1;
			 } 
		 
		 
	}
	
	return 0;
}
