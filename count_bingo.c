#include "function.h"

extern int arr1[N][N];
extern int arr2[N][N];

int count_bingo(int arr[N][N],int bingonumber)
{	

	int i,j;
	int sum=0;		//������� ���� ��
	int bingonum=0;
	//���� ������ �ϸ� 0����  �ٲ�� �� �� ���� �ϸ� sum=0 �ΰ��� ã�ƾ��Ѵ�.
	
	//1.������ ���� Ȯ���ϱ�  
	

	for(i=0;i<N;i++)
	{
		sum=0;
		
		for(j=0;j<N;j++)
		{
			sum+=arr[i][j]; //���� sum�� 0�̸� ���� 
		}
		
		if(sum==0)
			{
				bingonum++;
			} 
	}
	
	
	
	//2.������ ���� Ȯ���ϱ�  
	
	for(j=0;j<N;j++)
	{	
		sum=0;		
		
		for(i=0;i<N;i++)
		{
			sum+=arr[i][j]; //���� sum�� 0�̸� ���� 
		}
		
		if(sum==0)
			{
				bingonum++;
			} 
	}
	
	
	//3.�밢�� ���� Ȯ��  
	
	
	/*
	sum=0;
	
	for(i=0;i<N;i++)
	{
		sum+=arr[i][i]; 		//���� sum�� 0�̸� ���� 
			
			if(sum==0)
			{
				bingonum++;
			} 
	} 
	

		 
	sum=0;
	
	for(i=0;i<N;i++)
	{
		sum+=arr[N-i][i]; 		//���� sum�� 0�̸� ���� 
			
			if(sum==0)
			{	
				bingonum++;
			}
	}
	*/
	
	bingonumber=bingonum;
	return bingonumber;
	
}
