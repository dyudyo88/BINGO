#include "function.h"

extern int arr1[N][N];
extern int arr2[N][N];

int count_bingo(int arr[N][N],int bingonumber)
{
// ������ ���� sum�� 0�̸� bingonum�� +1 �������Ѽ� �� �� ���� �ߴ��� �˾Ƴ��� �Լ�  	
	int sum=0;			 
	int bingonum=0;		
// 1. ������ ���� Ȯ���ϱ�  
	for(i=0;i<N;i++)
	{
		sum=0;
		
		for(j=0;j<N;j++)
		{
			sum+=arr[i][j]; //���� sum�� 0�̸� ���� 
		}
		
		if(sum==0)
			{
				bingonum++;	//�����̸� +1 ���� �����ֱ�  
			} 
	}
	

// 2. ������ ���� Ȯ���ϱ� 
	for(j=0;j<N;j++)
	{	
		sum=0;		
		
		for(i=0;i<N;i++)
		{
			sum+=arr[i][j]; //���� sum�� 0�̸� ���� 
		}
		
		if(sum==0)
			{
				bingonum++; //�����̸� +1 ���� �����ֱ�  
			} 
	}
// 3. �밢�� ���� Ȯ��(1)
/*	sum=0;
	
	for(i=0;i<N;i++)
	{
		sum+=arr[i][i]; 		//���� sum�� 0�̸� ���� 
			
			if(sum==0)
			{
				bingonum++;		//�����̸� +1 ���� �����ֱ�  
			} 
	} 	
// 4. �밢�� ���� Ȯ��(1)
	sum=0;
	
	for(i=0;i<N;i++)
	{
		sum+=arr[N-i][i]; 		//���� sum�� 0�̸� ���� 
			
			if(sum==0)
			{	
				bingonum++;		//�����̸� +1 ���� �����ֱ�
			}
	}
	*/
	
	bingonumber=bingonum;
	return bingonumber; //main�Լ����� ����ϱ� ���� bingonumber ��ȯ���ֱ�  
}
