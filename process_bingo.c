#include "function.h"

extern int arr1[N][N];
extern int arr2[N][N];

//���õ� ���ڸ� �Է¹޾Ƽ� �����ǿ� ä��� �Լ�
 
int process_bingo(int num)
{
	int i,j;
	
	{	for(i=0;i<N;i++)
		{
			for(j=0;j<N;j++)
			{	
			
				if(arr1[i][j]==num) //get number_byMe ���� �Է¹�����   
				{
					arr1[i][j]=0; //������ ���ڰ� 0���� �ٲ�  	
				}
				
				
				if(arr2[i][j]==num) //get number_byCom���� �Է¹��� ��  
				{
					arr2[i][j]=0;
				}
				
			}
		}
	}
}

